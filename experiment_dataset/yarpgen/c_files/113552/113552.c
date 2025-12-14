/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_7);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [0] [i_1] [17] [18] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_11 [i_1] [i_1] = (((1 ? 1 : (max(var_6, (arr_7 [i_0] [i_2] [20] [1]))))));
                        var_14 = (min(((((arr_1 [i_0]) && -16))), (((arr_6 [i_1] [i_1] [i_1] [i_2]) ? (arr_6 [i_3] [i_1] [i_1] [i_0]) : 16296871728357775481))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_15 = (var_7 / 92);
                        var_16 = ((((((((var_9 ? var_11 : 216))) ? (((arr_14 [17] [i_4] [17]) ? 16296871728357775481 : var_6)) : ((((arr_18 [i_4] [i_4]) ? var_12 : var_10)))))) ? ((~((~(arr_3 [i_5] [15] [22]))))) : ((~(((arr_2 [i_0] [i_5] [6]) ? var_7 : var_12))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    {
                        var_17 &= (((((((max(-1, 232))) ? ((var_1 ? (arr_21 [i_0] [1] [5] [i_9]) : 78)) : (((max(var_7, (arr_22 [i_9 - 2] [i_8] [18] [i_0])))))))) ? 242 : (79 / -var_5)));
                        arr_25 [9] [9] [i_0] [i_9] = (arr_14 [i_0] [i_0] [i_7]);
                    }
                }
            }
        }
        var_18 = ((210 ? (max((3946112473 ^ -76), (arr_14 [i_0] [i_0] [i_0]))) : 16));
        var_19 = (min(var_19, (((((((-4389209482240184135 ? 0 : -32)) ? (arr_15 [i_0] [i_0] [i_0]) : var_5)))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_29 [i_10] = (arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
        arr_30 [i_10] = var_2;
        var_20 = ((-(arr_21 [i_10] [i_10] [i_10] [i_10])));
    }
    #pragma endscop
}
