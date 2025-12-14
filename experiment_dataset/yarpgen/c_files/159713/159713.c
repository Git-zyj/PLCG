/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 ^= -var_1;
                arr_5 [i_0] [i_0] &= ((41687 ? 242 : 11254753552431322394));
                var_13 = ((((((23848 | var_10) + (min(7350, 7191990521278229222))))) ? (max((arr_3 [i_0 - 2] [i_0 + 1]), 18196791350828626507)) : ((18196791350828626502 & (10434241936543611940 & -1)))));
            }
        }
    }
    var_14 *= (max(((16487 ? (var_8 | var_2) : ((var_6 ? var_0 : 11254753552431322394)))), var_4));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_15 = (249952722880925118 - 18196791350828626498);
                    arr_14 [i_2] [i_2] = (~2);
                }
            }
        }
        var_16 -= (((arr_8 [i_2] [i_2]) ? var_0 : (arr_8 [i_2] [i_2])));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_17 += ((((max(23849, 64502))) > ((min((arr_16 [i_5]), var_1)))));

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_18 = ((var_1 ? 18196791350828626480 : (((min((!138), var_7))))));
            arr_23 [i_6] = (((min((var_7 < 2473747936), ((var_10 ? var_9 : var_8)))) >> (min(var_2, var_8))));
        }
    }
    var_19 = (min(var_19, var_8));
    #pragma endscop
}
