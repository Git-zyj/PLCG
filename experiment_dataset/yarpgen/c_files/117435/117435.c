/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((25 ? var_2 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 |= (arr_7 [i_2 - 2] [i_1 - 1] [i_1] [i_1]);
                                arr_16 [i_0 - 1] [9] [i_2 - 2] [i_0] [i_4] [i_4] [i_4] = ((!(-58 >= 12489376629342896112)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((((3 ? var_2 : (arr_10 [12] [i_5] [i_5]))) <= (((-(max(var_11, (arr_22 [i_0 + 1] [i_1] [i_5] [10] [i_6])))))))))));
                            arr_24 [i_0] [i_1 - 1] [i_5] = (min(-1318646677, 4294967288));
                            var_19 = (min(var_19, (arr_15 [i_0] [4] [14] [3] [i_5] [i_6])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((-(arr_18 [i_8] [i_0 - 1] [i_0 - 1] [i_8])))) ^ ((12489376629342896104 << (((arr_18 [i_8] [i_0 - 3] [i_0 - 3] [i_8]) - 23516))))))));
                            var_21 = (arr_4 [i_0]);
                        }
                    }
                }
                var_22 -= ((((((-(arr_17 [14] [i_1]))) % ((max((arr_12 [2] [1] [i_0 + 2] [i_1] [i_1]), var_14))))) ^ (arr_23 [i_0] [i_0] [i_1] [5])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_23 = (max(var_14, (arr_34 [i_0 - 3] [i_9] [i_10] [i_10] [i_10])));
                            var_24 = (max(var_24, ((((((((arr_18 [i_0 - 3] [6] [i_0 + 2] [i_10]) | (arr_33 [i_10] [i_10]))) ^ ((((arr_23 [2] [i_1] [i_9] [7]) ^ (arr_31 [i_1 - 1] [i_9] [i_10])))))) ^ (min(-5658205856554244707, 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
