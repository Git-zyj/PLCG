/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1 ? (var_17 ^ var_15) : var_13));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 ^= ((min(((0 ? 1 : var_11)), ((((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = (((((1 ? 1 : 1))) ? (((1 % 1) ? 1 : ((1295279237421757434 ? var_9 : (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3] [i_1 + 1] [i_0]))))) : -1));
                        var_22 -= (((~(arr_7 [i_0 + 2] [i_0 + 2] [i_2]))));
                    }
                }
            }
            var_23 = ((((arr_4 [i_0 - 1] [i_1 + 1] [i_1 + 1]) ? 1 : (arr_4 [i_0 + 2] [i_1 - 1] [i_1 - 1]))));
        }
        for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_24 &= (((((!((min((arr_8 [i_0] [i_0]), 1)))))) % ((1 ? 1 : 1244613138))));
            var_25 ^= (((((-(arr_3 [i_4])))) ? (((((var_15 ? (arr_0 [i_0 + 2]) : 1))) ? ((1 ? 1 : 1)) : (arr_4 [i_4 + 1] [i_4 - 1] [i_4 - 1]))) : -1));
        }
    }
    var_26 += (((max((((4949350457981077303 ? 1 : 1))), ((1 ? 1 : 4949350457981077303)))) + 17249));
    #pragma endscop
}
