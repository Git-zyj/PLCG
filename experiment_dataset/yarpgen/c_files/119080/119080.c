/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 &= ((((min(19573, 45962))) ? ((19573 ? (1846746902295877184 * -1) : var_16)) : (((((min(var_0, var_6))) >> ((min(var_1, var_7))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!(((5023 ? 45962 : 12603833557144458206)))));
        var_19 += 84;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 *= (!-1);
        var_21 = (max(var_21, ((min((-1 % -1), (arr_4 [1] [1]))))));
        var_22 = var_14;
        var_23 ^= 5842910516565093410;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_3] = ((min(var_3, 33122)));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_18 [i_6] [i_6] [i_5] [i_6] [i_6] [i_5] [17] = (arr_11 [i_6] [i_3] [i_4]);
                            arr_19 [i_2] [i_3] [2] [i_4] [i_2] [i_5] [i_6] = (arr_4 [i_5] [i_3]);
                            arr_20 [i_6] [i_3] [i_5] [i_6] [i_6] = (((min((arr_4 [i_5] [12]), (arr_5 [i_5]))) | (((min(1, var_3)) | (~var_0)))));
                            var_24 = (min((((arr_11 [i_3 + 2] [1] [i_3 - 1]) | (arr_11 [i_3 + 2] [i_3 + 2] [i_3 - 1]))), ((min((arr_11 [i_3 + 2] [i_3 + 2] [i_3 - 1]), (arr_11 [i_3 + 2] [i_3] [i_3 - 1]))))));
                        }
                    }
                }
            }
            var_25 ^= min(-1846746902295877185, -30303);
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_26 ^= min(109, 25380);
            var_27 = (max(var_27, 45963));
            arr_24 [i_7] [i_2] [i_2] = (~var_9);
            arr_25 [i_2] [1] [i_2] = var_4;

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_29 [15] [i_7] [i_7] = ((((min(var_10, var_5))) | (((!(arr_16 [i_8] [i_8] [i_8] [i_8] [i_7] [i_7 - 1]))))));
                var_28 = min(-953, (arr_14 [i_7 + 3] [i_7] [i_7] [i_7 + 3] [i_7 + 2] [i_7 + 2]));
                var_29 = (min(((min(var_8, (arr_15 [i_7 + 2] [i_7 - 2] [1] [22])))), 14182));
                var_30 *= var_0;
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_31 = var_13;
                            var_32 = (arr_34 [i_10 - 2]);
                            arr_39 [i_9] [i_9] [i_9] [i_11] [i_12] = ((8991111253809842091 > (arr_17 [2] [i_9] [22] [i_10 - 2] [22] [i_11] [i_12])));
                        }
                    }
                }
            }

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                var_33 = var_2;
                var_34 += (((arr_38 [i_13] [i_2] [i_9] [i_2] [i_2]) - (arr_38 [i_2] [i_2] [i_9] [i_13] [i_13])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_35 &= -953;
                            var_36 = var_15;
                            var_37 = (arr_11 [i_13] [i_9] [i_2]);
                        }
                    }
                }
                arr_48 [i_9] = ((~((((arr_0 [i_2]) > -8345836138989380204)))));

                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_38 = (((1812075068 > 7910212996701406334) ? (var_16 / var_4) : var_6));
                    var_39 = (((arr_21 [i_16] [i_9]) >> (var_8 + 19538)));
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    arr_54 [i_9] = (arr_5 [i_2]);
                    var_40 = (arr_5 [i_2]);
                    var_41 = (min(var_41, (((1 ? -1250583535 : var_8)))));
                }
            }
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                arr_58 [i_9] [i_9] [i_9] = (arr_41 [i_2] [i_2] [i_2]);
                var_42 = (max(var_42, (((12603833557144458206 && (1442464929723061824 > 1))))));
            }
        }
        arr_59 [i_2] [i_2] &= ((3 ? -6555008677860007018 : 3));
        arr_60 [i_2] [i_2] = (min((min((arr_42 [i_2] [i_2] [i_2] [i_2] [i_2]), 9455632819899709524)), (!var_7)));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 21;i_21 += 1)
                {
                    {
                        arr_68 [i_20] = (min(var_10, (min((min(19572, var_16)), var_7))));
                        arr_69 [i_21] [i_21] [i_20] [12] [i_21] [i_21] = var_0;
                        var_43 = var_9;
                        var_44 = 100663296;
                    }
                }
            }
        }
    }
    #pragma endscop
}
