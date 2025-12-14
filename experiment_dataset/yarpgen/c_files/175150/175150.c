/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = 3707330073;
                    arr_10 [i_0] [i_1] = 18446744073709551615;
                    var_21 = (arr_0 [i_1 - 2] [i_2 - 1]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [2] [i_0] [i_2] [i_1] [i_3] [i_3] = (((arr_7 [2]) & ((min((arr_2 [i_3]), var_16)))));
                        var_22 = (max(var_22, (42015 == 1)));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_23 = (23520 ? (4882486805723014801 / -1) : (((42036 ? 2047 : var_2))));
                    arr_24 [i_4] [i_4] [i_4] [i_5] = (~56094);
                    arr_25 [i_6] [i_5] [i_5] [i_4] = ((~(arr_16 [i_4])));
                }
            }
        }
        var_24 = (!2446498955);

        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_25 &= -1358796149;
                        arr_34 [i_4] [i_4] [i_4] [i_4] = var_8;
                        var_26 = ((-(arr_27 [i_9] [i_4])));
                        var_27 = (min(var_27, 44452));
                    }
                }
            }
            arr_35 [i_7] [2] = arr_29 [i_4 - 1];
            var_28 = ((var_2 <= (arr_22 [11] [i_4 - 1] [i_4 - 1])));
            var_29 = 45873;
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
            {
                var_30 = 1358796134;
                var_31 += (((arr_18 [i_11 + 1] [i_11]) ? (arr_19 [i_10] [i_4 + 1] [i_10]) : (arr_19 [i_10] [i_4 + 1] [i_10])));
                arr_40 [i_4] [i_10] [6] [i_4 + 1] = (((-1213489470710653833 + -1358796178) ? 1971493617 : (arr_15 [i_11 + 2])));
            }
            for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_49 [i_12] [11] [i_12] = ((!(arr_31 [i_10] [i_14])));
                            var_32 += -5587312396386966904;
                        }
                    }
                }
                arr_50 [i_12] = (arr_30 [i_10]);
                var_33 = ((-(!var_14)));
                var_34 = -23485;
            }
            var_35 = (((arr_41 [i_4]) & (arr_41 [i_10])));
        }

        for (int i_15 = 4; i_15 < 12;i_15 += 1)
        {
            arr_55 [i_15 - 3] [i_4] = (arr_48 [0] [i_15 + 1] [0] [i_4] [2] [6] [i_15]);
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {
                        arr_63 [i_4] [i_15] [1] [i_4] [i_17] = (18446744073709551607 && 23482);

                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            arr_66 [i_4] [1] [i_16] [9] [i_18] = 56070;
                            var_36 = (arr_20 [i_18] [i_16 - 1] [i_4]);
                            var_37 = ((~(arr_29 [i_4 + 1])));
                            var_38 = (arr_37 [1] [i_15] [i_16]);
                        }
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            var_39 = 27517;
                            arr_69 [i_19] [i_16 - 1] [8] [i_19] = 42035;
                            var_40 = (((~(arr_52 [i_4] [10]))));
                        }
                    }
                }
            }
            var_41 = (arr_15 [i_4]);
            arr_70 [10] = var_10;
        }
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            var_42 = 4882486805723014816;
            var_43 = (((((arr_45 [i_4] [i_20] [11] [i_4]) << (((((arr_51 [0]) + 124)) - 14)))) == (arr_73 [i_4] [0] [i_20])));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        {
                            var_44 ^= var_2;
                            arr_82 [i_21] [6] [i_23] [i_20] = var_2;
                            var_45 = (arr_67 [i_22 + 1] [i_22 + 1] [4] [i_22 + 3] [10]);
                            var_46 = ((!(arr_28 [i_4 + 1])));
                        }
                    }
                }
            }
            var_47 = (-6175565003386953358 / 49);
        }
    }
    for (int i_24 = 1; i_24 < 12;i_24 += 1) /* same iter space */
    {
        var_48 = (min(var_48, ((((!30849) | (min(9439, (arr_31 [i_24 + 1] [i_24 + 1]))))))));

        for (int i_25 = 2; i_25 < 12;i_25 += 1)
        {
            var_49 = min(((~((9428 ? (arr_17 [i_24]) : -1358796149)))), 34359738367);

            for (int i_26 = 0; i_26 < 13;i_26 += 1) /* same iter space */
            {
                var_50 = (min(var_50, ((-(min(var_4, ((var_6 ? var_4 : (arr_20 [12] [i_25] [i_26])))))))));
                arr_90 [i_26] [i_24] [i_24] = -649446077601391800;
            }
            for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
            {
                arr_93 [0] = (~11221);
                var_51 *= (!1358796149);
                var_52 |= ((~((~(max(15833554713860430723, 3980058))))));
            }
        }
    }
    #pragma endscop
}
