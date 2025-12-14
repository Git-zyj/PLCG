/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186388
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                    arr_8 [(signed char)11] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 401294245)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)28))))) ? (var_4) : (((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1] [i_1 + 1])) ? (arr_2 [i_2 + 1] [i_2] [i_1 + 1]) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_4 [i_2 - 1])) | (((/* implicit */int) arr_4 [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (-((+(var_10)))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_1 [i_1 + 1])))) | ((+((-(18446744073709551615ULL)))))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [(signed char)13] [i_2])) << (((arr_3 [i_2] [i_3]) - (637540602))))) ^ (min((((/* implicit */int) arr_12 [(_Bool)1] [i_2 + 1] [i_1 + 1] [i_3] [(_Bool)1] [i_2])), (var_12)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((min((max((var_4), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) - (6477931642848332304ULL)))));
    var_22 = ((/* implicit */short) (((+((+(((/* implicit */int) var_1)))))) >= (((((var_8) + (2147483647))) >> ((((~(var_0))) + (1303384964)))))));
}
