/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((!((min(var_0, var_0))))), 1));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    arr_7 [1] [i_1] [i_2 - 3] = ((min(4636389581003328803, (arr_5 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [4] [0] [i_3] [i_4 + 1] [1] = (max((arr_10 [i_1 - 1] [i_1] [i_3] [i_3 - 1] [i_4 - 1]), (((arr_11 [i_1 - 1] [i_1 - 1]) ? (arr_11 [i_1 - 2] [i_1 - 2]) : (arr_10 [i_1 + 1] [i_2 - 2] [i_2] [i_3 - 1] [i_4 + 1])))));
                                arr_13 [i_0] [i_0] [i_0] [2] [i_0] [i_0] = 0;
                            }
                        }
                    }
                    var_16 = ((min((((arr_0 [i_0] [i_1]) * (arr_3 [i_0]))), -var_8)));
                    arr_14 [i_0] = (min(((((((arr_2 [0]) ? var_0 : var_3))) ? 13329 : ((max((arr_4 [7] [i_1 - 1] [i_0]), (arr_2 [i_0])))))), 85));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [3] = (arr_6 [i_0] [9] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_23 [i_6] [i_1] = (((((226 ? var_7 : ((max(var_2, (arr_20 [9] [i_1] [i_6]))))))) ? (min((arr_17 [i_0] [i_0] [i_0]), (arr_6 [i_5] [i_6] [i_7]))) : (((arr_5 [i_5]) ? (((arr_5 [i_0]) ? var_12 : var_9)) : -var_0))));
                                var_17 &= -1;
                                var_18 = var_4;
                            }
                        }
                    }
                    arr_24 [i_1] = ((!((((arr_9 [i_0]) ? (arr_11 [i_0] [i_5]) : var_6)))));
                }
                for (int i_8 = 4; i_8 < 9;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        var_19 = var_10;
                        arr_31 [i_0] [i_1] [i_8] [i_9] = var_1;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_20 = (min((max((arr_33 [1] [i_8 - 1] [i_1 - 1]), (arr_33 [2] [i_8 - 3] [i_1 + 1]))), (arr_17 [i_10] [i_1] [i_0])));
                        arr_35 [i_8] [i_1] [i_8] = ((+(max((arr_29 [i_0] [9] [i_0] [9]), (arr_15 [i_1 + 1] [i_1] [i_8 - 1] [i_1])))));
                        arr_36 [i_10] [i_8] [0] [0] = (!var_8);
                        arr_37 [1] [i_0] [i_1] [i_1 - 2] [i_8 - 4] [i_10] = ((!((max(449995888, (((1 ? -343309529 : 65513))))))));
                    }
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        arr_41 [i_0] [i_1 - 1] [i_1] [i_8] [i_8] [i_11 + 1] = ((!((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 2]))))));
                        var_21 = ((((min((!var_8), (min(var_2, (arr_32 [0] [i_1] [i_8] [i_11] [0] [1])))))) ? (arr_21 [i_11] [i_11 + 1] [i_8 - 2] [i_11] [i_11]) : (min(((343309529 ? 4249244614 : 27425751)), (arr_1 [i_11 + 1] [i_1 + 1])))));
                        var_22 ^= (arr_28 [1]);
                    }
                    var_23 = ((2927013876 >= ((((arr_28 [7]) ? (arr_6 [i_0] [8] [i_0]) : var_4)))));
                    arr_42 [i_0] [i_1] = (max(((min(((max(var_6, (arr_40 [i_0] [i_8])))), var_8))), ((var_6 ? (arr_22 [i_0] [i_0] [i_1 - 2]) : (arr_25 [2])))));
                }
                arr_43 [i_1 - 1] [8] = (arr_6 [5] [i_1] [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}
