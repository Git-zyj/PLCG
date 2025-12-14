/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((~3353725146) / var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] = 87;
                var_20 *= (min(16671, 32768));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2 - 2] [7] = (((arr_7 [i_2]) > var_15));
        var_21 = (~0);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3 + 1] = 169;
        var_22 -= ((!(arr_0 [i_3])));
        arr_12 [7] |= 71;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    arr_18 [i_5 - 1] [i_4] [i_4] [i_5] = -169;
                    var_23 -= 83;
                    arr_19 [i_5] [i_5] = (arr_16 [i_3] [i_3 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
