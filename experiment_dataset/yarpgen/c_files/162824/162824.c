/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_12;
    var_14 ^= ((~(((4 - 1) ? var_5 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((~(((var_7 != (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                            var_16 += (max(((-269588498 ? (arr_4 [i_0]) : (((-(arr_1 [i_0])))))), (((-11659 ? (max(var_0, var_2)) : ((((!(arr_0 [i_2] [i_1]))))))))));
                        }
                    }
                }
                var_17 = ((~(1 ^ var_10)));
                var_18 += (((~-93) >= ((min(-24726, -3826970884464411311)))));
            }
        }
    }
    #pragma endscop
}
