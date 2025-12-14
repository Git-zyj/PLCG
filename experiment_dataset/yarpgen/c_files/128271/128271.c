/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [0] = ((((var_15 ? 20249 : -2107969174))));
        var_17 *= ((!(arr_2 [i_0] [6])));
        var_18 += (~var_16);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 = (((!(var_8 + var_6))) ? (((var_4 > (arr_2 [i_1] [i_1])))) : ((~((var_7 ? var_2 : (arr_5 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_20 -= var_8;
                        arr_17 [i_1] [i_2] [i_1] = ((~(((arr_10 [i_2 - 1] [i_3 - 1] [i_3 + 1]) ^ (arr_10 [i_2 + 1] [i_3 - 1] [i_3 - 1])))));
                        var_21 = ((arr_10 [i_1] [i_2 - 1] [i_3 - 1]) ^ (((arr_11 [i_3 + 1] [i_3]) ? (arr_16 [i_1] [i_2 - 1] [i_3 + 1]) : (arr_11 [i_2 - 1] [i_1]))));
                    }
                }
            }
        }
    }
    var_22 += ((var_5 ? var_4 : var_16));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_6] [i_7] |= (((((arr_19 [i_7]) ? -var_12 : ((((arr_19 [i_7]) & var_7))))) - (((((var_11 ? -207476056965764511 : (arr_22 [i_5] [i_6] [i_7])))) ? (((((arr_24 [i_7] [i_7] [i_5]) == (arr_24 [i_5] [i_7] [i_5]))))) : (arr_21 [i_6] [i_7] [i_7 - 1])))));
                    var_23 ^= ((((((((1 ? var_15 : (arr_23 [i_5] [i_6])))) ? var_5 : (((arr_21 [i_5] [i_7] [i_5]) ? 16514381779886159650 : (arr_23 [i_5] [i_5])))))) ? ((((min(14012, (arr_23 [i_5] [i_5])))) ? (((arr_24 [0] [i_7] [i_7]) ? (arr_22 [i_5] [i_5] [i_5]) : var_4)) : (!31098))) : ((((!(((arr_23 [i_5] [i_5]) && var_2))))))));
                }
            }
        }
    }
    #pragma endscop
}
