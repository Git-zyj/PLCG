/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 = (max((~0), ((max(var_4, (!var_9))))));
                            arr_12 [i_0] [20] [i_2] = var_5;
                            arr_13 [i_0] = var_8;
                            var_11 = (max(var_11, ((((min((arr_3 [i_2] [i_3]), ((var_0 ? var_9 : var_1)))) + (arr_5 [i_3]))))));
                        }
                    }
                }
                arr_14 [i_0] = ((((234 ? 65525 : 44134)) >= (max((arr_9 [i_0]), 12))));
                var_12 *= (min((min((arr_10 [i_0] [i_1] [i_1] [i_0]), (arr_1 [8] [i_1]))), (((((min(var_8, var_8))) ? (!25179) : (arr_3 [i_0] [0]))))));
            }
        }
    }
    var_13 += var_3;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_14 &= 65527;
                            var_15 = var_8;
                            arr_24 [i_5] [i_7] = (max(((min((arr_21 [i_4] [i_5] [i_6] [i_7 + 1]), (arr_11 [i_7] [i_5] [i_6] [i_7 + 1])))), (min((arr_22 [i_6] [i_5] [1] [i_7 - 1] [i_7 - 1] [i_6]), (min(243, 560750930165760))))));
                        }
                    }
                }
                var_16 ^= (min(-5968, (0 ^ 11641266)));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_17 = (min((max(4194296, var_7)), (!127)));
                            arr_29 [i_4] [i_5] [i_8] [15] [i_9] [i_4] = (max((arr_28 [i_4] [i_5] [i_9 + 1] [11]), 59567));
                            var_18 = var_2;
                            var_19 ^= var_5;
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((min(var_9, var_1)) / var_4)));
    #pragma endscop
}
