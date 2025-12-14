/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? var_3 : (((((3857476206791596966 ? 32451 : var_8))) ? (min(18446744073709551615, 160806317)) : (min(var_6, 8391920032230428269))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= (arr_1 [i_0] [1]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = 437307915;
            var_17 |= (((((arr_3 [i_0] [i_1] [i_0]) && -437307931)) ? (arr_0 [i_0] [i_1]) : var_4));
            var_18 = ((-(((!(arr_4 [i_0] [i_0] [i_1]))))));
            var_19 = (min(var_19, var_15));
        }
        var_20 -= var_15;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((arr_4 [i_2] [i_2 - 4] [i_2]) || (arr_1 [i_2 - 2] [i_2 - 2])));
        var_21 = ((((((arr_3 [11] [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : var_3))) && (arr_8 [4])));
        var_22 -= (!8391920032230428268);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = ((-(arr_0 [5] [i_3])));
            var_24 = ((!(((-(arr_10 [i_2]))))));
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            arr_16 [i_2] [i_4] = (((arr_7 [i_4 - 2]) ? 52723 : (arr_8 [i_4 - 1])));
            var_25 = ((1052322154 && ((((arr_14 [i_4]) ? 9163835738660229238 : (arr_3 [i_2] [i_2] [i_4]))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = -1249617889;

        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            var_26 = (min(var_26, (((~(arr_3 [i_5] [i_5 + 2] [i_6 - 1]))))));
            var_27 = ((((!(arr_20 [i_5] [i_5] [i_5]))) ? (((!(arr_15 [i_5] [i_6] [i_5])))) : (arr_1 [i_5] [i_6])));
        }
        for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
        {
            arr_24 [4] |= var_9;
            var_28 = -8391920032230428245;
        }
        for (int i_8 = 3; i_8 < 8;i_8 += 1) /* same iter space */
        {
            var_29 -= ((139 ? var_7 : (209 + -54)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    {
                        var_30 = ((3342255349222244340 != (arr_26 [i_10] [i_10 + 1] [i_10 - 3])));
                        var_31 = (((arr_31 [i_5]) && (((97 ? 50 : 27)))));
                        var_32 = (min(var_32, var_0));
                        var_33 = (((arr_20 [i_8 - 2] [i_8 - 1] [i_8 + 2]) ? ((-(arr_1 [i_9] [i_10]))) : (arr_17 [i_10 + 2] [i_8 + 2])));
                        var_34 = (arr_10 [i_10 - 1]);
                    }
                }
            }
        }
        var_35 -= ((-35 ? (((1630114835 != (arr_20 [i_5] [i_5] [i_5])))) : (((arr_26 [i_5] [i_5] [1]) ? -1304127992 : (arr_29 [i_5] [2] [2] [i_5])))));
        arr_33 [i_5] [i_5] = (var_5 ? 19908 : (arr_20 [i_5] [i_5 + 1] [i_5]));
        arr_34 [i_5] [i_5] = -2097859748;
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_36 = (((((~(arr_36 [i_11])))) ? ((~(arr_36 [i_11]))) : ((41749 | (arr_36 [i_11])))));
        arr_38 [i_11] = ((((((arr_35 [i_11]) ? (arr_35 [i_11]) : (arr_36 [i_11])))) ? 8313 : (((arr_36 [i_11]) ? (arr_37 [i_11] [i_11]) : (arr_37 [i_11] [i_11])))));
    }
    #pragma endscop
}
