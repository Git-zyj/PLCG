/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [2] = (~var_6);
        var_13 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_14 = (min(var_14, (((-((var_6 ? 1 : var_2)))))));
                        arr_14 [i_4] [i_1] [i_1] [i_1] [i_1] &= (!16703);
                        var_15 = -5093;
                        arr_15 [i_1] [i_1] [i_1] [i_1] &= ((((var_3 ? var_10 : var_6)) * var_12));
                    }
                }
            }
        }
        var_16 = (min(var_16, ((var_2 + (~5087)))));
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = (19591 >= var_0);
        var_17 = (max((!23874), ((-((min(var_4, var_11)))))));
        arr_19 [i_5] = (~0);
        var_18 = -1;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_19 |= (((min(var_7, (min(var_0, 57585))))));
        arr_23 [i_6] = (max(((~((var_3 ? 0 : var_11)))), (((~((var_5 ? var_9 : var_5)))))));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                arr_34 [i_7] [i_8] [i_9] = (!4289136714756568304);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_20 ^= (~-16703);
                            arr_42 [i_7] [i_8] [i_8] [i_9] [i_11] = ((var_10 ? (!var_10) : (!4289136714756568304)));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_52 [i_12] [i_13] [i_12] [i_8] [i_12] = var_1;
                            arr_53 [i_7] [i_7] &= 1;
                        }
                    }
                }
                var_21 = var_3;
                var_22 = ((!(-23892 & var_8)));
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                var_23 = (~-16657);
                var_24 = (!(((var_7 ? 11525583271165339471 : 32743))));
            }
            var_25 = (max(var_25, (~-4294443008)));
            var_26 = ((~(((-32767 - 1) ? 23 : 3))));
        }
        for (int i_16 = 2; i_16 < 12;i_16 += 1) /* same iter space */
        {
            var_27 = var_0;
            arr_60 [i_7] &= (~var_10);
            var_28 -= 23;
            var_29 = (max(var_29, var_4));

            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {
                var_30 = 497144552;
                var_31 += var_4;
                var_32 = ((-32184 ? 32743 : 3672737759));
            }
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                arr_67 [i_16] [i_16] [i_18] [i_16] = ((37 ? 2759581502 : var_9));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_33 = 11525583271165339482;
                            var_34 = 32767;
                            var_35 = ((var_1 ? ((var_1 ? 1 : var_5)) : (!65535)));
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 3; i_22 < 12;i_22 += 1) /* same iter space */
                    {
                        var_36 = 8024;
                        var_37 -= var_1;
                    }
                    for (int i_23 = 3; i_23 < 12;i_23 += 1) /* same iter space */
                    {
                        var_38 = ((var_4 ? -622229536 : ((1 ? 3633385973 : 3231683764))));
                        arr_81 [i_18] = (((((var_8 ? var_6 : 27))) ? (!-8022) : (var_4 >= var_0)));
                        arr_82 [i_18] = var_7;
                        var_39 = (min(var_39, var_0));
                    }
                    arr_83 [0] [i_18] [i_7] &= (((!622229537) ? var_9 : 1));
                    arr_84 [i_7] [i_16] [i_7] [i_7] [i_7] [i_7] |= (~4619289998610985061);

                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        arr_87 [i_18] = ((11640991445184518969 ? 28967326 : var_11));
                        var_40 = var_1;
                        var_41 = (!var_9);
                        var_42 = (min(var_42, (~-14538)));
                        var_43 = -1504;
                    }
                    arr_88 [i_18] [i_16] [i_18] [i_21] = (~131);
                }
                for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                {
                    arr_91 [i_7] [i_7] [i_18] [i_25] = ((-1619437041 ? var_7 : 5348304179769929375));

                    for (int i_26 = 0; i_26 < 13;i_26 += 1)
                    {
                        var_44 = (max(var_44, 3672737758));
                        var_45 = ((-var_9 ? ((var_10 ? var_11 : var_0)) : (var_10 | -12483)));
                        var_46 = var_9;
                        var_47 = ((16316284650622055071 ? -31168 : -var_12));
                        var_48 = (~var_4);
                    }
                    for (int i_27 = 2; i_27 < 10;i_27 += 1)
                    {
                        var_49 -= ((var_4 ? (((1 ? var_9 : 1))) : 6291456));
                        arr_99 [i_7] [i_16] [i_18] [i_25] [i_27] = (((var_3 ? var_1 : 27346)));
                    }
                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        var_50 &= (!-31539);
                        arr_102 [i_7] [5] [i_18] [i_18] [i_28] = (!5);
                    }
                }
                arr_103 [i_18] = ((~((2985918639 ? 16316284650622055078 : -27861))));
                var_51 = var_9;
            }
        }
        for (int i_29 = 2; i_29 < 12;i_29 += 1) /* same iter space */
        {
            var_52 = 1;

            for (int i_30 = 0; i_30 < 13;i_30 += 1)
            {
                arr_110 [i_7] [i_29] [i_30] = var_7;
                var_53 += 31;
            }
            for (int i_31 = 1; i_31 < 11;i_31 += 1)
            {

                for (int i_32 = 2; i_32 < 9;i_32 += 1)
                {
                    var_54 = var_5;
                    var_55 = (max(var_55, 1));

                    for (int i_33 = 0; i_33 < 13;i_33 += 1)
                    {
                        var_56 = (~var_9);
                        var_57 |= var_6;
                    }
                    var_58 &= -var_5;
                }
                arr_119 [i_7] [i_29 - 1] [i_29 - 1] |= (((!4289136714756568304) ? (47662 & 1) : 2305870947));
                var_59 = ((0 ? 11525583271165339474 : var_7));
                var_60 = (min(var_60, ((((~var_3) ? 1 : 1)))));
            }
            for (int i_34 = 2; i_34 < 11;i_34 += 1)
            {
                var_61 -= -var_5;

                for (int i_35 = 0; i_35 < 13;i_35 += 1)
                {

                    for (int i_36 = 1; i_36 < 12;i_36 += 1)
                    {
                        arr_127 [i_7] [i_34] [i_7] [i_34] [i_35] [i_34 + 2] [i_34] &= var_5;
                        var_62 = ((~12478) <= 12478);
                        var_63 += (134209536 ? (3758096384 + 0) : -var_1);
                        arr_128 [i_36 + 1] [i_35] [i_36] [i_29] [i_7] = (((((var_0 ? var_9 : var_2))) ? var_9 : 1));
                    }
                    var_64 = (!(~var_2));
                    var_65 = (~255);
                }
            }
            var_66 = var_12;
            /* LoopNest 3 */
            for (int i_37 = 0; i_37 < 13;i_37 += 1)
            {
                for (int i_38 = 0; i_38 < 13;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 13;i_39 += 1)
                    {
                        {
                            arr_138 [i_37] [i_37] [i_37] [i_38] = var_5;
                            var_67 = ((-(!3174534955)));
                            arr_139 [i_7] [i_7 - 3] [i_7 - 3] [i_37] [i_7 - 3] [i_37] [i_39] = ((~(~581343059925549077)));
                            var_68 = (max(var_68, var_8));
                            arr_140 [i_7] [i_7 - 3] [i_7] = 1293971049;
                        }
                    }
                }
            }
            var_69 = 17908;
        }
        var_70 = -12817;
        var_71 = ((-2147483640 ? (!var_11) : var_4));
        var_72 = ((var_10 ? ((1 ? 8734 : 1)) : ((-1 ? 213 : var_4))));
    }
    for (int i_40 = 0; i_40 < 15;i_40 += 1)
    {
        arr_145 [i_40] = min(-1, -1);
        var_73 &= (min(((-((max(var_1, var_11))))), (~var_3)));
        var_74 = 34366;
        var_75 |= var_12;
        arr_146 [i_40] = min(((min((!0), ((var_8 ? -2147483646 : var_3))))), var_0);
    }
    var_76 = var_9;
    #pragma endscop
}
