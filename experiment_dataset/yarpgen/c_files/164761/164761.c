/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = min(var_8, var_8);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 -= (arr_3 [12]);
                        var_13 = (max(var_13, ((max(var_4, ((-((60745831 ? (arr_0 [i_0] [i_1]) : 255)))))))));
                    }
                }
            }
        }
        var_14 = (min((arr_5 [i_0] [i_0]), ((-var_0 ? ((537101588 ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])))));
        arr_10 [i_0] = (arr_8 [i_0] [i_0]);
        arr_11 [i_0] = var_9;
        var_15 = ((!((((arr_8 [i_0] [i_0]) - (arr_8 [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_4] [i_5] [i_5] &= 1;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_16 = (max(var_16, (arr_0 [i_7] [i_5])));
                            arr_26 [i_5] [i_7] [i_6] [i_5] [i_4] = ((-(arr_15 [i_7 - 1] [i_7 + 1] [i_7 + 1])));
                            var_17 = ((!((((arr_2 [i_4]) ? (!1) : (((arr_23 [i_8] [i_7] [i_5] [i_5] [i_4]) ? (arr_12 [i_8]) : var_9)))))));
                        }
                    }
                }
            }
            var_18 = (min(var_18, ((min(((min(var_6, 1))), ((-(arr_13 [i_4]))))))));
            var_19 = (max((max(((max(var_7, 60745831))), ((2 ? 18446744073709551615 : 0)))), -537101588));
            arr_27 [i_5] [i_4] = (~(!var_0));
        }
        var_20 = (((((!(arr_14 [i_4])))) * var_3));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_21 = 1;
            arr_33 [i_9] [i_9] = ((1131537593 ? 537101588 : 0));
            arr_34 [i_9] [i_9] = 0;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_22 = (arr_7 [i_9] [i_11]);
            var_23 = ((!(arr_35 [i_11])));
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
        {
            var_24 ^= var_3;
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_25 = (min(var_25, 17));
                            var_26 = (((arr_42 [i_9] [1] [i_15]) ? -var_1 : ((((arr_8 [1] [i_13]) && var_5)))));
                            var_27 = (max(var_27, -0));
                            var_28 ^= 7;
                        }
                    }
                }
            }
        }
        for (int i_16 = 3; i_16 < 18;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                arr_54 [8] [8] [14] [i_16] = var_0;
                var_29 = ((!(arr_23 [i_16 + 1] [i_16 - 2] [i_16 - 1] [i_16 - 3] [i_16])));
            }
            var_30 = ((0 ? -74 : 1));
            var_31 = (0 * 6);
        }
        var_32 = (min(var_32, ((((16602115375787416810 & 8816695829798555756) ? (arr_45 [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_3 [i_9]))))));
        var_33 = (min(var_33, ((((arr_2 [1]) ? (arr_2 [i_9]) : (arr_2 [i_9]))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
    {
        var_34 = -8;
        var_35 += (!255);
        var_36 = (!(!var_6));
        var_37 = (min(var_37, (((var_0 ? 63 : 562949953421311)))));
        arr_57 [i_18] [1] = (arr_6 [1] [i_18] [i_18] [i_18]);
    }
    #pragma endscop
}
