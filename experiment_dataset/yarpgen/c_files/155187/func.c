/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155187
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
    var_20 = ((/* implicit */int) max((var_20), (max((max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), (var_13)))), (max((var_14), (((/* implicit */int) var_0)))))), (((/* implicit */int) ((min((((/* implicit */int) var_4)), ((-2147483647 - 1)))) == (2147483647))))))));
    var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(2147483647)))) ? (max((((/* implicit */long long int) 1544080996)), (var_8))) : (((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */long long int) 1544081007))))))));
    var_22 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = (+(2147483647));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((short) max((var_13), (var_4))))), (((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */int) (unsigned short)26948)))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((min((((/* implicit */int) arr_3 [i_0] [i_0])), ((~(var_5))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_3 [i_0] [i_4 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)2482)) << (((((/* implicit */int) arr_13 [(signed char)1] [i_1 - 2] [i_2] [i_0] [i_0] [i_3] [(short)1])) + (20712)))))) : (max((arr_10 [i_3]), (((/* implicit */long long int) arr_2 [i_1 - 2] [i_3] [i_4 + 1])))))) - (158822LL))))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_4] [i_0])), (var_16)))) ? (((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_8 [i_3] [i_3] [(short)3])))) : (((((/* implicit */_Bool) var_9)) ? (1544080996) : (((/* implicit */int) var_9))))))) ? ((~(((/* implicit */int) var_10)))) : ((-(255))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), ((short)3426)));
}
