/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = 0;
                            arr_11 [i_3] [i_3] = ((+(((32767 + -29878) + var_3))));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3 + 1] [i_1] = ((max(((14616783962760030797 ? 29877 : var_11), (arr_0 [i_0])))));
                                var_18 += (arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 1]);
                                arr_16 [i_0] [0] [i_2] [i_1] [0] |= 0;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                arr_19 [i_3] [i_1] [i_3] [i_3 - 2] [i_3] [i_5] [i_3 + 1] = ((-(arr_17 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_5])));
                                var_19 = ((!(((arr_12 [2] [2] [i_5]) > var_7))));
                                var_20 ^= 4833346172952496686;
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 17;i_6 += 1)
                            {
                                var_21 += 18446744073709551615;
                                arr_23 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] |= ((29877 >= (525795668271593869 / var_4)));
                                var_22 = (~5012919477433224867);
                                arr_24 [i_1] [i_2 - 1] [i_3] = 11424299370675165712;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_23 = -6937;
                                var_24 = 969624597;
                                arr_28 [i_7] [i_3 - 2] [i_3] [i_1] [i_0] = (arr_14 [i_1] [0] [i_2] [i_2 + 2] [i_2 + 1] [i_7] [i_7]);
                                arr_29 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3] [i_7] = (2041427764 % 7758742352610791960);
                            }
                        }
                    }
                }
                var_25 = (min(((((arr_22 [i_0] [i_0] [10] [i_0] [i_0] [i_0]) || var_2))), var_0));
                var_26 = ((~(~var_9)));
                var_27 |= ((+(((arr_26 [i_0] [i_0] [16] [i_0] [i_1] [i_1]) ? var_2 : -187729035))));
                arr_30 [i_0] [i_1] [i_1] = var_12;
            }
        }
    }
    var_28 = var_4;
    #pragma endscop
}
