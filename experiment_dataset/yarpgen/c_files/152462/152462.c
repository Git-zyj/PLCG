/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 &= (((-2828860939312752328 ? -2828860939312752328 : -49)));
                    var_15 -= (min(-2828860939312752316, -44));
                    var_16 = ((-(((var_6 ? (arr_7 [1] [1]) : var_7)))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_3] [i_3] [2] |= max(-2828860939312752328, ((var_9 ? (arr_4 [i_0] [i_1] [i_1]) : (((66 ? 0 : (arr_9 [i_0])))))));
                    arr_11 [i_0] [i_0] = var_8;

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_17 = -0;
                        var_18 = (((~((var_10 ? var_7 : (arr_8 [i_1] [i_3]))))));
                        var_19 = (min(((-(arr_4 [i_0 + 2] [4] [i_4]))), ((min((arr_4 [i_0 + 2] [i_3] [i_4]), (arr_6 [i_4] [i_3] [i_1] [i_0]))))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_20 |= (arr_4 [i_5] [i_1] [i_0]);
                    var_21 = var_7;

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_22 = ((-(arr_1 [i_0 + 1])));
                        var_23 = (((var_5 ? var_5 : (arr_17 [13] [4] [i_0]))));
                    }
                    var_24 -= ((var_4 ? (arr_18 [1] [i_0 - 1] [i_5]) : ((var_8 ? var_6 : var_0))));
                }
                arr_22 [i_0] = (max((min((max(-2828860939312752310, 1)), ((max(var_1, (arr_15 [i_0] [i_1] [10] [10])))))), (arr_21 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                arr_23 [i_0] [0] = (max(((~((min(var_7, (arr_7 [i_1] [i_0])))))), ((~(arr_9 [i_0])))));
            }
        }
    }
    #pragma endscop
}
