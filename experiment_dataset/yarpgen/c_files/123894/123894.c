/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((min((126 / var_10), (max(var_7, 1733613017646713866)))) ^ (((var_1 ? var_12 : var_13)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = 3558353833;
        var_17 = (max(var_17, ((((arr_1 [i_0 - 2] [i_0]) && 0)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (1 ^ 126);
                        var_19 ^= ((~(arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_3] [i_3])));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_20 = 1766496973;
                            var_21 *= (((arr_8 [i_0] [i_3] [i_0 + 2] [i_0 + 2] [i_0 - 2]) ? -16384 : var_0));
                            var_22 ^= (arr_1 [i_0] [i_0 - 2]);
                        }
                        arr_12 [i_0 - 2] [i_1 + 1] [i_1] [i_0 - 2] [i_1] = ((!(arr_8 [i_2 + 2] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                    }
                    var_23 = var_4;
                }
            }
        }
    }
    var_24 *= (min((max(var_9, (~var_11))), var_5));
    #pragma endscop
}
