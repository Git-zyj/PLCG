/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_16, (min(1, var_12))))) ? ((-((max(var_2, var_14))))) : (~1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max(1, 1))) <= (arr_1 [i_0]));
        arr_3 [i_0] &= (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_3] = (((((~(arr_6 [i_0] [i_0]))) + 2147483647)) >> (((((arr_6 [i_1] [i_0]) + var_7)) - 135)));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = (-(arr_4 [i_4 + 2] [i_4]));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [21] = ((!(arr_11 [i_3] [i_2] [i_2] [i_3] [i_3])));
                            arr_18 [i_3] [i_3] [i_3] [i_1] [i_1] [i_0] [i_3] = (arr_5 [i_4 + 2]);
                            arr_19 [i_0] [i_0] [i_0] [i_2] [i_3] = (arr_15 [i_0] [16] [i_2] [i_0] [16] [i_0] [i_2]);
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_19 = (min(var_19, (arr_4 [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_20 = ((((-(arr_12 [1] [i_6])))) ? (((~(arr_10 [i_5] [i_6] [i_5] [i_5] [0])))) : (arr_0 [i_5]));
            arr_24 [i_5] [i_6] [i_6] = (arr_11 [i_5] [i_6] [i_5] [i_6] [i_6]);
            var_21 = ((-(max((arr_14 [i_6]), (min((arr_12 [2] [i_6]), -16))))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_28 [i_5] [i_5] |= var_16;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_9] = (max((arr_1 [i_5]), var_10));
                        var_22 = var_7;

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_23 = (arr_35 [i_9] [i_9]);
                            arr_37 [i_9] [i_9] [i_9] [i_7] [i_5] = ((max((16225718773195058796 ^ var_8), (var_0 >= var_13))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_24 = 1;
                            var_25 = (arr_27 [i_8]);
                            var_26 = (31 >> 1);
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_43 [i_5] [i_5] [i_12] &= (max((arr_26 [i_5]), (((max(var_16, (-9223372036854775807 - 1))) == (((((arr_5 [4]) >= var_1))))))));
                var_27 = (min(var_27, var_3));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                arr_48 [i_5] [i_5] [16] = (arr_0 [9]);
                var_28 = ((-12786 ? 1 : 3323229238859057608));
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
            {
                arr_53 [i_14] [17] [i_14] = (min(149, 1));
                var_29 = var_17;
                var_30 = (min(((~((~(arr_15 [18] [i_14] [11] [1] [i_5] [i_5] [i_5]))))), 36));
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            arr_61 [i_14] = ((4294967278 >= (max((max(98, 4235737066153008797)), (min(5140982978524823373, 60877))))));
                            arr_62 [i_16] [i_16] [17] [i_14] [i_16] [12] [i_16] = ((((min((~1), (arr_31 [i_14] [i_7])))) ? ((+((var_7 ? (arr_55 [i_14] [i_14] [i_14] [i_5]) : var_9)))) : (arr_45 [20] [18] [i_14] [i_15 - 2])));
                            var_31 = (((arr_42 [i_15 - 3] [i_15 - 3] [i_15 - 1] [i_15 - 1]) + var_15));
                        }
                    }
                }

                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    var_32 = (((((((((arr_11 [i_14] [i_14] [i_7] [i_14] [i_14]) ? var_9 : 149))) ? (arr_35 [i_14] [i_14]) : (arr_4 [i_7] [i_14])))) >= (((2538041279 && 14540312291209052441) + (((arr_59 [i_5] [6]) ? var_3 : var_9))))));

                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        arr_68 [i_14] [i_14] [i_14] [i_14] [19] [i_14] = (((arr_5 [i_18 + 1]) ? 8229366412561912840 : (arr_5 [i_18 - 1])));
                        var_33 = var_7;
                        arr_69 [i_14] [i_7] [8] [i_17] [6] = 63;
                        var_34 = var_2;
                    }
                    arr_70 [i_5] [i_14] = (((max((arr_9 [i_5] [i_7] [i_14] [i_17]), (((arr_4 [i_17] [i_5]) + var_9)))) * (((-((((arr_35 [i_14] [i_14]) > (arr_32 [i_5] [i_5] [i_5] [i_5] [i_17] [i_17])))))))));
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    var_35 = (max(var_35, -1303052833));
                    arr_73 [i_5] [i_14] [i_14] = (i_14 % 2 == 0) ? ((((arr_65 [i_19] [i_14] [i_14] [i_14] [i_14] [i_5]) >> (((arr_42 [i_5] [i_7] [i_14] [i_5]) + 63))))) : ((((((arr_65 [i_19] [i_14] [i_14] [i_14] [i_14] [i_5]) + 2147483647)) >> (((arr_42 [i_5] [i_7] [i_14] [i_5]) + 63)))));
                    arr_74 [i_14] [i_14] [i_14] [i_14] [i_14] = -var_7;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 11;i_20 += 1)
    {
        arr_78 [i_20] = (((arr_6 [i_20] [i_20]) >= (1 && 1)));
        var_36 = (!106);
        var_37 = ((!((((-32767 - 1) + (arr_33 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))));
    }
    var_38 = (min(var_7, (((var_0 && (max(var_15, var_16)))))));
    #pragma endscop
}
