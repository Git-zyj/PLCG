/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 + 1]);
        arr_3 [i_0 + 1] = (arr_1 [i_0 - 2]);
        arr_4 [1] = ((-(arr_0 [i_0])));
        var_15 = ((var_0 == ((((1 == (arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_16 += (32 ^ -4401593165911566165);
                        arr_15 [i_4] = ((((((arr_14 [i_1 + 1] [i_4] [19] [9]) * ((var_0 ? 1 : (arr_14 [i_1] [i_4] [i_1] [i_1])))))) | (((((0 ? var_14 : (arr_14 [i_1 - 1] [i_4] [i_1] [i_1])))) ? (((arr_12 [i_1]) ? var_3 : (arr_7 [i_1]))) : var_14))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_17 *= ((((min(var_9, (arr_24 [i_5])))) ? (-9430 & 4401593165911566164) : (((+((((arr_5 [i_1]) != var_10))))))));
                                var_18 += (arr_9 [i_8] [i_6 + 3]);
                            }
                        }
                    }
                    arr_27 [i_6 + 3] [i_5] [i_1] = ((((((arr_22 [i_1] [i_5] [i_6] [i_1]) ? (((arr_19 [i_1] [i_5] [i_5] [i_6]) ? (arr_21 [i_1] [i_1] [i_1] [14] [6]) : var_9)) : var_12))) ? ((((~(arr_7 [i_1]))) % (arr_8 [i_5] [i_6 + 3]))) : var_10));
                }
            }
        }
        var_19 = ((1 && (arr_11 [i_1] [i_1 + 1] [i_1 + 1])));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_20 = (arr_22 [i_9] [i_9] [i_9] [i_9]);
        var_21 = (max(var_21, 1));
    }
    var_22 *= ((var_8 ? ((~(max(var_8, var_9)))) : var_11));
    #pragma endscop
}
