/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [0] [i_0] = (((max(var_4, var_5))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((511 ? ((~(arr_7 [i_1] [i_1 + 2] [i_1 - 1]))) : ((((max((arr_9 [1] [i_1] [i_1] [9] [i_3]), 14489))) ? var_3 : 12))));
                        var_19 = ((((-(arr_8 [i_1] [i_2 - 3] [i_3 + 1])))) ? ((((arr_8 [i_1] [i_2 - 3] [i_3 + 1]) ? (arr_8 [i_1] [i_2 - 3] [i_3 + 1]) : (arr_8 [i_1] [i_2 - 3] [i_3 + 1])))) : 65531);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_22 [8] [i_4 + 3] [i_4] [i_4] [i_4 + 1] = ((((!(((arr_7 [i_4] [i_4] [i_4]) < (arr_21 [i_4] [i_5] [i_5] [i_4 + 2] [i_4]))))) ? var_16 : (arr_6 [i_0])));
                        var_20 = var_7;
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((arr_17 [i_0]) ? ((((323748952 & 3500829605) >= 1203057679))) : var_9)))));
    }
    var_22 ^= ((var_14 ? var_17 : 6201));
    #pragma endscop
}
