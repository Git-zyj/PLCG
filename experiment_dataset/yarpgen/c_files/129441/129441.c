/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1625665517));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [0] [1] [i_2] [i_2] [i_3] = ((var_5 <= (arr_3 [i_0] [i_0] [i_0])));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] &= ((arr_1 [i_3]) / (((((arr_4 [i_0] [20] [i_0] [i_1]) + 2147483647)) >> (var_1 + 90))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((!(arr_4 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_11 *= (~-1625665518);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_7] [i_6] [i_4] = ((((arr_6 [i_7]) + (arr_6 [i_7]))));
                        arr_25 [i_5] [i_5] [i_7] [i_5] = ((((arr_18 [i_4] [i_4] [i_4]) & (arr_18 [i_4] [i_4] [i_4]))) >> ((15 ? ((30395 >> (var_5 - 2147786937658845046))) : (arr_18 [i_4] [i_4] [i_4]))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_12 = (~2305843009213693951);

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_37 [20] [i_8] [i_8] = (-47 - 1030311882);
                    arr_38 [i_8] = ((max((arr_4 [i_8] [i_8] [i_8] [12]), (arr_4 [i_10] [i_8] [i_8] [i_10]))));
                    arr_39 [i_8] [i_8] [i_8] [i_10] = ((((min(-32747, (min((arr_8 [i_8] [i_8] [i_8] [i_8] [i_8]), var_3))))) < var_7));
                    arr_40 [4] &= ((((arr_31 [i_9] [4]) || var_9)));
                    arr_41 [i_8] [i_9] [i_8] = ((var_3 > (arr_36 [i_8] [i_9] [i_9] [i_9])));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_13 += (arr_43 [i_8] [i_9] [16]);
                    arr_45 [i_8] [i_8] [i_11] [i_9] = (arr_1 [i_8]);
                    arr_46 [i_8] [i_8] [i_8] = ((0 - (((arr_4 [i_8] [i_9] [i_8] [i_11]) ? (arr_3 [i_8] [i_8] [i_8]) : (arr_3 [i_8] [i_9] [i_11])))));
                    arr_47 [i_8] [i_11] = ((-1625665531 ? ((((arr_29 [i_8] [i_9]) ? (arr_29 [i_8] [i_11]) : (arr_29 [i_8] [i_11])))) : ((~(var_7 * var_6)))));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_50 [i_8] [i_9] [i_9] [i_8] = (((+-43040) ? (((arr_34 [i_8] [i_8]) ? (arr_3 [i_8] [i_8] [i_8]) : ((6357519893712433841 ? (arr_3 [i_8] [i_9] [i_8]) : (arr_27 [i_8]))))) : 32747));
                    var_14 = (~(arr_31 [i_9] [20]));
                }
                arr_51 [i_8] [i_8] [i_9] = (arr_5 [i_8]);
                var_15 = (min((min(14997, (-2147483647 - 1))), ((~(arr_5 [i_9])))));
            }
        }
    }
    #pragma endscop
}
