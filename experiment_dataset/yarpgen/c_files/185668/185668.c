/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 |= (arr_1 [i_0 + 2] [8]);
        arr_3 [i_0] = var_11;
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        arr_5 [i_0] = (arr_2 [i_0 + 1]);
        var_18 |= (((((arr_0 [i_0] [1]) != 31)) ? (arr_1 [i_0] [12]) : (arr_0 [i_0 + 2] [12])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    var_19 = (max(var_19, 3344749639320422930));
                    var_20 = (max((arr_13 [i_3 - 1]), var_12));
                    arr_17 [i_1] = (((arr_6 [2]) / (arr_0 [i_1] [i_2])));
                }
            }
        }
        arr_18 [i_1] = (max(((((887964931 != (arr_8 [i_1] [i_1]))))), ((~(arr_15 [i_1] [i_1] [i_1])))));
    }

    /* vectorizable */
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        arr_23 [i_4] = ((-(arr_13 [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    {
                        var_21 = 19117;
                        arr_30 [i_5] [i_4] = ((-(arr_6 [i_4])));
                        var_22 = (arr_20 [i_4]);
                    }
                }
            }
        }
        var_23 = ((887964931 ? (((arr_7 [i_4]) | (arr_22 [i_4]))) : var_11));
        var_24 = (((arr_15 [i_4 - 3] [i_4 - 1] [i_4 - 1]) ? var_5 : -46404));
    }
    #pragma endscop
}
