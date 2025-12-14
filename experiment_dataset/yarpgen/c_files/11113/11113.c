/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_9;
    var_11 = -16384;
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_0] = ((var_4 + (((((-16374 ? 16383 : 16383))) ? ((-16385 ? (arr_3 [i_0] [i_1]) : 16370)) : -16384))));
                            arr_11 [i_0] [i_0] [i_3] [i_2] [i_3] [i_3] |= (((arr_1 [i_0] [i_2]) ? ((((16370 ? -16371 : (arr_4 [i_1] [i_1] [i_1]))) - (var_2 | var_7))) : (arr_4 [i_2] [i_2] [i_1 - 1])));
                            var_13 |= ((-((min((arr_8 [i_0] [i_0] [i_2] [i_0]), var_9)))));
                        }
                    }
                }
                var_14 -= max(16383, -16384);
            }
        }
    }
    #pragma endscop
}
