/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 += 247;
        var_12 = (((arr_0 [i_0]) || (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_2 [5]);
        var_14 = ((!(arr_2 [i_1 + 2])));
        arr_4 [i_1] [i_1] = 2147483647;
        var_15 = (arr_3 [i_1 + 3]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                {
                    arr_12 [i_3] = arr_5 [i_1 + 2];
                    var_16 = -143243645;
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_7 - 2] [i_5] [i_4] [i_4] = (+(((arr_7 [i_4] [i_5 + 1] [i_6]) ? (arr_7 [2] [i_5 + 1] [i_6]) : (arr_9 [i_4 + 1] [i_5]))));
                        var_17 = (arr_9 [i_4] [i_5]);
                        var_18 = (max(var_18, var_6));
                    }
                }
            }
        }
        var_19 = ((+(((((((arr_14 [i_4]) ? var_1 : var_0))) && ((max((arr_10 [i_4 - 1]), (arr_11 [5])))))))));
        var_20 = (max((((!(arr_23 [0])))), (min(var_10, var_0))));
        arr_25 [i_4 - 1] [i_4 - 1] = (min((min(-688664724, 255)), (arr_9 [i_4 + 3] [6])));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 7;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = var_1;
        arr_30 [i_8] = ((~(arr_14 [i_8])));
        arr_31 [i_8] [i_8] = ((!(((arr_14 [i_8]) && (arr_26 [i_8])))));
    }
    var_21 = (((((var_9 ? (max(var_5, 32741)) : (min(-7580984341290928428, 968842022))))) && var_6));

    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        var_22 = var_10;
        arr_35 [i_9] &= (arr_34 [i_9 - 3] [i_9 - 1]);
        arr_36 [i_9] = (min((((!(arr_33 [i_9 + 1])))), (arr_33 [i_9 - 2])));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        var_23 = (min(var_23, (((var_7 ? 316460783154115112 : (arr_38 [i_10 + 4]))))));
        arr_39 [i_10 + 4] = (arr_37 [i_10]);
        arr_40 [i_10] = ((~(arr_37 [i_10])));
        arr_41 [i_10] = arr_38 [i_10];

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 19;i_12 += 1)
            {
                var_24 = ((-73851579 != (arr_44 [i_12] [i_12 - 1] [i_10 + 1] [i_10 + 1])));

                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    var_25 = (arr_42 [13] [i_13] [i_12 + 3]);
                    var_26 = (min(var_26, (arr_46 [i_10 + 2] [1] [i_13] [i_10 + 2] [i_11])));
                }
            }
            var_27 = var_7;
            var_28 += (1 * ((((arr_45 [i_11] [i_10] [i_10] [i_10]) ? (arr_38 [i_10]) : (arr_42 [i_10 + 4] [i_10] [i_10])))));
        }
    }
    var_29 &= var_4;
    #pragma endscop
}
