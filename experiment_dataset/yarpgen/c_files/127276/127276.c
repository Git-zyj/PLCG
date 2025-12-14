/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((max(var_15, var_14))), (max(var_11, var_0)))) ^ var_15);
    var_18 = ((max(var_12, (min(var_5, var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_19 = ((+((-(((arr_0 [i_0]) / (arr_1 [i_1])))))));
                        arr_9 [i_1 - 1] [i_0] [i_2] [i_2] = (max(((11045527903494198663 ? 11045527903494198663 : 7401216170215352952)), ((7401216170215352945 ? 7401216170215352934 : 11045527903494198663))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = (min(((max((arr_2 [i_0] [i_1 - 1]), var_6))), ((~(arr_2 [i_1 + 1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (min((arr_13 [i_0] [i_0] [i_2] [i_2]), ((-(max(var_11, var_10))))));
                        var_21 &= (max(((((((arr_3 [i_0] [i_4]) ^ (arr_0 [i_1])))) ? ((var_6 ? (arr_0 [i_1 - 2]) : var_8)) : (((arr_5 [i_0] [i_1] [i_2] [i_0]) ? (arr_5 [i_0] [i_1 + 1] [i_0] [i_4]) : (arr_14 [i_2] [i_1] [i_1] [i_1]))))), (((max(var_9, (arr_2 [i_0] [i_0])))))));
                        arr_15 [i_4] [i_0] [i_0] [18] = (((((var_11 ^ var_2) ^ (((max((arr_14 [i_0] [i_1] [i_1] [i_0]), (arr_0 [i_1])))))))) ? (min((min((arr_13 [i_4] [i_0] [i_0] [i_0]), var_15)), ((var_15 ? var_1 : (arr_8 [i_0] [i_0] [i_2] [i_0] [i_0]))))) : (min((arr_3 [i_0] [i_1 - 1]), (arr_14 [i_0] [i_1] [i_2] [i_4]))));
                        var_22 = (((((-((max((arr_14 [i_0] [i_0] [i_2] [11]), var_1)))))) ? (min((7401216170215352953 / 11045527903494198649), 7401216170215352957)) : ((min(((min((arr_8 [i_4] [i_0] [i_1 - 1] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_4] [i_4] [i_0])))), (max(var_15, (arr_4 [i_1] [i_0]))))))));
                        arr_16 [i_0] [i_0] = ((((var_14 ^ (arr_7 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_23 -= ((~((~(7401216170215352934 ^ 11045527903494198668)))));
                        var_24 = ((((+(min((arr_12 [i_0] [i_0] [i_1] [14] [i_2] [7]), (arr_18 [i_2] [i_2] [i_1]))))) ^ ((((!((max((arr_13 [5] [i_0] [i_0] [i_0]), (arr_4 [i_0] [18]))))))))));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_25 = (min(var_25, ((((max(var_2, (((arr_19 [i_0] [i_0]) / var_2)))) ^ (arr_0 [i_2]))))));
                        arr_21 [i_6] [i_0] [12] [i_6] = (max((min((min((arr_17 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]), (arr_3 [i_0] [i_2]))), (((arr_8 [12] [i_0] [i_1 - 1] [12] [i_6]) ^ var_6)))), (((arr_2 [i_0] [i_2]) ^ var_3))));
                        var_26 |= (max((arr_2 [i_1 - 2] [i_1]), (((arr_2 [i_1 - 2] [i_0]) / (arr_2 [i_1 - 1] [i_0])))));
                    }

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        arr_25 [i_0] = (arr_11 [i_0]);
                        arr_26 [i_0] [i_0] [i_0] [i_7] [i_2] = (arr_6 [i_0] [i_0] [i_0]);
                    }
                    arr_27 [i_2] [i_2] &= (+(max((11045527903494198670 / 7401216170215352946), (max((arr_19 [i_0] [i_0]), var_12)))));
                    arr_28 [i_0] [17] [i_0] [i_0] = (min((11045527903494198682 ^ 11045527903494198670), (((-(min((arr_22 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_2]), var_10)))))));
                    arr_29 [i_2] [i_2] [i_0] = ((!(11045527903494198657 ^ 11045527903494198650)));
                }
            }
        }
    }
    #pragma endscop
}
