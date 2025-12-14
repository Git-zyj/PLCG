/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17521
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
    var_14 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned char) ((_Bool) var_7))))));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3])), (((((/* implicit */long long int) ((/* implicit */int) ((var_3) || (((/* implicit */_Bool) (unsigned char)235)))))) / (((((/* implicit */_Bool) var_5)) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))))));
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */long long int) arr_1 [(_Bool)0]);
            }
        } 
    } 
}
