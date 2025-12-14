/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = ((-((((max(var_8, 742193940))) ? (~var_10) : ((var_7 ? var_15 : var_18))))));
        var_23 = (max(var_23, ((min(-742193946, -99)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 742193949;
        arr_9 [i_1] = var_11;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_24 = -742193913;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_25 = ((!((max(var_7, 128)))));
                            var_26 = (max(var_26, ((max((--15960), (~var_9))))));
                            var_27 = max(-1, -5228905543383867010);
                        }
                    }
                }
                var_28 += var_2;
                arr_20 [i_2] [i_2] = var_4;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_29 = ((min(5228905543383867019, var_12)));
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [15] [i_2] = (max((max(1, 5228905543383867041)), (max(var_18, var_4))));
                            var_30 = (max(var_30, -15966));
                        }
                    }
                }
            }

            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    arr_33 [i_2] [i_2] [i_9] [i_9] [i_2] [i_2] = var_8;
                    var_31 &= var_17;
                    var_32 &= ((var_18 ? ((max(742193939, var_5))) : ((var_17 ? var_4 : 1))));
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_33 = (max((max((((1 ? var_7 : 1422625593))), 8)), var_16));
                    var_34 = (!8);
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_35 = (max(var_35, (((~(~-8844771451563005009))))));
                    var_36 = var_8;
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    var_37 = ((1574030994 ? 128 : var_5));
                    var_38 = (max(var_38, (~85)));
                }
                var_39 ^= var_6;
            }
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                var_40 *= var_19;
                arr_44 [i_2] [i_3] [i_14] = (max(((5228905543383867012 ? ((var_10 ? var_14 : 196034469)) : (((164 ? 6536182563451987116 : 128))))), 15962));
                arr_45 [i_2] [i_3] [i_14] [i_2] = (max(-5228905543383867015, 1));
            }
            var_41 = ((!((max(var_15, ((max(86, 1))))))));
        }
        var_42 = ((189 ? 1126863620566640083 : 8678381461157381198));
        arr_46 [i_2] = min(274877905920, ((var_7 ? var_12 : 9592283972241134962)));

        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_58 [i_2] [i_15] [i_2] [i_17] [i_18] = (((5269422175277776690 ? var_6 : -1255153869)));
                            var_43 = (max(var_43, 143));
                        }
                    }
                }
            }
            var_44 = ((max(-5829446846152982735, ((var_11 ? 192 : var_9)))));
            var_45 &= 6186249432135767463;
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            arr_63 [i_19] |= (min(var_7, 5829446846152982710));
            arr_64 [i_19] [i_19] [i_2] = (min((max(((min(8, -742193965))), ((var_2 ? var_9 : var_8)))), (min(((var_1 ? 144115188075847680 : var_9)), var_7))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 2; i_21 < 15;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
                        {
                            var_46 = (max(var_46, -1));
                            var_47 ^= 4;
                        }
                        for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
                        {
                            var_48 ^= var_4;
                            var_49 = (min(var_49, (((var_18 ? 5269422175277776678 : var_12)))));
                            arr_78 [i_24] [i_20] [i_2] [i_22] [4] = -667516982;
                        }
                        for (int i_25 = 0; i_25 < 16;i_25 += 1) /* same iter space */
                        {
                            arr_81 [i_21] [6] [i_21 - 1] [i_21] [i_2] = var_6;
                            var_50 = var_2;
                            arr_82 [i_2] = -var_12;
                            var_51 = (max(var_51, 667516982));
                        }
                        var_52 = var_7;
                    }
                }
            }
            var_53 = (var_16 ? 224 : var_3);
            var_54 = (~var_15);
            var_55 *= ((18446744073709551613 ? 117 : 31));
            arr_83 [2] [i_2] = ((1 ? 40 : -1606496254));
        }
    }
    var_56 += var_11;
    #pragma endscop
}
