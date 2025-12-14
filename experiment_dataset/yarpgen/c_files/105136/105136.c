/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, var_3));
                        var_18 = ((!((var_9 <= (arr_1 [i_2] [i_1 - 2])))));
                        var_19 *= (((arr_12 [i_1] [i_1] [i_1 - 1] [i_1 - 2]) <= 4294967295));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = (~(max(var_10, (min(4294967279, (arr_7 [i_0] [i_2]))))));
                    }
                }
            }
        }
        var_20 &= (max((max(var_10, var_8)), (min((((~(arr_7 [i_0] [i_0])))), (min((arr_0 [i_0]), var_16))))));
        arr_14 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 ^= ((var_9 <= (((!(arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
        arr_17 [i_4] = (((((max(2, -1834924169)) >> ((((~(arr_10 [i_4] [9] [i_4] [i_4] [i_4]))) + 14830)))) < (((((((arr_9 [i_4] [i_4]) ? (arr_15 [i_4]) : 0))) ? (arr_15 [i_4]) : ((var_14 ? 60436 : 70)))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_22 = -var_12;
        var_23 = (max(var_23, (((((min((arr_6 [i_5] [i_5] [i_5]), (arr_7 [i_5] [i_5])))) ? ((~(arr_7 [i_5] [i_5]))) : ((((arr_7 [i_5] [i_5]) <= 4294967295))))))));
        var_24 += (min(1, 1536338238));
        var_25 -= (((-(max(4294967294, (arr_19 [i_5] [i_5]))))));
        arr_21 [i_5] = (((min(var_13, (arr_6 [i_5] [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = ((var_12 < (((arr_9 [i_6] [i_6]) ? (arr_4 [i_6] [i_6] [i_6]) : (arr_5 [i_6] [i_6])))));
        var_26 = (((var_14 ? 3 : 18446744073709551601)));
    }
    #pragma endscop
}
