/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, -1));
        var_12 = 1;
        var_13 = ((8243273631602334949 < (44563 < -1476496499)));
        var_14 = -1476496508;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_15 |= (~65535);
            arr_6 [i_0] [i_1] [i_0] = -17;
            var_16 = ((((12406975128686369501 && (arr_5 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_17 |= var_2;
            var_18 -= (~1);
            var_19 = (((4083131441 ? 30 : 164)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = ((!(arr_2 [0] [i_3] [i_3])));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_21 = 5;

                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    var_22 = (arr_10 [i_0] [i_5]);
                    arr_16 [13] [i_5] [i_4] = -1;
                }
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    var_23 = -1;
                    var_24 &= ((73 ? (arr_15 [i_0 - 1] [i_6 + 2] [i_0 - 1] [11]) : (arr_15 [i_0 + 2] [i_6 + 2] [1] [i_6 + 2])));
                }
                var_25 ^= ((arr_12 [16] [i_0 + 2] [i_0 + 2] [i_0 + 2]) > 1);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_24 [i_0] [i_3] [13] [i_7] [i_7] = (arr_20 [i_0] [i_3] [i_4] [i_4] [i_0 - 1] [i_8]);
                            var_26 = 1;
                            var_27 = (((arr_22 [i_0 + 1] [i_0 + 2] [i_7] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2]) - (arr_17 [i_8] [i_7] [i_4] [i_0])));
                        }
                    }
                }
            }
            arr_25 [i_0] [i_0] [i_3] = 1;
        }
    }
    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_28 = (arr_3 [16] [i_9]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    {
                        var_29 = ((((arr_5 [i_12]) && 1)));
                        var_30 = (min(1, ((!(1812231738 >= 4521615450283245853)))));

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_37 [i_11 + 2] [i_11 + 2] = (max(-8, -5));
                            arr_38 [i_9] [i_10] [i_11] [23] [i_13] = 18446744073709551615;
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_43 [i_9] [i_10] [i_9] [i_12] [i_12] |= ((!(!var_10)));
                            arr_44 [i_14] [i_14] [i_12] [i_11 + 2] [i_9 + 2] [i_9 + 2] &= 0;
                        }
                        var_31 ^= (max(1, ((1 / (arr_8 [8] [i_9 + 2] [i_12 + 2])))));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
    {
        arr_49 [i_15] |= ((!(((1 ? (arr_11 [i_15] [i_15] [i_15] [i_15]) : (arr_11 [i_15] [i_15] [i_15] [16]))))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            arr_52 [i_16] [i_16] = (arr_1 [i_15]);
            arr_53 [i_16] [i_16] = 2724694970827820262;
            arr_54 [i_16] = (~15932141635379524440);
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            arr_57 [i_17] = (max((max((min((arr_34 [16] [1] [20] [i_15] [i_15]), var_1)), var_4)), (arr_42 [i_15] [i_15] [i_15] [i_17] [9])));
            arr_58 [i_17] [i_17] [i_17] = var_7;
        }
    }
    for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
    {
        arr_61 [i_18] = (min((((13925128623426305775 ? 211 : var_4)), (max(1, var_2)))));
        var_32 = (-1 && -6609220985741921537);
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    {
                        arr_71 [i_18] [16] [i_18] [i_19] = (!7802);
                        var_33 = (arr_46 [i_18]);
                        var_34 -= (max((((!(((1 + (arr_46 [1]))))))), (arr_28 [i_19])));
                    }
                }
            }
        }
        arr_72 [12] = ((((min(1, (arr_21 [i_18] [i_18] [i_18])))) ? (min((arr_21 [i_18] [i_18] [i_18]), (arr_21 [i_18] [i_18] [i_18]))) : (max((arr_21 [i_18] [i_18] [i_18]), (arr_21 [i_18] [i_18] [i_18])))));
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 17;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 17;i_23 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 17;i_24 += 1)
                {
                    for (int i_25 = 4; i_25 < 16;i_25 += 1)
                    {
                        {
                            var_35 = ((((arr_0 [i_25 - 3]) ? (max((arr_11 [1] [i_23] [i_23] [i_25]), 14)) : (~6205))) / (arr_65 [i_25 - 1]));
                            arr_82 [i_22] [i_24] [i_23] [6] [i_24] [i_25] = 4294967275;
                        }
                    }
                }
                var_36 &= 255;
                var_37 = (max(var_37, ((max((arr_73 [i_23]), (arr_73 [i_22]))))));
            }
        }
    }
    var_38 = (max((((1 * 1) * var_2)), var_10));
    var_39 = (max(1, 1));
    var_40 |= 244;
    #pragma endscop
}
