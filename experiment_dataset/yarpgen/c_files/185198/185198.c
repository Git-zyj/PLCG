/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 6387854713835957238))))) ? (((arr_2 [i_0]) ? var_14 : (arr_2 [i_0]))) : (((-4438 + 2147483647) >> (2988054292 - 2988054287)))))) != (max(1306913004, (max((arr_1 [i_0] [i_0]), 2347128050))))));
        arr_4 [4] &= ((((!(arr_0 [i_0] [i_0]))) ? (min((arr_2 [i_0]), (((arr_2 [8]) ? var_7 : (arr_1 [i_0] [1]))))) : (((((min((arr_1 [i_0] [10]), (arr_0 [i_0] [i_0]))) <= (max((arr_0 [i_0] [i_0]), var_9))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [0] [3] = (((arr_1 [i_1] [i_0]) == (arr_6 [i_1 + 1] [i_1 - 1])));
            arr_8 [i_0] [i_1] = ((!(arr_5 [i_0] [i_0] [i_0])));
        }
    }
    var_19 |= (((((-((2157701632 ? 1818267934 : var_5))))) ? (((-6 <= var_13) | (2347128050 | var_17))) : (max(var_7, var_6))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_15 [i_2] [3] = (((arr_14 [i_3] [i_2]) && (arr_13 [8] [8])));
                arr_16 [i_2] [i_3] = (((min(((20018 ? 1 : var_14)), (0 && 2988054316)))) ? (7864 + -94) : (((arr_14 [i_2] [i_3]) ? ((~(arr_9 [i_2] [i_3]))) : ((((arr_12 [i_3]) == var_10))))));
            }
        }
    }
    #pragma endscop
}
