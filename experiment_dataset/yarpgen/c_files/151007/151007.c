/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = (~1);
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 += var_9;
        arr_8 [i_1] = (((((arr_0 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))) != (arr_5 [i_1] [i_1])));
        arr_9 [i_1] [i_1] = arr_7 [i_1];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_1] [i_1] = 2819715528746658663;
                    arr_17 [i_1] [i_2] [i_1] [i_2] = var_9;
                }
            }
        }
    }
    var_20 += var_1;

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_21 = (max(((((arr_18 [i_4 + 2]) == ((~(arr_18 [i_4])))))), ((-1 ? 1 : 3595541661341753819))));
        var_22 = (max(var_22, 1));

        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            var_23 = var_10;
            arr_23 [i_4] [i_5] = arr_22 [i_5] [i_5 - 1];
            var_24 = (((min((arr_19 [i_5 - 2]), 1))) || (~var_17));
        }
        arr_24 [i_4] = (arr_18 [i_4]);
    }
    var_25 += (((1 ? (max(var_12, var_13)) : var_8)) + (((1 ? -4352427368150861150 : 1))));

    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_26 = (((arr_6 [i_6 - 1]) ? (min(var_2, ((var_9 ? -5722780135869091056 : var_8)))) : (((arr_15 [i_6] [i_6 + 2] [i_6]) ? 1 : -9131077771517506295))));
        arr_27 [i_6] [i_6] = (min((arr_6 [i_6 + 2]), (arr_6 [i_6 + 1])));
        var_27 = arr_15 [i_6 + 2] [i_6 + 2] [i_6];

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            arr_31 [i_6] [i_6] = ((-4352427368150861158 ? -1874820765406366530 : 4352427368150861142));
            arr_32 [i_6] = 1;
            var_28 -= arr_7 [i_6];
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_35 [i_8] [i_8] = ((!(((1 ? 1 : -4205778980315162761)))));
        arr_36 [i_8] [i_8] = (!((max(1, -7139193867250522784))));
    }
    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 21;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_11] [i_10] [i_11 + 1] [i_11] = (~1);
                        arr_47 [i_10] [i_10] [i_10 + 1] [i_11] [i_10 + 1] [i_10] = arr_43 [i_11] [i_11];
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_51 [i_11] [i_10] [i_11] [i_10] [i_11] = (((-(arr_18 [i_9]))));
                        var_29 = (((min(1874820765406366536, (arr_21 [i_11 + 1]))) <= ((min(((~(arr_40 [i_9] [i_9]))), -1)))));
                        var_30 = (max(var_30, (((!(arr_22 [i_9 + 1] [i_11 + 1]))))));
                    }
                    var_31 = ((((-(arr_45 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 2])))) || (arr_45 [i_9 - 3] [i_9 + 1] [i_9 + 1] [i_9 - 1]));
                }
            }
        }
        arr_52 [i_9] [i_9] = ((1 ? 1 : ((min((arr_38 [i_9 - 1]), (arr_38 [i_9 - 1]))))));
    }
    #pragma endscop
}
