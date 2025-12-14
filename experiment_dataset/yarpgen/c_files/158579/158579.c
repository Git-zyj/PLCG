/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((!(arr_7 [i_0] [i_0] [i_1] [i_2])));
                    arr_11 [18] [i_2] &= ((((-(arr_4 [i_1 + 1] [0] [i_1 - 2]))) - -223764579));
                }
            }
        }
    }
    var_18 = var_15;
    var_19 = (min(var_12, ((((min(-9634, 223764568))) ? var_14 : var_0))));
    var_20 = (((var_5 && 10330581078632897314) - var_11));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_21 = (max(var_21, (((min((arr_9 [i_3 + 2]), 1))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_22 = (((max((arr_8 [i_3 - 1] [i_3] [i_3]), 1524865984))) && ((2138108585 && (arr_7 [i_6] [i_5] [i_4] [i_3]))));
                            var_23 = (((arr_12 [i_3 + 3]) ? (arr_18 [i_6]) : 8620));

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                var_24 *= 4834165523937897169;
                                var_25 = (max(var_25, (((-(arr_16 [i_4] [15] [i_4]))))));
                                var_26 -= (((((-7640 ? 10 : 56933))) ? -7640 : 128));
                                var_27 = 822215170;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
