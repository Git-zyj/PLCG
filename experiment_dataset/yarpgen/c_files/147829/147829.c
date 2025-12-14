/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((-(((arr_2 [i_0]) ^ (((arr_5 [11] [i_0] [i_1] [i_2]) | (arr_1 [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = ((((((arr_3 [i_2] [i_1] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_3] [i_0] [i_0])))) ? (((arr_0 [i_0]) * (arr_6 [i_0] [i_1] [i_0] [i_1]))) : (132 | 240)));
                        arr_10 [i_0] = (!(((-(arr_2 [i_3])))));
                        arr_11 [i_0] [i_0] = (((!(arr_2 [i_3]))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_15 ^= (((arr_3 [i_0] [i_1] [i_0]) != ((-(arr_7 [i_0] [i_1] [i_1] [i_1])))));
                            arr_14 [i_0] [i_3] [i_2] [i_3] = ((((((arr_5 [i_0] [i_0] [i_2] [i_0]) + (arr_13 [i_0] [i_0] [i_2] [i_2])))) ? ((((arr_1 [i_0]) >= (arr_8 [i_2])))) : (arr_13 [i_0] [i_4] [i_2] [i_3])));
                            arr_15 [i_3] [i_3] [i_0] [i_2] [i_0] [i_1] = (((arr_2 [i_4]) != (arr_9 [i_0] [i_1] [i_0] [i_3])));
                            var_16 = (arr_3 [i_0] [i_1] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 = (((arr_5 [i_1] [i_2] [16] [i_5]) & (111 ^ 112)));
                            var_18 = (((((arr_12 [i_0] [i_1] [i_3]) ? (arr_3 [i_2] [i_2] [i_1]) : (arr_17 [8] [i_1] [i_1] [i_3] [i_1] [i_1]))) / (((arr_4 [i_0] [i_1]) ? (arr_12 [i_0] [i_0] [i_2]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_5])))));
                            arr_18 [i_0] [i_0] [i_3] [i_3] [i_3] = (((((arr_1 [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (arr_17 [21] [i_1] [i_1] [i_2] [i_2] [i_2]))) >= ((((arr_8 [i_0]) <= (arr_6 [i_0] [21] [i_2] [i_1]))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((((((arr_2 [i_3]) % (arr_1 [i_0])))) ? ((((arr_17 [i_0] [i_0] [14] [i_3] [i_0] [i_2]) < (arr_19 [i_0])))) : (((arr_13 [i_0] [i_1] [i_2] [i_2]) ? (arr_7 [i_6] [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_3] [i_6])))));
                            var_20 = ((-((-(arr_6 [i_6] [0] [i_1] [i_0])))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_21 = ((+(((arr_17 [i_0] [i_1] [0] [10] [i_0] [i_7]) + (arr_12 [i_1] [i_3] [i_7])))));
                            var_22 = ((((arr_12 [i_1] [i_1] [i_7]) != (arr_7 [i_0] [i_1] [i_0] [i_3]))));
                            arr_24 [i_0] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_0] [i_3]);
                            var_23 = (arr_20 [10] [10] [i_1] [i_2] [i_3] [i_7] [i_7]);
                        }
                    }
                    var_24 = (((((!(arr_12 [i_2] [i_2] [i_2]))))));
                }
            }
        }
    }
    var_25 = var_9;
    var_26 = ((((255 ? 242 : 1)) >> (((((((var_3 ? var_0 : var_11))) | (~var_4))) - 16265545003418139956))));
    var_27 ^= var_8;
    #pragma endscop
}
