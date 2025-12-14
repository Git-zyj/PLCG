/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((var_8 ? (var_5 >= var_11) : -var_10))) >= 0));
    var_21 += ((4528926731218599932 ? 4 : 1023));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (((!3) >= (((((-19792 ? 27 : -3689123144299881152)) >= (((9223372036854775807 ? 1733483382 : 4294967295))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [20] [i_2 - 1] [i_3 - 1] [i_4] [i_4] = (((~3) ? -var_16 : (((arr_11 [i_2 + 2] [i_3]) ? (arr_3 [i_0 - 2] [i_2 - 1]) : var_3))));
                                var_22 = (max(var_22, ((((((~(arr_13 [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1])))) ? (((arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_1]) ? (arr_5 [i_2 + 2] [i_2] [i_2]) : (arr_5 [i_2 + 2] [21] [i_2]))) : ((-(-127 - 1))))))));
                                var_23 = ((var_4 ? ((max(-387745819, 120))) : ((6 ? 19791 : 5608787602299400266))));
                            }
                        }
                    }
                    var_24 = (arr_11 [10] [i_2]);
                }
            }
        }
        var_25 ^= (-190860178 >= 2316407927663133122);

        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    var_26 *= (arr_11 [i_0 + 1] [i_5]);
                    var_27 = (max(var_27, 2));
                }
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    arr_28 [i_0] [i_0] [i_6] [i_0 + 1] = ((!(((3910714379250977727 ? -21521 : 1733483384)))));
                    var_28 += var_11;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_29 = ((((-(var_14 >= var_14))) >= ((((((var_0 ? var_5 : -3))) >= (((arr_22 [1] [8]) ? 21527 : var_4)))))));
                    var_30 = var_11;
                }
                var_31 |= ((~(!18446744073709551615)));
                arr_32 [i_6] = ((~((var_14 ? 70 : (arr_4 [i_6 + 1] [i_5 + 1] [i_0 - 3])))));
            }
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                arr_35 [i_0] [i_0] [i_0] = ((1327065118 ? 1 : -19774));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_40 [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] = 128;
                            var_32 = (max((((var_17 >= (arr_15 [i_5 + 1])))), (arr_15 [i_5 - 2])));
                            arr_41 [i_12] [i_11] [i_10] [13] [i_0] [i_0] = (((!9198721844390964215) && (!6822)));
                            arr_42 [i_0] [i_5 + 1] = ((var_18 ? 3 : 4));
                        }
                    }
                }
            }
            arr_43 [i_5] [i_0] = var_2;
        }
    }
    #pragma endscop
}
