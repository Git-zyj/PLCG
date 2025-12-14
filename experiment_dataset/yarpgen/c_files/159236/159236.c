/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_13 = ((243 ? 10744 : 39829));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (((((-(arr_9 [i_0] [i_3 - 1] [i_1 - 1] [i_1 - 1] [i_0])))) ? (((~39850) ^ (arr_8 [i_0] [i_1 - 2] [i_2] [i_0]))) : (113 & 25678)));
                        var_15 = (arr_10 [i_0] [i_1 + 2] [0] [i_1 + 2] [i_3 - 1] [i_3]);
                        var_16 = (max(var_16, (25681 >= 32766)));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_17 ^= (((25716 >= (((arr_14 [i_1] [i_0] [i_1 + 1] [i_1]) ? 25685 : 285617989)))));
                            var_18 = -32766;
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = 126;
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_19 = (max(var_19, 114));

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_20 |= ((!(arr_16 [i_5 - 2])));
            var_21 = (min(var_21, (((-10745 ? 1637252099 : 1)))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [i_7] [i_7] [14] = ((((((arr_18 [i_5]) / var_2))) ? (arr_19 [i_5] [i_7] [4]) : (((2949887224 ? 8 : (arr_17 [i_5]))))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    {
                        var_22 = (min(var_22, (((-((3155987486 ? (arr_26 [i_5] [i_5] [i_5] [i_5]) : (arr_20 [i_5] [i_8 + 1] [i_8 + 1]))))))));
                        arr_29 [i_5 - 1] [i_8] [i_8] [i_9 - 3] = (((~var_9) ? 141 : (arr_27 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_9])));
                    }
                }
            }
            arr_30 [i_5] [i_5] [i_7] = (((arr_17 [i_5 + 1]) > (arr_17 [i_5 + 1])));
            var_23 = ((-(arr_21 [i_5 - 2] [i_5 + 1] [i_5 - 2])));
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_33 [i_10] = (-(((((arr_18 [i_10]) && (arr_31 [i_10] [i_10]))) ? (arr_23 [i_10] [i_10] [i_10] [i_10]) : ((141 ? (arr_28 [i_10]) : (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]))))));
        arr_34 [i_10] = arr_25 [i_10] [i_10] [i_10] [i_10];
    }
    var_24 = (var_12 / -32766);
    #pragma endscop
}
