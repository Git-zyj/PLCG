/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+(min((~1685622789270604901), var_6))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_13 = var_11;
                        arr_10 [i_3] |= ((var_5 ? ((((!((!(arr_9 [i_3] [i_1] [i_1] [i_0] [i_0]))))))) : 1685622789270604923));
                    }
                    var_14 = (min((((-var_2 ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (62020 <= -1685622789270604901)))), -1685622789270604923));
                    var_15 -= (min(((min((arr_1 [i_1]), var_6))), (((((min((arr_9 [i_0] [i_1] [i_2] [i_1] [i_0]), 125829120))) && var_6)))));
                }
            }
        }
        var_16 ^= ((!((((112 << (var_0 - 26638)))))));
    }
    #pragma endscop
}
