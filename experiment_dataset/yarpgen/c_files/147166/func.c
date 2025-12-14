/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147166
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (~(arr_1 [i_1])))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                                arr_15 [i_0] [i_1] = ((((/* implicit */_Bool) -1LL)) ? (var_14) : (max((((/* implicit */unsigned long long int) (+(arr_14 [1LL] [2LL] [i_1] [i_1] [i_0])))), (arr_7 [i_1] [i_1] [i_1]))));
                                arr_16 [6LL] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+(min((var_8), (var_10)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) ((var_2) > (-1LL)));
    var_19 &= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) (-(var_13)))) - (((var_12) * (((/* implicit */unsigned long long int) 1059159615060222423LL)))))), (((/* implicit */unsigned long long int) var_1))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) != (var_9)))), (((unsigned long long int) var_11))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2219708623305219306LL)), (var_16)))) ? (var_16) : (((/* implicit */unsigned long long int) var_10)))))));
}
