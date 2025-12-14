/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_1, (!var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 += (~-0);
            arr_5 [i_0] [4] = ((18446744073709551608 ? 12159584598496243373 : 18446744073709551607));
            var_17 ^= arr_0 [i_1];
            var_18 = var_9;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = (((arr_6 [i_2] [i_2]) ? (arr_4 [7] [i_2] [11]) : var_14));
            var_19 = -159;
            arr_9 [i_2] [i_2] = ((var_0 ? ((((arr_1 [i_2]) || 18446744073709551611))) : var_2));
            arr_10 [i_2] = (9 % 6);
        }
        arr_11 [i_0] = (((((9 ? (arr_6 [i_0] [i_0]) : (arr_0 [i_0])))) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0] [i_0])));
        arr_12 [10] = 18446744073709551593;
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_20 = (((((max(8371579675629491096, (arr_13 [i_3] [i_3])))) || 10)) ? (arr_15 [5]) : ((~(max(32, 13855631348008349469)))));
        var_21 ^= (arr_15 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_22 *= arr_7 [i_4];
        arr_18 [i_4] = (arr_13 [i_4] [i_4]);
        var_23 = arr_3 [i_4] [i_4] [i_4];
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_23 [i_5] = ((-(arr_14 [i_5] [i_5])));
                var_24 = (max(var_24, ((max((((arr_2 [i_5 + 1]) ? var_8 : (arr_19 [10] [10]))), (((!(((15 ? var_8 : (arr_4 [i_5] [i_5] [i_6]))))))))))));
            }
        }
    }
    var_25 = -var_13;
    #pragma endscop
}
