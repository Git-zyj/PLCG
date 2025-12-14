/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((~var_12), var_4)) | ((((max(var_1, var_2)))))));
    var_14 = (max(var_9, var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = ((((max(var_4, 36569))) % (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_16 = 12105683595522251378;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_1] [i_1] [i_1] = 4294967275;
                                var_17 -= (min((((((min(-23, var_10))) ? (arr_15 [1] [i_2 + 1] [5] [i_2]) : (arr_1 [i_4] [i_2 + 1])))), (max(-var_5, (((~(arr_5 [i_1] [i_1]))))))));
                                var_18 = (min(var_18, (((((max(121, 1))) ? (((~((12105683595522251379 ? (arr_16 [i_1] [i_2 - 1] [i_3] [i_3] [i_1]) : var_7))))) : 3547372915291482111)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_19 = var_10;
                            arr_23 [i_1] [i_1] = 20;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_20 ^= (6341060478187300208 >> (8490030875335116566 - 8490030875335116508));
                            var_21 = (((arr_12 [i_2] [i_3] [i_1] [i_8]) ? var_8 : 119));
                            arr_27 [0] [0] [0] [i_1] [0] = (var_10 >= var_2);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (arr_29 [i_1] [i_2] [i_3] [10] [8])));
                            var_23 = (((((6341060478187300237 ? var_4 : var_10))) ? var_6 : (((arr_12 [1] [i_1] [i_1] [1]) ? var_11 : var_2))));
                        }
                        var_24 = arr_22 [i_1] [i_2] [i_3 + 1] [i_1] [i_6 - 1];
                        arr_30 [i_1] [i_3 - 3] [i_2] [i_1] = var_8;
                        var_25 = (((arr_16 [i_6] [i_6] [i_6 + 1] [i_1] [i_1]) <= (arr_2 [i_2 - 1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_26 |= (arr_12 [i_2 + 1] [6] [6] [i_10]);
                        arr_33 [3] [10] [10] [i_1] [3] [3] = 3572498577698200622;
                        var_27 = (max(var_27, (((((((arr_31 [i_10] [i_3] [i_2] [i_2] [i_1]) ? 4294967290 : var_10))) > (arr_22 [i_2 - 1] [i_2 - 1] [i_3 - 2] [i_10 - 1] [i_10 - 1]))))));
                    }
                    var_28 = (max((min((~var_4), (((~(arr_19 [i_1] [i_2] [i_2] [i_1])))))), (((~((-(arr_15 [i_1] [i_1] [i_1] [i_1]))))))));
                    arr_34 [i_3 + 3] [i_1] [i_1] [i_1] = -3572498577698200622;
                }
            }
        }
        var_29 = (max(var_29, (((51 % ((~((134 ? 0 : 6341060478187300221)))))))));
        arr_35 [i_1] [0] &= arr_20 [i_1] [i_1] [i_1] [0] [i_1];
    }
    var_30 ^= var_2;
    #pragma endscop
}
