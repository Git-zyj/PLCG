/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_0] = (~0);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_14 = (max((((arr_10 [i_1 + 3]) | 8388607)), ((((((var_8 ? (arr_0 [i_0]) : (arr_11 [i_0] [i_0])))) ? var_9 : 40303)))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_15 *= ((!(arr_0 [i_0])));
                            var_16 = (((-(arr_3 [1]))));
                            var_17 = -40283;
                            var_18 = (min((((max(40305, 40287)))), ((((arr_10 [i_2]) / var_0)))));
                            var_19 += (((((~(arr_1 [14])))) ? ((((arr_1 [6]) ? (arr_2 [4]) : 30))) : (((arr_1 [6]) ? var_8 : 14))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_20 = (max(var_20, 241));
                            var_21 = (max(var_21, ((max(((((max(28, 65528))) ? (((arr_16 [8] [8] [i_5] [i_3] [4]) ? (arr_11 [12] [12]) : (arr_16 [14] [22] [i_2] [i_1 - 2] [14]))) : (min(214732495396798504, 19)))), 40287)))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_22 = (arr_15 [10] [i_6] [i_6] [i_6] [i_2 + 2] [i_2]);
                        var_23 = ((~(max((arr_5 [i_2 + 1] [i_1] [i_0]), (arr_5 [i_2 + 2] [i_1 + 2] [i_0])))));
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_0] = (((40294 >= 704429845) % 255));
                        arr_22 [i_0] [i_1] = arr_1 [i_0];
                        var_24 = (((1 >> 2) ? (min(65510, var_12)) : (arr_17 [i_7] [i_1 + 4] [i_1 + 4] [i_2] [i_0])));
                    }
                }
            }
        }
    }
    var_25 = (min(5258, (~var_7)));
    var_26 += var_6;
    #pragma endscop
}
