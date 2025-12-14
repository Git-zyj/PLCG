/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157597
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
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2 + 3] [i_3 - 1] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned char) var_2)), (((unsigned char) var_6)))));
                            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) var_7));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((short) var_5)))), (max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_3)), (var_12)))), (max((((/* implicit */unsigned long long int) var_1)), (var_5))))))))));
            }
        } 
    } 
}
