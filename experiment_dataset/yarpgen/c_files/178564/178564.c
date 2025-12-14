/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (min(var_12, var_0));
    var_13 = (max(var_13, (((var_6 ? var_5 : var_2)))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = ((-186 ? ((((!(arr_3 [i_0] [i_0 + 3]))))) : 1282405163187448722));
        arr_4 [1] [1] = (min(((((var_8 && var_7) ? (arr_2 [i_0] [i_0 + 4]) : ((var_0 ? (arr_1 [i_0 + 2]) : var_1))))), (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = (min(var_10, ((var_10 ? (arr_11 [17] [i_2] [i_2] [i_1]) : (arr_11 [i_2] [i_2] [0] [i_3 + 4])))));
                    arr_13 [i_1] [i_1] [i_3] = (min(((1 ? 602899287 : 1972441977)), (var_2 <= var_4)));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_15 = 32745;
                        arr_16 [i_1] [i_2] [i_1] [i_1] = ((((((min(var_5, var_6))) ? var_8 : ((-525944727 ? var_5 : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))))) % (((1 ? ((var_5 ? 2034130752350469304 : var_6)) : var_6)))));
                        arr_17 [i_2] [i_2] [i_4] = (arr_5 [i_3 + 2]);

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            arr_20 [i_5] [i_4] [i_1] = var_0;
                            var_16 -= (((~1) ? var_1 : (arr_19 [i_5 - 4] [i_3 - 2] [i_3 - 2] [i_4] [i_5 - 3])));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            var_17 = (max(var_17, 1));
                            var_18 = (((arr_22 [i_2] [i_3 + 1] [i_4]) - (((var_9 ? var_2 : (arr_5 [i_1]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_2] [12] [12] = (arr_19 [i_3 - 3] [i_3 - 3] [0] [0] [i_3]);

                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            arr_31 [12] [i_7] [i_1] [i_2] [i_1] = (((arr_19 [i_1] [i_1] [i_1] [i_1] [22]) >> (((arr_19 [i_1] [i_2] [i_3 - 1] [i_3 - 1] [i_8 - 3]) - 1166521708))));
                            arr_32 [i_1] [i_1] [21] [i_1] = ((((var_9 ? 1 : var_4)) == var_8));
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_37 [19] [i_3] [i_2] [i_1] = ((!(((var_0 ? var_1 : var_7)))));
                            arr_38 [i_1] [i_1] [i_2] [i_1] = -var_9;
                            var_19 = ((!(arr_30 [i_3 - 3] [i_3] [4])));
                        }
                        arr_39 [i_1] [i_1] [i_1] [i_1] = ((var_1 >> (arr_29 [i_3 + 3] [i_1] [i_1])));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_20 = (~-6317661967067189658);

                        for (int i_12 = 3; i_12 < 22;i_12 += 1)
                        {
                            var_21 ^= (((min((17164338910522102902 ^ 1), (min(var_5, (arr_36 [i_1] [i_2] [i_3 + 1] [i_3 + 1] [0]))))) >> ((((max(var_1, (arr_36 [i_1] [i_1] [i_1] [i_1] [i_1])))) - 16568))));
                            var_22 += 11;
                        }
                        for (int i_13 = 2; i_13 < 20;i_13 += 1)
                        {
                            var_23 = (arr_44 [i_13] [i_11] [i_11] [i_11] [i_3] [i_2] [16]);
                            var_24 = (((((arr_34 [i_13 + 1] [i_11] [i_2] [i_1]) / (arr_34 [i_2] [i_2] [7] [i_13 + 3]))) == (arr_23 [i_3] [i_3] [21] [21])));
                            var_25 = (min(var_25, (((~((var_10 ^ (arr_15 [i_3 - 2] [i_3 - 3] [i_3] [i_3 + 4] [i_3 - 3]))))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 22;i_14 += 1)
                        {
                            var_26 -= (var_8 * var_0);
                            var_27 = 1;
                            arr_50 [i_1] [i_14] [i_1] [i_11] [6] [i_3] [i_2] = (((((var_4 ? 244 : 1147227658))) && (arr_11 [i_14 - 1] [i_3] [i_3 - 3] [i_3 + 3])));
                            var_28 = var_6;
                        }
                        arr_51 [2] [4] [2] = ((var_4 > ((var_10 ? var_10 : (arr_30 [i_3 - 2] [i_3 - 3] [i_3 - 3])))));
                        var_29 = var_3;
                        arr_52 [i_11] [i_3] [i_2] [i_1] = -854504885;
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                    {
                        var_30 = (min((1 == 5703857522013948656), ((((((arr_26 [i_2] [16] [i_3 - 3] [i_15]) & 3682981399))) ? (~var_4) : (arr_15 [i_3] [12] [i_3] [i_3 - 1] [i_3 - 1])))));
                        arr_55 [i_1] [i_1] = var_1;
                    }
                }
            }
        }
        arr_56 [i_1] = ((((max((((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_10 : 1516478125)), ((min(var_7, var_8)))))) ? (min((arr_22 [i_1] [i_1] [i_1]), var_2)) : ((max(((-2850 ? (arr_43 [9] [i_1] [i_1] [i_1] [i_1]) : var_7)), -2147483645)))));
        var_31 ^= (max((var_8 > var_1), ((var_9 ? var_7 : (arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [10] [i_1])))));
    }
    #pragma endscop
}
