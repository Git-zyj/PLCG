/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162038
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
    var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */_Bool) (+((+(arr_1 [i_1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_2 [i_0])))))))));
                                var_21 = ((/* implicit */_Bool) (~((~(228941683U)))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 - 2])))))));
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 228941683U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
