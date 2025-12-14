/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((!((((arr_2 [i_0]) ? 14563518653238825884 : 22427))))) ? (((3883225420470725749 ^ var_9) ? (arr_0 [22]) : 14563518653238825874)) : var_2);
        arr_4 [12] = (arr_1 [i_0]);
        arr_5 [i_0] = var_14;
        var_19 = var_12;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, ((min(((268435424 ? 196 : (((arr_0 [i_1]) ? 521596285 : var_14)))), 1)))));
        arr_9 [i_1] [i_1] = (((var_3 ? (arr_3 [i_1] [i_1]) : (!-1144296968))));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = var_2;

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_21 = (((arr_0 [i_2 - 1]) ? (arr_14 [i_2 + 1]) : var_1));
                var_22 = (min(var_22, ((((arr_2 [i_2 + 2]) ? (arr_2 [i_2 + 2]) : (arr_2 [i_2 + 2]))))));
                var_23 -= var_7;
                var_24 = ((((~32512) + 2147483647)) >> (((!(arr_2 [i_2])))));
                arr_19 [i_2] [i_2] [2] = ((arr_12 [i_2] [i_2] [i_2 - 1]) == 1);
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_22 [i_2] = ((var_11 ? (arr_11 [i_5]) : (arr_3 [i_2 + 2] [i_2 - 1])));
                var_25 |= ((((83359596 > (arr_10 [i_3]))) ? ((51 ? 1860939320 : 416502644)) : -var_11));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_26 *= (!4294966272);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_27 += ((((~(arr_25 [16])))) ? (~var_14) : var_0);
                            var_28 = (min(var_28, var_14));
                            arr_31 [i_2] [1] [i_2] [14] |= ((44 ? -1144296963 : var_4));
                            var_29 = (arr_0 [i_2 + 1]);
                        }
                    }
                }
            }
            var_30 = (min(var_30, ((((arr_10 [i_2 + 2]) * (arr_10 [i_2 - 1]))))));
            var_31 = (min(var_31, -8026813570616562586));
            var_32 = (min(var_32, ((!(arr_25 [0])))));
        }

        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_33 = var_13;
            arr_34 [i_2] [i_2] [3] = var_11;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_39 [i_2] [i_2] [0] = (((((var_0 ? 3719905189616776155 : 3584))) ? ((-4101697393472148203 ? var_4 : var_8)) : 7));
                        arr_40 [i_2] [i_2] [i_2] [16] [i_2] = (((arr_35 [i_2 + 1] [i_10] [i_9 + 2] [i_11]) ? ((0 ? 14563518653238825884 : 2048)) : 2434027973));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        var_34 = (((arr_36 [i_2 + 1] [i_9 - 1] [i_9] [i_9 + 2]) < var_4));
                        var_35 = 1144296949;
                        var_36 = ((0 ? 48 : var_11));
                    }
                }
            }
            var_37 = (arr_33 [i_9] [i_2] [i_2]);
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_38 = (!211);
                var_39 = ((var_10 ? (((arr_49 [i_2] [i_2] [i_14] [i_15]) ? var_8 : var_5)) : (arr_36 [i_2 - 1] [i_2 - 1] [20] [i_2 + 1])));
                arr_51 [i_2] [i_14] = (1 ? 0 : -268435425);
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    var_40 = (arr_56 [i_2] [i_2 + 1]);
                    var_41 -= -var_0;
                }
                arr_58 [i_2] [i_2] [i_2] [i_14] = (((arr_1 [i_2 + 1]) ? var_4 : (arr_1 [i_2 + 1])));
                arr_59 [i_2] [i_2] = 1;
                var_42 = var_8;
                var_43 = ((!(arr_32 [3])));
            }
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                var_44 ^= ((((!(arr_29 [8]))) ? var_10 : (!1)));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 19;i_20 += 1)
                    {
                        {
                            arr_66 [i_2] [i_2] [i_18] [1] [1] = (!7);
                            var_45 = (arr_35 [i_2] [i_14] [1] [i_19]);
                        }
                    }
                }
                var_46 = (((~249) ? ((var_11 ? 1 : 41747)) : var_15));
            }
            arr_67 [i_2] [14] [i_2] = (arr_38 [i_14]);
            arr_68 [i_2] [i_2] = -980361879;
            arr_69 [16] [i_2] = (-1734574860 ? 4227858432 : 220);
        }
    }
    #pragma endscop
}
