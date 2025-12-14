/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (((arr_6 [i_0]) ? (arr_6 [i_0]) : 1));
                        arr_10 [i_3 - 1] [6] [i_0] [6] [i_0] |= (var_12 / (((arr_1 [10]) ? 1 : (arr_6 [10]))));
                    }
                }
            }
            var_15 = (((arr_0 [i_0]) ? (arr_6 [i_0]) : var_12));
            arr_11 [i_0] = (((1 <= var_4) - 1));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_14 [16] [i_0] = (var_5 > var_12);
            var_16 = ((27394 ? (-127 - 1) : 1));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_17 = ((((((arr_0 [i_0]) / 1))) ? 2147483647 : (arr_9 [i_0] [17])));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_18 = (-189459375 - var_5);
                            var_19 = var_4;
                            var_20 = (arr_16 [i_6 + 1] [i_6 - 2] [i_0]);
                            arr_27 [i_0] [i_5] [i_6] [i_7] [2] |= (13987 % 3);
                        }
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = (min((((var_2 >= ((min(var_12, (arr_0 [i_0]))))))), (((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_21 |= var_2;
    #pragma endscop
}
