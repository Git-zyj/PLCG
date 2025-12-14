/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138109
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (var_2) : (((/* implicit */long long int) arr_1 [i_4]))))))) ? (arr_5 [i_4] [i_2] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), ((signed char)28)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (arr_11 [i_2])))))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [8] [i_0] [i_0] = ((int) ((arr_1 [i_0]) <= (arr_1 [i_0])));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [i_1] [i_1])))) ? (((((/* implicit */_Bool) (-(arr_1 [i_2])))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) arr_6 [i_2])))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((var_1) ^ (((/* implicit */int) (_Bool)1))))));
    var_16 -= ((/* implicit */unsigned int) ((_Bool) ((signed char) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
}
