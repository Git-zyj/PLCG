/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_7));
    var_16 = 4294967294;

    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0 + 3] [i_0 + 2]) ^ (arr_1 [i_0 - 1])))) ? ((~(arr_0 [i_0 - 3] [i_0 + 4]))) : (((((min(511, 2))) ? -1628679412 : (arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = 1;
        arr_5 [i_0] |= max(4294966784, 12);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        var_18 = var_4;
                        var_19 = (max(var_19, ((max((arr_10 [3] [i_1] [i_2] [i_3]), ((-(arr_8 [i_0] [i_2 - 3] [i_3 + 1]))))))));
                        var_20 = (max(((((arr_1 [i_3 - 1]) == (arr_8 [i_0] [i_1 - 1] [i_1 - 1])))), var_6));
                        var_21 += (~4294966784);
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_21 [i_2] = ((127 >= (arr_7 [i_0 + 3] [i_0 - 1])));
                            arr_22 [7] [i_1] [i_2] = 4294967292;
                            arr_23 [i_5] [i_1] [i_2] [3] = arr_6 [i_0];
                            arr_24 [i_2] [i_2] [0] [6] [i_5] = ((23 ? 4294967294 : 0));
                            var_22 = (((arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_1 - 1]) ? (arr_19 [i_1 - 1] [i_1] [i_2] [i_4 + 1] [i_4]) : (arr_19 [i_1 + 1] [i_1 + 1] [i_4] [i_4 - 1] [i_4 - 1])));
                        }
                        var_23 = ((((((max(var_7, (arr_6 [i_1])))) ? 1 : (arr_0 [i_0 - 2] [i_2 - 2])))) ? ((((arr_19 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) > (max(1124636271, 82))))) : (((arr_3 [4] [4]) ? ((min((arr_2 [1]), -116))) : 0)));
                        var_24 += var_0;
                        arr_25 [i_2] [i_1] [i_2] [i_4] = ((-(max((max((arr_2 [i_4]), var_0)), 1))));
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        var_25 ^= ((!(arr_8 [i_0] [i_6 + 3] [i_2 + 2])));
                        arr_29 [i_0] [i_1] [i_2] [i_6] = var_8;
                    }
                    arr_30 [i_0 - 4] [i_2] [i_0] [i_0 - 3] = 2373770362;
                    var_26 -= 108;
                }
            }
        }
        arr_31 [i_0] [i_0] = ((!((!(arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_35 [3] = (((((var_13 + (min((arr_33 [10]), 1))))) ? (((((((arr_34 [8] [i_7]) ? var_9 : -1))) ? (max(-109, var_2)) : (arr_34 [i_7] [i_7])))) : 3170331025));
        var_27 = (((max(511, ((((arr_33 [i_7]) == var_9))))) < -33554431));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_28 = (~(arr_34 [i_7] [i_8]));
            var_29 = var_13;
            var_30 = ((((arr_33 [i_7]) ? var_14 : var_5)));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            var_31 = (max(var_31, 174));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_32 = ((!(arr_40 [i_10] [i_12])));
                            var_33 = (1 >= var_12);
                            var_34 = (145 == 4294967285);
                            var_35 = var_6;
                            var_36 = ((var_3 ? -73 : (244 > var_9)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_37 = ((!(((arr_33 [i_7]) >= 2726374320))));
            var_38 = (min(var_38, (((arr_51 [i_7] [i_7] [i_7] [i_7] [i_7]) ? var_8 : (((arr_50 [i_13] [i_7] [i_13] [i_7] [i_7] [i_7] [i_7]) ? 0 : 1124636271))))));
        }
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 12;i_14 += 1)
    {
        var_39 -= ((((143 ? (arr_45 [i_14] [8]) : var_11))) ? ((4294966785 * (arr_37 [4] [4] [3]))) : (319970924 == 4294967295));
        arr_56 [i_14] = (((arr_50 [i_14] [i_14 - 2] [i_14 + 2] [10] [i_14 - 2] [i_14 - 2] [i_14 + 1]) < 96));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_40 += (((((var_4 ? var_10 : (arr_57 [i_15])))) ? -267317477 : (arr_58 [i_15])));
        arr_59 [i_15] = (-587738807 > 3170331024);
        arr_60 [i_15] [i_15] = 255;
    }
    #pragma endscop
}
