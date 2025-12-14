/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137743
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_3] [12] [12] [i_4] = arr_9 [i_0] [i_0 - 4] [i_0] [i_0 - 4];
                                var_20 = ((/* implicit */int) arr_12 [i_4 - 2] [i_1] [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_0] [i_2]);
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */int) arr_14 [i_0]);
        var_21 -= ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 2]);
        var_22 *= ((/* implicit */unsigned char) arr_6 [i_0 - 1] [i_0]);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_5 [i_0 - 2]))));
    }
    var_24 = ((/* implicit */unsigned short) var_15);
}
