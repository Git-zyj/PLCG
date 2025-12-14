/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(var_7, var_0));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 - 2])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = ((-178169376 ? 2147483647 : 56886));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        {
                            var_15 = ((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [2] [2] [10] [i_3 + 3] [i_4]) : 0)));
                            var_16 ^= (((arr_5 [i_0 + 1] [i_4 - 1]) ? ((36762 ? (arr_7 [i_0] [i_1] [i_2]) : var_7)) : var_0));
                        }
                    }
                }
            }
            var_17 += (-2086822122 ? -962684208 : 3060015365);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_18 [i_5] = ((var_8 ? (((arr_4 [i_0 - 2] [i_0] [i_0]) ? var_11 : var_7)) : var_4));
            var_18 ^= ((arr_0 [i_0 + 1]) ? (~var_2) : ((var_8 ? var_1 : var_2)));
            var_19 ^= var_11;
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                var_20 = var_9;
                var_21 *= ((var_9 ? var_8 : var_4));
            }
            var_22 = (min(var_22, (((-21 ? var_8 : var_3)))));
        }
    }
    #pragma endscop
}
