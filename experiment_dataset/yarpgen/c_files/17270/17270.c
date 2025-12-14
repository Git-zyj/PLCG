/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_11 = (((((min((arr_0 [3] [i_0]), 46970)))) ? (((arr_0 [i_0 + 3] [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0 - 3]) : 46956)) : (arr_3 [i_0]))) : ((min((arr_3 [i_0 + 1]), 26353)))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_8 [4] [i_1] [i_0] = ((15183 & (((!(arr_6 [0]))))));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                var_12 = ((2272431288995718462 ? (arr_12 [i_2 - 2] [i_2 - 2] [i_2] [i_0]) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0])));
                arr_13 [i_0] [i_0] [i_2] [10] &= (arr_9 [i_2] [i_2] [i_1]);
                var_13 = (min(var_13, -2272431288995718463));
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_14 = (((arr_11 [i_3] [i_3] [i_3 + 1] [i_3 - 2]) ? -121117523 : ((2272431288995718452 ? (arr_12 [i_3] [6] [i_3] [i_3]) : 32767))));
        var_15 = ((12876 ? (arr_3 [i_3 + 1]) : (arr_1 [i_3])));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_21 [i_4] = (arr_20 [i_4]);
        arr_22 [14] [14] = (!-21763);
    }
    var_16 = ((((((((44 ? 18 : var_0))) ? -var_5 : var_9))) ? var_10 : ((var_9 ? ((var_7 ? var_2 : -15183)) : var_3))));
    var_17 = var_2;

    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        arr_26 [i_5] = ((868873536 * ((((arr_25 [i_5]) ? (arr_23 [i_5]) : 46970)))));
        var_18 = (max(var_18, (((-1145312758 ? 4294967287 : 2847659324)))));
        var_19 = ((((1617 ? 98 : (arr_1 [4])))) ? 1949276154 : (arr_9 [2] [i_5] [i_5 + 1]));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_20 |= (0 ? (arr_5 [i_6] [i_6]) : (arr_5 [i_6] [i_6]));

        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            arr_31 [i_7] = ((!(arr_0 [i_7 - 1] [i_7 - 1])));
            var_21 = (max(var_21, (arr_9 [12] [i_7] [12])));
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            arr_35 [i_6] [0] [i_8] = (arr_25 [i_8]);

            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                arr_40 [i_6] [i_8] [i_9] [1] = 16;
                var_22 += ((-1961019841 ? 243 : 0));
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_23 = (arr_30 [i_11]);
                            arr_50 [2] [i_8] [i_10 + 3] [i_11] [i_12 - 2] [i_11] = 66584576;
                        }
                    }
                }
                arr_51 [8] [i_8 - 1] [i_10 + 3] = (11258 ? (((arr_4 [14]) ? (arr_47 [5] [i_8] [7] [5] [5]) : 0)) : (arr_43 [i_8 + 1]));
            }
        }
        var_24 = (arr_36 [i_6] [0] [0] [i_6]);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_25 = (arr_53 [i_13]);
        var_26 = ((116 ? -796409327 : 64269));
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    {
                        var_27 += (~1862781275);
                        var_28 = (min(var_28, (((~(arr_56 [4] [i_14] [4] [i_16 - 1]))))));
                        arr_62 [i_13] [i_13] [i_13] [1] = (((arr_61 [i_16 + 1] [7] [i_16 + 3] [i_16 - 1] [i_16 + 1] [i_16]) ? 1447307971 : 2272431288995718443));
                        var_29 = ((32640 ? 4028766445 : (arr_52 [i_13] [14])));
                    }
                }
            }
        }
        var_30 -= (arr_19 [i_13] [i_13]);
    }
    #pragma endscop
}
