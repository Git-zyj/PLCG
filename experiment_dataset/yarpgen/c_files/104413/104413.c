/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_13 |= (arr_0 [i_0]);
        arr_3 [i_0 - 4] = ((var_9 || (((~(~1))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_3 - 1] = (((arr_2 [7]) ? (~var_9) : ((var_7 ? (arr_10 [i_1]) : ((var_1 | (arr_5 [0])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_14 = ((((!(arr_7 [i_5] [i_1] [i_3]))) && (((~(arr_10 [i_3 + 2]))))));
                                var_15 -= (min((arr_1 [i_1]), (arr_7 [18] [14] [i_1])));
                            }
                        }
                    }
                }
            }
        }
        var_16 = ((13702 ? -13693 : -13690));
        var_17 = (min(1605344944, ((var_8 | (13700 | -11499)))));
        var_18 -= 109463925331661944;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_19 -= (((arr_1 [i_6]) ? (!var_8) : var_2));
        var_20 = (arr_2 [i_6]);
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_22 [i_7] = arr_0 [i_7];
        var_21 = (max(var_1, 4064831970));
        arr_23 [i_7] = (((!var_1) < (max((((arr_1 [i_7]) ? (arr_10 [i_7]) : (arr_13 [14] [12] [i_7] [12] [i_7]))), var_11))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_22 = 13693;
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {

                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            var_23 -= (((!1) || (((9266515417469597864 ? (arr_21 [i_8]) : (((-13694 + 2147483647) << (9266515417469597864 - 9266515417469597864))))))));
                            arr_37 [12] [i_8] [12] = (arr_13 [i_11 - 2] [i_8] [8] [i_11] [i_11]);
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_24 = ((min((((var_0 || (arr_24 [i_7] [i_8] [i_7])))), (var_11 | 1675301938))) >> ((((arr_15 [i_7] [i_9] [i_9]) < (arr_14 [i_8])))));
                            var_25 = -8289;
                            var_26 = (max(var_26, (((!(arr_9 [i_12] [i_9] [i_9]))))));
                        }
                        var_27 = (min(var_27, ((max((arr_29 [8] [i_9] [i_7]), (arr_10 [i_8]))))));
                        arr_41 [i_10] [i_10] [i_9] [i_9] [i_7] [i_7] = ((var_6 | (((~164) ? var_9 : (max((arr_15 [i_7] [i_9] [i_10]), 1))))));
                    }
                }
            }
            arr_42 [1] = (arr_8 [i_8]);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_28 = var_6;
            arr_45 [i_13] = (arr_14 [i_13]);
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_29 = (arr_5 [i_7]);
            var_30 = (!(((~(((arr_15 [i_7] [8] [i_7]) ^ (arr_24 [i_7] [i_14] [i_14])))))));
            var_31 |= ((var_7 - ((4064831970 - (arr_43 [i_14] [i_7])))));
            var_32 = (min(var_32, (((~(arr_8 [i_14]))))));
            arr_48 [1] [i_7] [i_14] |= var_10;
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {
            var_33 = (arr_9 [i_7] [i_15] [4]);
            var_34 = ((((max((max(var_5, (arr_24 [i_15] [12] [7]))), ((min(13728, var_3)))))) ? var_5 : -586729975));
            var_35 = ((-1734490909707653865 ? -13693 : -32435));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_36 = (var_6 / 32755);
                            var_37 = (arr_32 [13] [13] [i_15] [i_7]);
                            var_38 = var_1;
                            var_39 = ((62 - (arr_14 [i_18])));
                            arr_59 [i_7] [i_17] [i_16] [i_16] [10] [i_18] = (((arr_39 [i_18 + 1] [4] [i_18] [i_18 - 1] [i_18 + 2] [i_18 - 1]) ? (arr_39 [i_18 + 3] [i_18] [i_18] [i_18 - 2] [i_18] [i_18 + 2]) : (arr_33 [i_18 - 2] [i_18] [i_18] [i_18 - 1] [i_18] [i_18])));
                        }
                    }
                }
                var_40 -= (~1423239788);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        {
                            var_41 = 23212;
                            var_42 = -28978;
                        }
                    }
                }
            }
        }
        var_43 = (((~(arr_2 [i_7]))));
    }
    var_44 = var_4;
    var_45 |= var_12;
    #pragma endscop
}
