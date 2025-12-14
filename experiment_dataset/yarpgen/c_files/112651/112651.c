/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = ((var_1 == (((65529 * 18) / var_8))));
                                var_11 = 65520;
                            }
                        }
                    }
                    var_12 = ((+(min(((((arr_8 [1] [7] [7] [7]) ? 6 : 18))), (arr_3 [i_0])))));
                    arr_14 [i_0] [i_2] = (max(65509, var_7));
                    arr_15 [i_0] [i_0] [i_2] |= (arr_3 [i_1]);
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        arr_18 [i_5] = ((((min(-1541416310084269914, -1))) ? 65529 : ((((15 ? (arr_7 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : 27588))))));
        var_13 = var_7;
        var_14 = (arr_3 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((arr_22 [i_6]) ? ((65505 << (759213415 - 759213402))) : (arr_20 [i_6])));
        var_15 = ((arr_22 [i_6]) ? var_5 : (arr_22 [i_6]));
    }
    #pragma endscop
}
