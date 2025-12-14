/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((((((arr_1 [i_0]) * (!var_6)))) ? (((arr_2 [i_0]) / (arr_0 [i_0] [i_0]))) : var_4));
        var_14 = (max(((10711 ? (55498 + var_4) : -1816019886)), (~1816019908)));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((arr_1 [18]) ? ((4294967295 ? var_0 : -var_11)) : -1816019904));
            arr_6 [i_1] = (((((((var_5 ? (arr_0 [i_0] [i_1]) : var_5))) ? var_1 : (arr_0 [i_0] [i_0]))) > ((((1 >= (arr_0 [i_0] [i_1]))) ? (min(var_4, var_9)) : (var_5 >= var_0)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_15 = var_3;
                            var_16 = (arr_0 [i_2] [i_4]);
                        }
                    }
                }
                arr_19 [i_0] [13] = (var_6 * 1816019887);
                arr_20 [i_0] [i_0] [i_0] &= -24747;
                arr_21 [i_0] [i_0] [i_0] = var_8;
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_2] [i_6] [i_0] [i_0] = (var_6 - var_4);
                            arr_31 [i_0] [i_2] [i_8] = (var_12 * var_7);
                        }
                    }
                }
            }
            arr_32 [i_0] [i_0] [i_0] = (arr_25 [4] [i_2] [i_2] [i_2] [i_0]);
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_17 = (((((var_11 ? var_2 : (arr_28 [i_0] [i_9] [i_9] [i_9])))) ? ((var_5 ? (arr_7 [1] [i_9] [1]) : (min(var_9, 2019082602)))) : ((-((max(var_0, (arr_14 [i_0] [i_0] [i_0] [i_0]))))))));

            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_45 [i_12] [i_9] [i_9] [i_9] [i_9] = ((-(((var_11 >= ((250 ? var_12 : var_12)))))));
                            arr_46 [i_0] [i_0] [i_0] [i_12] [i_0] [i_0] = ((min(var_12, 1816019885)));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = ((~(var_10 & var_10)));
                        }
                    }
                }
                var_18 = (arr_10 [i_9] [i_9]);
            }
        }
        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_57 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0] [i_0] = (((~var_9) & 0));
                            var_19 = 4294967290;
                            arr_58 [i_15] [i_13] [i_14] [i_15] [i_16] = -250;
                            arr_59 [i_15] [i_14] [i_15] [i_16] = var_1;
                        }
                    }
                }
                arr_60 [15] = (((((-(arr_55 [i_0] [i_0] [i_0] [i_0] [i_14])))) == 4294967288));

                for (int i_17 = 4; i_17 < 22;i_17 += 1)
                {
                    var_20 *= var_0;
                    arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] = (((7496356634283381902 & var_0) ? 1816019885 : var_10));
                    var_21 = (min(var_21, 39));
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    arr_68 [i_0] [i_0] = ((((var_5 ? var_12 : (arr_12 [i_0] [i_13 - 1] [i_14] [i_18]))) & (arr_49 [i_0] [i_0])));

                    for (int i_19 = 1; i_19 < 22;i_19 += 1)
                    {
                        arr_71 [i_0] [i_0] [i_14] [2] [i_19] = (((0 >= var_10) & ((var_7 & (arr_37 [i_0] [i_13 + 1] [i_14] [i_18])))));
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                    }
                    arr_73 [i_0] [i_0] [12] [i_0] = ((-(arr_12 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 - 2])));
                    var_22 -= 15;
                }
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_23 = (max(var_23, 12));
                arr_76 [i_13 + 1] [i_20] = min(-var_6, (arr_51 [i_0] [i_0]));
                var_24 = (max(((-var_7 ? (arr_75 [i_13 - 2] [i_13 + 1]) : var_5)), (arr_54 [i_0] [i_13 + 1] [i_20] [i_20])));
            }
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                var_25 = (min(var_25, 4294967270));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 19;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_26 = ((((var_5 * (min(7887728154797528776, var_10)))) + ((((((arr_69 [i_0] [i_0] [i_13] [i_21] [i_22] [i_23]) ? 6 : var_8)) - var_2)))));
                            arr_84 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-var_11 | ((var_2 ? (arr_17 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 2]) : (arr_17 [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 + 1])))));
                            var_27 = ((-((15 ? 11 : 4294967290))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 0;i_25 += 1)
                {
                    {
                        arr_90 [i_0] [i_0] [i_24] [i_0] = ((-(((((47 ? var_4 : 65525)) != (max(var_8, var_2)))))));
                        var_28 = (((((~(~46284)))) + (max(((max(var_2, var_1))), (63029 + 639946411)))));
                        var_29 = (~var_9);
                    }
                }
            }
            var_30 = (min(0, 11181720981664933991));
            var_31 = ((!((((20179 ? 3986813871323282048 : 4418205294795871960))))));
            arr_91 [i_0] [i_13] [i_0] = (min(-117, 767043794884485869));
        }
    }
    var_32 = ((((max(-92, var_10))) << var_10));
    var_33 ^= (max((var_12 && 2268689563434832061), var_8));
    #pragma endscop
}
