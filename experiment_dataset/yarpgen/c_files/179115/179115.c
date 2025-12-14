/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = (((((var_13 ? var_11 : var_13))) ? -17 : ((-7 ? -43 : 251))));
                    arr_8 [i_0] = (47814 ? -43 : -6335889339473398278);
                    arr_9 [4] |= (((((var_6 ? var_2 : 65521))) ? ((16 ? 65521 : 17560839944349910878)) : (((var_12 ? var_0 : (-2147483647 - 1))))));
                    var_14 = (max(var_14, (((((((-2147483647 - 1) ? 3758100815 : 42))) ? (((var_8 ? var_3 : var_10))) : ((var_2 ? 6 : (-9223372036854775807 - 1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = 0;
                                arr_16 [i_0] [i_0] [2] [i_0] [i_0] = (((((var_3 ? 1 : var_4))) ? ((12757852427848507964 ? var_7 : 65535)) : (((var_5 ? var_10 : 0)))));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = (33663 ? (((((31946 ? -45 : var_3))) ? 0 : ((var_7 ? 3222009502324279251 : var_9)))) : (((var_4 ? var_1 : var_8))));
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = 25;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_16 = -965575807;
                            arr_32 [i_5] [i_7] [i_7 - 1] [i_8] [i_9] = ((var_6 ? var_6 : 1007));
                        }
                        arr_33 [1] [i_7] [i_6] [i_7 - 1] [i_7 - 1] [i_8] = (((((1 ? (-9223372036854775807 - 1) : -3222009502324279252))) ? ((var_0 ? var_11 : 0)) : ((var_7 ? var_6 : var_2))));

                        for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_17 = var_4;
                            arr_37 [i_5 - 1] [i_6] [i_7] [i_8] [i_7] = var_3;
                            arr_38 [1] |= ((((((((var_10 ? 0 : 15957))) ? ((4294967295 ? var_3 : 1)) : var_10))) ? var_0 : ((1 ? var_10 : var_0))));
                            var_18 = (min(var_18, ((((((965575806 ? var_3 : 14804365926643523648))) ? 8483308610882985621 : (((2377690982 ? 1287851336 : 25))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8] = var_6;
                            var_19 *= ((12 ? ((var_5 ? 26651 : 191)) : var_8));
                            arr_42 [i_5] [1] [i_7] [i_6] [i_7] [1] [5] = ((var_11 ? 255 : 0));
                            var_20 = ((-1 ? ((0 ? var_5 : var_9)) : var_0));
                        }
                        for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_5] [i_7] = ((0 ? (((((var_13 ? var_13 : 244))) ? 54257 : ((var_3 ? var_1 : 1967817837771440965)))) : (((255 ? -8192 : 54417)))));
                            var_21 = (min(var_21, ((((((1 ? var_3 : var_8))) ? ((1 ? (((var_8 ? 3724152900 : 1))) : -3123677258951423735)) : (((((0 ? 1 : var_8))) ? var_0 : ((0 ? 0 : 2628246938)))))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 8;i_13 += 1)
                        {
                            arr_49 [i_7 - 1] [i_7] [i_8] [i_7 - 1] [i_6] [i_7] [i_5] = 182;
                            var_22 = ((1 ? 1 : -1));
                            arr_50 [i_5] [i_6] [i_7] [i_8] [7] = ((0 ? 0 : var_7));
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            arr_53 [5] [5] [5] = (126 ? var_12 : var_4);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        arr_60 [i_16] [3] [1] = ((1 ? var_1 : 0));
                        arr_61 [i_16] [i_16] = var_8;
                        var_23 = 1;
                    }
                }
            }
            arr_62 [i_14] |= ((54391 ? (((4294967292 ? 13971 : 63))) : ((var_0 ? 0 : 4294967280))));
            arr_63 [i_5 + 3] = (var_13 ? 0 : -64);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            var_24 = ((var_6 ? var_10 : -9));
            arr_66 [i_5 + 2] [i_17] [i_17] = ((0 ? var_1 : 121));
            var_25 = var_9;
            arr_67 [i_17] [i_17] = ((73 ? 64 : 1));
        }
        var_26 = (((((var_11 ? 18446744073709551615 : var_2))) ? var_5 : (((-28 ? var_12 : var_8)))));
    }
    var_27 &= var_10;
    #pragma endscop
}
