/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_2 ? (((arr_1 [i_0 + 1]) | 13835058055282163712)) : ((((((arr_0 [17] [i_0]) ? var_7 : -8212516441873878647)))))));
        var_14 = (max(((((arr_0 [i_0 - 1] [i_0 + 1]) + (arr_0 [i_0 - 1] [i_0 - 1])))), (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : var_12))));
        var_15 = (((((arr_1 [i_0 - 1]) ? ((min(var_7, -24907))) : -7705412805283629900))) ? 15460806393369755155 : ((1596629208535817579 | (arr_1 [i_0 - 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 ^= (((((arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) - (arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))) ? (((arr_11 [i_4]) ? 19022 : 16850114865173734036)) : (var_7 / var_1));
                                arr_16 [i_0 + 1] [i_1] [i_1] [i_1] [i_4] = 7705412805283629899;
                            }
                        }
                    }
                    var_17 = (min((arr_3 [i_1] [i_1] [i_2]), 13835058055282163712));
                    var_18 = (-var_10 + 75);
                    var_19 = ((((((arr_9 [i_0] [i_0] [i_2 - 3]) ? var_2 : var_11))) ? ((((arr_3 [i_1] [i_0 + 1] [i_2 - 3]) ? (arr_9 [17] [15] [i_2 - 3]) : var_8))) : (arr_9 [i_2] [12] [i_2 - 2])));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = 16850114865173734036;
        var_20 ^= ((~((1 ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : var_7))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                arr_27 [i_6] [i_6] = (((((((1784108423505570439 || (arr_23 [i_7]))) ? (!var_0) : (arr_23 [i_6])))) ? (((arr_22 [i_6]) ? -5826816619993471645 : (arr_22 [i_6]))) : (((((((var_12 ? var_10 : var_13))) || (arr_21 [i_7])))))));
                var_21 = (max(var_21, (((((((arr_25 [i_7]) ? (arr_25 [i_6]) : (arr_25 [i_6])))) ? -var_11 : ((-(arr_25 [i_6]))))))));
            }
        }
    }
    var_22 = var_1;
    var_23 = var_4;
    var_24 = (min(var_24, (((((-(13835058055282163723 - var_7))) - var_3)))));
    #pragma endscop
}
