/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((301235914 ? (max(-301235904, 1)) : 0))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((var_3 ^ (arr_1 [i_0] [12]))) >= (((!(arr_1 [i_0] [i_0])))))) ? -790532306103003611 : ((((1 > 1) ? -790532306103003611 : (((arr_0 [i_0]) | (arr_0 [i_0])))))))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (((-364239240 * 1) ? ((3 ? (arr_2 [i_0]) : 1)) : 1));
            var_17 ^= (~1);
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_18 |= (arr_7 [i_0] [5] [5]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [8] [i_2] [i_2] [i_0] = (((0 << (((((arr_4 [i_0]) ? (arr_2 [i_0]) : var_3)) - 1164858329612180733)))));
                        var_19 += ((((((-301235907 ? (arr_0 [i_2]) : 1))) ? (arr_2 [i_0]) : (((min((arr_11 [16] [i_2] [16] [i_2] [i_4] [i_4]), 1)))))) >= (((((arr_6 [i_2 + 1] [i_2 + 1]) >= (arr_6 [i_2 + 1] [i_2 + 1]))))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_0] [1] |= (arr_10 [17] [i_2] [i_2 + 1] [i_2]);
                            arr_17 [i_0] [17] [i_0] [i_0] [10] = 1;
                        }
                    }
                }
            }
            var_20 = (((((~(arr_13 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [1])))) ? ((((max(var_8, (arr_4 [i_0])))) * (18 / 1))) : 43));
        }
        arr_18 [i_0] [i_0] = (32758 / 1);
    }
    var_21 ^= var_0;
    #pragma endscop
}
