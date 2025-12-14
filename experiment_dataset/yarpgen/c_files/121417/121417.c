/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((-((((min(var_3, var_10)) < var_6)))));
    var_16 = ((!var_9) - var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((var_3 ? var_8 : var_7)) << ((((-(arr_4 [i_0] [i_0]))) + 2166))))) : (((((var_3 ? var_8 : var_7)) << ((((((-(arr_4 [i_0] [i_0]))) + 2166)) + 1419)))));
                            var_17 += (arr_12 [i_4 + 2] [i_4 - 1] [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 4] [12]);
                            var_18 = (((var_9 == 67108832) - (((arr_9 [i_4] [i_0] [i_0] [i_1]) ? (arr_7 [20] [i_1] [20] [i_1]) : (arr_3 [i_0] [i_0] [i_0])))));
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [10] [10] [i_0] [i_3 - 1] [i_5 - 1] [i_0] = var_12;
                            var_19 = ((4611686009837453312 ? ((((arr_3 [i_0] [i_0] [i_0]) ? var_2 : var_4))) : (arr_10 [i_0] [i_1 + 2] [i_1] [i_1 - 1])));
                            var_20 = ((-((var_5 ? (arr_3 [i_1] [i_2] [i_0]) : 2842529410))));
                            var_21 -= (((arr_16 [8]) - var_9));
                            var_22 = (((var_1 + 9223372036854775807) >> ((((-34 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_0)) + 92))));
                        }
                        var_23 = (min(var_23, ((((arr_10 [22] [4] [22] [22]) != ((var_13 ? (arr_17 [i_3] [i_3] [2] [12] [2] [i_0] [10]) : var_4)))))));
                        var_24 = var_10;
                        var_25 = (max(var_25, (arr_9 [i_1 - 1] [16] [i_0] [i_1 - 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_26 = (((arr_9 [i_1 + 1] [i_0] [i_6 + 2] [i_1 + 1]) << (-8487837209461203417 + 8487837209461203437)));
                        var_27 = (max(var_27, -8030766134076577911));
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_7 + 2] = ((((((-(arr_0 [i_7] [i_7 + 3]))) >> (!52146))) | (((((max((arr_0 [i_2] [i_1]), var_6))) ? ((var_7 ? (arr_13 [i_0]) : 3136181307)) : (arr_9 [i_0] [i_0] [i_0] [20]))))));
                        var_28 = (((arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 - 2]) ? (arr_7 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2]) : (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1])));
                    }
                    var_29 = ((((+(max((arr_20 [i_0] [i_0] [i_0] [i_0]), 7))))) ? (((max(-2670531583621417233, (arr_19 [i_0]))))) : (arr_4 [i_0] [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
