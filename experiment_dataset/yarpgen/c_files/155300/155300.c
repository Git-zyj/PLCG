/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((((!(arr_0 [i_0] [i_0]))))) < (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 -= 13018842214963992608;
            var_18 = -var_2;
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, ((13018842214963992615 ? ((max((arr_1 [i_3]), (min((arr_5 [i_0] [i_3] [i_4]), var_12))))) : (((((var_5 ? -7147743445349397748 : var_14))) ? (((arr_9 [i_0] [0] [i_3] [i_3]) ? (arr_0 [i_2] [i_3]) : (arr_7 [i_2]))) : (arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [2])))))));
                        var_20 = (max(var_20, ((((684366112937361878 % (((694387029 ? var_8 : -56)))))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_14 [i_5] = ((+((var_13 ? (((arr_7 [i_5]) ? (arr_11 [i_5] [i_5] [i_5] [12] [11] [i_5]) : (arr_12 [i_5]))) : (var_8 >= 0)))));

        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            var_21 ^= (~3417575990);

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_19 [i_7] [i_6] [i_5] = (arr_6 [i_7] [i_6]);
                var_22 = arr_10 [i_6 - 3] [i_6] [i_6] [i_7];
            }
            arr_20 [i_6 - 3] = (((-2096896 ? 1127169484186002936 : (!1))));
            var_23 += (max(((34 ? 13018842214963992590 : 0)), (((((max(65535, var_11))) ? -var_12 : var_4)))));
        }
    }
    var_24 = (((((var_0 ? var_11 : ((var_10 ? var_6 : var_16))))) ? (((var_9 ? ((var_9 ? var_9 : 0)) : var_7))) : (((var_14 ? 43048 : var_13)))));
    #pragma endscop
}
