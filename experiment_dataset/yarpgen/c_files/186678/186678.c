/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_0] [i_0 - 2] [i_1] = 127;
            arr_6 [i_1] [i_1 - 1] [i_1 + 3] = ((!(arr_1 [i_1] [i_0 - 2])));
            var_16 = var_14;
        }

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    {
                        var_17 = (((arr_12 [i_3] [i_3] [i_2 - 1] [i_3]) ? var_15 : 3228987868));
                        arr_14 [i_0 + 3] [i_0 - 2] [i_0] [i_0] [i_3] = -5148604716845238627;
                    }
                }
            }
            arr_15 [i_2 - 2] [i_0 + 2] = (((arr_1 [i_0] [i_2]) || 3228987896));
        }

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_18 = (max(var_18, ((((arr_9 [i_0 - 1] [i_5 + 1] [i_5]) != 3656528603)))));
            var_19 ^= (((arr_9 [i_5] [i_5 + 1] [i_0 - 2]) ? (arr_9 [i_5] [i_5 + 1] [i_0 - 1]) : -8048678576388188618));
            var_20 = (((arr_16 [i_5 + 1] [i_5 - 1]) ? (arr_1 [i_5 - 1] [i_5]) : (arr_16 [i_5 + 2] [i_5 - 1])));
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_21 = 0;
            var_22 = ((18157 == (28672 && var_13)));
        }
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            var_23 = (((!1) / 24893));

            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                var_24 = (arr_2 [i_7]);
                var_25 = var_6;
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    arr_33 [i_10] [i_7] [i_0] &= ((-109 * ((((arr_8 [i_7 + 3] [i_9] [i_10 + 2]) == var_7)))));
                    var_26 = var_11;
                    var_27 = (arr_1 [i_0] [i_0 + 1]);
                    var_28 = (min(var_28, (((1 ? 125 : (!8798832918889175393))))));
                }
                for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    arr_38 [i_11 - 3] [i_11] [i_9] [i_7 - 3] [i_0 - 1] = 15384;
                    var_29 = (34284 == -8048678576388188641);
                    var_30 = ((((arr_35 [i_0 + 1] [i_7 - 2] [i_11 - 3] [i_11]) != 1112561719)));
                }
                for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, var_4));

                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        arr_45 [i_0] [i_7] [i_9] [i_0 + 2] [i_13] = ((-var_13 ? 36 : (arr_36 [i_12] [i_7 - 1] [i_7] [i_0 - 1] [i_0] [i_0])));
                        var_32 = ((-8444105822374556539 == (arr_29 [i_13 - 1] [i_7 - 3])));
                        var_33 = ((0 ? 1 : (arr_17 [i_12] [i_0])));
                        var_34 = var_0;
                    }
                    var_35 = var_8;
                }
                arr_46 [i_0] [i_7 + 3] [i_9] = ((+((var_12 << (((arr_28 [i_0 - 2] [i_7] [i_9]) - 175))))));
                var_36 = (((((arr_42 [i_0 - 1]) != 0)) ? 1 : (((-69 + 2147483647) >> (140 - 122)))));
            }
            var_37 = 122;
        }
        arr_47 [i_0] = ((-(((arr_24 [i_0 + 2]) ? (arr_42 [i_0]) : 3614605232734488960))));
    }
    var_38 = var_14;
    var_39 = (max(var_39, var_8));
    #pragma endscop
}
