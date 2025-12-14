/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 4294967295));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((((((var_19 ? (arr_1 [1]) : (arr_1 [i_0 - 3]))) >> ((((max(var_12, (arr_0 [i_0])))) - 4096))))) && (((-105 ? 79 : -69)))));
        var_21 = (arr_1 [i_0]);
        var_22 = (max(var_22, 239));
        var_23 = 54;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    var_24 = 73;
                    var_25 ^= ((~(arr_8 [i_3 + 1] [i_2 - 1] [i_2 - 2] [i_2 + 1])));
                    arr_12 [i_1] [i_3] [21] = (arr_5 [i_2 - 2] [i_3 - 4]);
                }
            }
        }
        arr_13 [i_1] = var_17;
        var_26 = (((arr_9 [i_1]) ? 17 : (arr_7 [i_1] [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_27 = (arr_7 [21] [i_4] [i_4]);
        arr_16 [i_4] = -11068;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_28 = (((((11069 == (arr_7 [i_5] [i_6] [i_6])))) << ((((3598821162 ? -1672336568341580218 : 83)) + 1672336568341580239))));
            var_29 = (arr_11 [i_5] [i_6] [i_6]);

            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                var_30 = (max(var_30, var_10));
                var_31 = (arr_8 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                arr_24 [i_5] [i_6] [i_6] = (arr_4 [i_6]);
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_32 = ((((-(arr_5 [i_11] [i_8]))) != (((var_19 != (arr_14 [i_5]))))));
                            arr_39 [i_5] [i_10] [i_9 + 1] [i_10] = (arr_29 [i_5] [i_9 - 1] [i_9] [i_10 - 1]);
                        }
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            var_33 -= (((arr_4 [i_9 - 1]) - (arr_37 [i_12] [i_5] [i_12] [i_12 + 2] [i_5] [14])));
                            var_34 += (arr_25 [i_9] [i_8]);
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_35 = (~var_19);
                            var_36 = (min(var_36, ((((arr_32 [i_10 + 2] [i_5] [i_5] [i_9]) ? var_1 : -114)))));
                        }
                        var_37 = (240 && 121);
                        var_38 = (arr_11 [i_10] [i_9 - 1] [i_10]);
                    }
                }
            }

            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            arr_55 [i_5] [i_8] [i_14] = (arr_10 [i_14] [i_8] [i_14]);
                            arr_56 [i_14] [i_14] [20] [i_15] [i_16] [i_15] = (((var_0 > var_17) / -11075));
                            var_39 = ((-var_14 ? (((arr_37 [i_16] [i_14] [18] [i_14 + 4] [i_14] [i_5]) / var_4)) : 181));
                        }
                    }
                }
                arr_57 [i_14] = (~63);
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_40 -= -1365;
                            var_41 = (min(var_41, ((((arr_22 [i_5] [i_8]) ? 11039 : (arr_29 [i_19] [i_8] [i_18] [i_17]))))));
                        }
                    }
                }
                var_42 = ((((((arr_32 [i_17] [i_17] [i_17] [i_5]) - var_13))) ? -var_5 : -48));
            }
        }

        for (int i_20 = 3; i_20 < 19;i_20 += 1)
        {

            for (int i_21 = 4; i_21 < 21;i_21 += 1)
            {
                var_43 = ((~((((arr_33 [i_21] [i_5] [i_5] [i_5] [i_5]) >= 0)))));
                var_44 = var_12;
                var_45 = ((262143 != (-1471550245369032739 || var_7)));
            }
            for (int i_22 = 2; i_22 < 21;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_46 -= (arr_47 [i_23]);
                            var_47 = (arr_30 [i_5]);
                            var_48 = (((-63 ? var_14 : var_19)));
                        }
                    }
                }
                var_49 = ((var_13 ^ (arr_8 [i_5] [i_5] [i_22 - 1] [i_5])));
                arr_80 [i_22] [i_20 + 3] [i_22] = -3966961397;
            }
            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                arr_83 [i_25] = var_14;
                var_50 = 4294967295;
            }
            for (int i_26 = 0; i_26 < 22;i_26 += 1)
            {
                arr_87 [16] [i_26] [i_26] [i_5] = var_3;

                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    arr_92 [i_5] [i_26] [i_26] [17] [9] [i_5] = ((-1738801458 ? 207 : 11048));
                    var_51 -= (((((11039 ? (arr_76 [i_27] [i_27] [4] [i_5] [i_20] [i_5] [i_5]) : (arr_40 [i_26] [i_26] [i_26] [i_27] [i_26] [i_5] [i_5])))) ? 92 : (arr_88 [i_20 - 1] [i_20 + 3] [i_20])));
                }
                var_52 = (~var_9);
            }

            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                var_53 = (max(var_53, ((((((~(arr_96 [i_5])))) ? var_9 : (-98 % 1222705058545457404))))));

                for (int i_29 = 0; i_29 < 22;i_29 += 1)
                {
                    var_54 = ((((((arr_40 [i_5] [i_20] [i_29] [i_29] [i_29] [i_29] [10]) ? var_2 : (arr_70 [i_5] [0])))) ? 239 : ((var_6 ? 24319 : var_3))));
                    arr_99 [i_29] = (arr_9 [i_29]);

                    for (int i_30 = 1; i_30 < 19;i_30 += 1) /* same iter space */
                    {
                        arr_103 [i_5] [i_20] [i_20] [i_29] [i_29] = -16;
                        var_55 += (arr_42 [i_30 + 1] [i_28]);
                    }
                    for (int i_31 = 1; i_31 < 19;i_31 += 1) /* same iter space */
                    {
                        var_56 = (-47 == 272566277);
                        var_57 = 43644;
                        var_58 += (((arr_70 [i_5] [i_20 + 2]) ? -1 : (~var_17)));
                        var_59 = (((arr_6 [i_5] [i_31 + 2] [i_20 - 3]) ? (!79) : (arr_82 [i_29] [i_20] [i_28])));
                    }
                }
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 22;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 22;i_33 += 1)
                    {
                        {
                            arr_113 [i_33] [i_32] [i_32] [i_28] [i_20] [i_5] [i_5] = ((var_18 + ((83 ? -1672336568341580208 : 172))));
                            var_60 ^= (((arr_89 [15] [i_20 - 2] [i_20 - 3] [7] [i_20 + 1]) ? (arr_43 [i_20 + 2] [i_20 - 3] [i_20 - 1] [i_20] [i_20]) : 11111));
                        }
                    }
                }
            }
            var_61 = (((~48) <= ((13 + (arr_17 [i_5] [i_20])))));
        }
        /* LoopNest 2 */
        for (int i_34 = 2; i_34 < 20;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 22;i_35 += 1)
            {
                {
                    var_62 = ((-1 ? -1 : 43644));
                    var_63 += var_19;
                }
            }
        }
    }
    var_64 = var_11;
    #pragma endscop
}
