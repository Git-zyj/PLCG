/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) & (arr_1 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_1] &= ((-(((arr_0 [i_0]) ? var_2 : var_7))));
            var_16 -= ((12571960061426693158 ? 6805162575024839702 : (((((arr_1 [i_0]) && var_13))))));
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_17 |= (((((1 ? (arr_3 [i_0]) : 6805162575024839690))) || (arr_2 [i_0 - 2])));
            arr_7 [7] = (((arr_3 [i_0 + 1]) ? 1 : (arr_3 [i_0 + 1])));
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_18 = ((!(((6805162575024839702 ? -24711 : -1)))));
                arr_14 [i_4] [i_3] [i_3 + 1] = ((((arr_12 [i_3 + 1] [i_4]) % (arr_2 [i_3]))));
            }
        }
    }
    #pragma endscop
}
