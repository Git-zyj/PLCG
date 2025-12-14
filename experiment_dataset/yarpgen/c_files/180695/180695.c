/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_16 = (max(var_16, (arr_4 [i_0])));
                            arr_15 [i_0] [i_0] [22] [i_0] [22] = (min(((var_14 ? var_3 : (arr_5 [i_2 - 3] [i_3 + 1]))), ((~(arr_5 [11] [i_3 + 1])))));
                            var_17 = (max(var_17, (((((!(arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_1]))) || -1)))));
                            arr_16 [i_0] [i_0] [17] [i_0] = -7;
                            arr_17 [i_4] [i_0] [i_2] = var_13;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_20 [i_0] = (!-var_13);
                            arr_21 [i_0] [i_0] [i_0] [i_3 + 2] = (max((max(2581843902, 0)), -var_1));
                            arr_22 [i_0] [16] [i_0] = (arr_4 [0]);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(1713123373, 1713123394));
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] = ((-(min(var_2, -19))));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_18 = (max(var_18, (((max((arr_7 [i_2 - 2] [i_6] [i_2 - 2]), (max((arr_25 [i_0] [i_0] [20] [i_0] [i_3 + 2] [i_0] [4]), (arr_4 [1]))))) >= ((((min(var_13, (arr_1 [i_3])))) ? (((arr_1 [1]) - var_9)) : (arr_26 [4] [i_1] [1] [i_3 + 2] [i_1])))))));
                            arr_28 [i_0] [i_1] [i_0] [i_3 + 1] [7] [i_1] [i_3] = ((((var_3 || ((((arr_26 [i_0] [i_0] [i_2] [i_3] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : var_2))))) ? (arr_8 [i_3 - 1]) : 1));
                        }
                        arr_29 [19] [i_0] [i_0] [i_0] = (min(1713123379, (max((var_2 - var_5), ((((arr_10 [i_0] [i_0] [2] [0] [0] [i_0]) < 0)))))));
                    }
                    var_19 += (arr_26 [i_0] [i_0] [i_1] [i_0] [i_1]);
                    arr_30 [i_0] [i_0] [i_1] [3] = (72040001851883520 == 10605740569256403495);
                }
            }
        }
    }
    var_20 = (((((min(var_14, var_7)))) ? 2939793831 : (-127 - 1)));
    #pragma endscop
}
