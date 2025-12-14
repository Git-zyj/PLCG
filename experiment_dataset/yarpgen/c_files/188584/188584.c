/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((min(var_3, var_5))) & (((((var_3 ? var_3 : var_8))) ? var_7 : (var_8 % var_2)))));
    var_11 = ((var_7 | (((((1 ? 82 : 1))) ? -var_0 : var_7))));
    var_12 = (((var_5 != var_8) ? var_5 : var_6));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0 + 2] [i_0] = var_0;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = ((((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : var_5))) ? (var_7 != var_9) : (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [9])))));
            arr_7 [i_0] [i_0] [i_0] = (max(((var_7 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0 + 2]))), ((var_2 << (((arr_0 [i_0 + 2]) - 10674))))));
            var_14 = (((arr_3 [i_0 + 2]) ? var_1 : (((arr_2 [i_0] [i_0 - 1]) ? (arr_5 [i_0] [i_0 - 1]) : (arr_6 [i_0 + 2] [i_0 - 1] [i_1])))));
        }
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_15 -= (((((-(arr_2 [12] [i_2 + 1])))) ? var_7 : ((1 ? var_3 : var_8))));
        var_16 = ((((var_4 ? var_4 : ((max(var_4, (arr_9 [i_2])))))) % (((((var_5 ? var_5 : var_7))) ? ((var_1 ? (arr_0 [i_2]) : var_9)) : (arr_1 [i_2 - 1] [i_2])))));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_17 = (min(var_17, var_9));
            var_18 = (((arr_5 [i_2] [i_3]) ? ((((((1 ? 20669 : 6705))) || (((var_5 ? (arr_12 [i_2]) : var_5)))))) : var_6));
        }
        arr_14 [i_2] = ((((((arr_11 [i_2 - 1] [i_2]) | (arr_13 [i_2 - 1] [i_2 - 1] [i_2])))) ? (((arr_10 [i_2]) ? (max(var_3, (arr_3 [i_2]))) : var_5)) : ((var_3 ? ((118 ? 118 : 1)) : (var_7 % var_2)))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_19 = arr_13 [i_4] [i_4] [8];
        var_20 -= (arr_2 [4] [i_4]);

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_21 -= (arr_12 [i_5]);
            var_22 = (-2147483645 ? 1 : 19423);
            arr_20 [9] [i_4] [i_4] = ((((((arr_8 [i_5] [i_5]) / (arr_8 [i_5] [i_5])))) ? (((arr_8 [i_5] [i_4]) | (arr_8 [i_5] [i_5]))) : (var_4 | var_2)));
        }
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_23 = ((((((arr_24 [i_6 + 1] [i_6]) * (((arr_0 [i_4]) % var_5))))) ? (max(((var_5 ? var_8 : (arr_29 [i_4] [i_6] [i_7]))), (arr_21 [i_6 + 1] [i_6]))) : (~var_1)));
                            var_24 = (arr_28 [i_4] [i_6] [i_4]);
                            var_25 ^= min((((arr_22 [i_9] [14]) ? (arr_22 [i_9] [6]) : var_8)), ((min(var_2, var_9))));
                        }
                    }
                }
            }
            var_26 = (((min(var_9, (arr_32 [i_6] [12] [8])))) ^ (var_9 - var_4));
        }
        arr_33 [i_4] = (max((min((arr_21 [i_4] [i_4]), var_2)), (((arr_26 [8] [i_4] [i_4] [i_4]) ? (arr_26 [12] [i_4] [i_4] [12]) : (arr_26 [2] [i_4] [i_4] [2])))));
        arr_34 [i_4] = var_8;
    }
    #pragma endscop
}
