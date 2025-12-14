/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 &= (((max(573046462, (arr_9 [i_4 + 1] [i_4 + 3] [i_4 + 1] [i_4] [i_2]))) | (arr_12 [i_4 - 1] [i_2] [i_4 + 1] [i_4] [i_4 - 2])));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_3]);
                                var_16 = (((((-(((arr_10 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) / (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) | (((~573046440) ? (3721920845 + 217) : (arr_0 [i_0])))));
                                var_17 = ((+(((arr_4 [i_4 + 3]) / (arr_0 [i_0])))));
                            }
                        }
                    }
                    var_18 = -1;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_19 = (((((arr_9 [i_0] [i_5 - 1] [i_2] [i_1] [i_0]) ? (arr_9 [i_0] [i_5 - 1] [i_2] [i_2] [i_0]) : -1)) * (arr_8 [i_0] [i_5] [i_0] [i_0])));
                                var_20 = (min((arr_1 [i_0] [i_2]), ((((arr_2 [i_0]) ^ (arr_4 [i_5 - 1]))))));
                                var_21 = (arr_22 [i_0] [i_1] [i_2] [i_2] [i_0] [i_6]);
                            }
                        }
                    }
                    var_22 = (max(((max((arr_6 [i_1] [i_2] [i_2]), ((0 | (arr_18 [i_1] [i_1] [i_1] [i_1] [i_0])))))), (((((((arr_2 [i_0]) && var_2)))) % (var_0 - -4704694598999157898)))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_23 |= ((38 + -12) & (arr_2 [i_2]));
                        var_24 = (((arr_8 [i_7] [i_7] [i_2] [i_0]) | 0));
                        var_25 -= 5;
                    }
                }
            }
        }
        var_26 = ((((max((arr_13 [i_0] [12] [i_0] [i_0] [i_0]), (min((arr_6 [i_0] [i_0] [i_0]), (arr_9 [i_0] [2] [2] [i_0] [i_0])))))) ? (((((((arr_4 [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : var_14)) <= (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) * ((max((arr_1 [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
        var_27 &= ((((max((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_2 [10])))) >= ((((min(var_0, 3721920855))) ? -25607 : 1240001726))));
    }
    var_28 = ((var_5 ? (((((var_13 ? var_4 : var_12))) ? var_4 : var_2)) : (((3450309329343484142 ? -var_10 : (0 / 6204285039606892892))))));
    #pragma endscop
}
