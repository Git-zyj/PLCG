/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147276
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
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1043574980)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2309))) : (16777215LL)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 1])) >= (((/* implicit */int) arr_4 [i_0] [i_1 + 1]))))), (min((var_12), (var_12))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_19 ^= ((/* implicit */int) max((((/* implicit */long long int) ((var_14) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1]))))), (max((((/* implicit */long long int) (unsigned short)13330)), (-7066142098728766529LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_20 = var_15;
                                var_21 &= ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_8);
}
