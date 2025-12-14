/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 = (arr_4 [i_0] [i_0] [i_1]);
            var_20 = (max(var_20, (arr_6 [i_0])));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = (arr_8 [i_0] [i_3] [13]);
                            var_21 = arr_6 [i_0];
                            var_22 = (arr_3 [i_0]);
                            arr_14 [i_4] [i_0] [i_3] [0] [i_0] [i_0] = ((~(arr_1 [i_0])));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_23 = arr_4 [i_0] [i_0] [i_0];
                    var_24 += (arr_17 [i_0] [i_1] [i_2] [i_5] [i_5]);
                    var_25 -= arr_17 [i_0] [i_1] [i_2] [i_5] [i_5];
                }
            }
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {

                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        var_26 = (arr_18 [i_0]);
                        var_27 = -1925283616685019967;
                        var_28 ^= -1925283616685019963;
                        var_29 = 1925283616685019989;
                    }
                    arr_27 [i_0] [i_0] [i_6] [i_0] [i_6] = (arr_24 [i_0] [i_0] [i_7] [i_7] [i_7] [i_6]);
                    var_30 = (arr_0 [i_0] [i_0]);
                    var_31 = (arr_8 [i_0] [i_0] [0]);
                }
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    var_32 = arr_1 [18];
                    arr_30 [i_0] [i_6] [i_6] [i_7] [i_0] = (arr_23 [i_0] [i_0] [i_7] [i_10]);
                    var_33 = (!65);
                }
                arr_31 [i_0] [i_6] [i_0] [i_0] = (arr_7 [i_0] [5]);
            }
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 16;i_13 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] = (!101);
                            arr_41 [i_0] [i_0] = ((~(arr_24 [i_0] [i_6 + 3] [i_0] [i_11] [i_12] [i_13])));
                            var_34 += (!0);
                        }
                    }
                }
            }

            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_35 = (arr_19 [i_0] [i_6]);

                for (int i_15 = 3; i_15 < 17;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_36 = (max(var_36, 255));
                        var_37 = 1813859222;
                        var_38 = (arr_47 [i_0] [i_6] [i_6] [i_15 - 3]);
                        var_39 = (arr_34 [i_0]);
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 619049168;
                    }
                    for (int i_17 = 1; i_17 < 19;i_17 += 1)
                    {
                        var_40 |= (-(arr_18 [i_14]));
                        arr_56 [i_0] = 5;
                    }

                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        var_41 -= (~(~235));
                        var_42 = ((!(arr_26 [i_0] [i_6])));
                        var_43 = (max(var_43, (((!(arr_25 [i_15] [i_15] [i_14] [i_0] [i_0]))))));
                        var_44 = (arr_18 [i_0]);
                    }
                    for (int i_19 = 1; i_19 < 17;i_19 += 1)
                    {
                        var_45 = arr_38 [i_19 + 1] [i_19] [i_15] [i_14] [i_14] [i_6] [i_0];
                        var_46 = 19;
                    }
                    for (int i_20 = 4; i_20 < 18;i_20 += 1)
                    {
                        var_47 = (min(var_47, 4));
                        var_48 &= ((!(arr_49 [i_0] [i_6])));
                    }
                    arr_63 [i_14] [i_0] [i_14] [i_6] [i_0] [i_0] = (arr_1 [i_0]);
                    var_49 = (min(var_49, 28));
                }
            }
        }
        for (int i_21 = 2; i_21 < 19;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                var_50 = (arr_26 [i_0] [i_21]);
                var_51 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_21] [i_22]);
            }
            var_52 = ((~(arr_53 [i_0] [i_0] [i_0] [i_21] [i_21])));
            var_53 = arr_53 [i_21] [i_21] [i_0] [i_0] [i_0];

            for (int i_23 = 0; i_23 < 20;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 17;i_24 += 1)
                {
                    for (int i_25 = 2; i_25 < 17;i_25 += 1)
                    {
                        {
                            arr_77 [i_0] [i_0] [i_23] [i_24] [i_25] = (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_78 [i_0] = (arr_50 [17]);
                        }
                    }
                }

                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    var_54 = (min(var_54, (arr_16 [i_0] [i_21] [i_23] [i_26])));
                    var_55 &= ((-((-(arr_37 [i_0])))));
                    var_56 ^= (!2430583834);

                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        arr_83 [i_0] [i_0] [i_0] [i_26] [i_27] [i_26] [i_21] = (~(~-1925283616685019998));
                        arr_84 [i_0] [i_0] [i_0] = -548282369;
                    }
                }
                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    arr_89 [i_0] = -1925283616685019983;

                    for (int i_29 = 1; i_29 < 19;i_29 += 1)
                    {
                        var_57 += (!126);
                        var_58 = arr_24 [5] [i_21] [0] [i_23] [i_28] [i_29];
                    }
                    var_59 = ((!(arr_25 [i_0] [i_21] [i_23] [i_23] [i_28])));
                }
                for (int i_30 = 3; i_30 < 18;i_30 += 1) /* same iter space */
                {
                    var_60 -= (arr_69 [i_0] [i_21] [i_23] [i_21]);

                    for (int i_31 = 0; i_31 < 20;i_31 += 1)
                    {
                        var_61 += (~2);
                        var_62 = (arr_67 [i_0] [i_21] [i_23]);
                    }
                    for (int i_32 = 3; i_32 < 17;i_32 += 1)
                    {
                        var_63 = ((!(~-7935139511268468647)));
                        var_64 = (min(var_64, (arr_34 [i_0])));
                    }
                    arr_100 [i_0] [i_21] [i_23] [i_23] [i_30] [i_0] = -360510461630483922;
                }
                for (int i_33 = 3; i_33 < 18;i_33 += 1) /* same iter space */
                {
                    var_65 = (arr_60 [i_23] [i_0]);
                    var_66 += arr_4 [i_0] [i_21] [i_23];
                    arr_104 [i_0] [i_0] = (arr_22 [i_33]);
                    var_67 += (arr_1 [i_0]);
                }
            }
            /* LoopNest 3 */
            for (int i_34 = 1; i_34 < 18;i_34 += 1)
            {
                for (int i_35 = 2; i_35 < 18;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 20;i_36 += 1)
                    {
                        {
                            var_68 += -1115926110;
                            var_69 = ((~(arr_86 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
        var_70 = (max(var_70, (arr_61 [8] [i_0] [i_0] [i_0] [8] [i_0])));
        var_71 = (arr_33 [i_0] [i_0] [i_0] [i_0]);
        var_72 = 213;
    }

    for (int i_37 = 0; i_37 < 13;i_37 += 1)
    {
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 13;i_38 += 1)
        {
            for (int i_39 = 3; i_39 < 11;i_39 += 1)
            {
                {
                    var_73 -= ((!(arr_51 [i_39] [i_39] [i_38] [i_38] [i_37] [i_37])));
                    var_74 &= ((~(arr_18 [i_37])));
                    var_75 = (arr_24 [i_37] [6] [i_38] [i_38] [i_39 + 2] [i_38]);
                    arr_123 [i_37] [i_38] = (arr_10 [i_37] [i_37]);
                }
            }
        }
        var_76 += (~(arr_90 [i_37] [i_37] [i_37] [i_37]));
        var_77 += -5;
    }
    #pragma endscop
}
