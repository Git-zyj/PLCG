/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((0 ? 102 : 1)));
    var_14 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((-(arr_0 [i_0])))) ? 104 : ((var_9 ? 1 : 159)))))));
        arr_2 [1] [16] = (((((arr_0 [i_0]) / (arr_1 [i_0]))) * ((1 ? (arr_1 [i_0]) : var_7))));
        var_16 = (max(var_16, (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (!var_3);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_2] = ((((((((var_11 ? var_6 : 0))) && var_11))) + ((1 ? 1 : var_11))));
            var_17 = (((((!((((arr_1 [14]) - var_2)))))) - ((-(!244)))));
            var_18 = ((((max((~var_5), var_11))) ? (!1) : 156));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] [i_3] [1] = (((((var_7 ? (arr_4 [1] [i_3]) : var_9))) || var_11));
            var_19 = var_4;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_16 [i_1] [i_4] = var_4;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_26 [0] [1] [i_5] [i_4] [9] = (((((((1 ? (arr_5 [i_5]) : (arr_17 [i_7 + 1] [i_6] [i_5] [i_4])))) ? ((max(var_10, (arr_0 [i_5])))) : (arr_17 [i_1 + 1] [i_1 + 3] [i_5 - 1] [i_7 + 1]))) >> ((min((arr_10 [i_4]), (var_7 && 1))))));
                            var_20 = (~0);
                            var_21 = (min(var_21, ((max(1, 254)))));
                            var_22 = (((0 | 1) ? (206 - 1) : (((((min(174, 1))) == var_0)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_23 *= (((arr_14 [i_8] [1] [i_4]) ? ((188 / (arr_4 [i_1 + 3] [i_4]))) : (arr_8 [i_6])));
                            var_24 = ((0 ? var_12 : ((((arr_14 [1] [1] [i_8]) > (arr_21 [i_4] [1] [i_5 - 1] [i_4] [i_4]))))));
                        }
                        var_25 = (max(var_4, (1 ^ 1)));
                        var_26 = ((~(arr_8 [i_1])));
                        arr_29 [i_4] = var_11;
                    }
                }
            }
        }
        arr_30 [1] = 0;
        arr_31 [i_1 - 1] = arr_15 [i_1];
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        var_27 = (min(((+((min((arr_14 [i_9] [i_9] [i_9 - 2]), (arr_8 [i_9])))))), (((var_7 * var_0) * (~1)))));
        arr_34 [i_9] = (var_10 && (!var_10));
        var_28 += (((arr_6 [i_9] [i_9 + 1]) ? (!var_2) : ((var_1 - (~var_3)))));
    }
    #pragma endscop
}
