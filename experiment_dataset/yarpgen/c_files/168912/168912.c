/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        var_11 = -1949118811;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (!(((2003820062 ? -1756515290 : 730909545))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = ((1 ? (((1 << (1949118811 - 1949118811)))) : 1949118815));
            arr_10 [i_1] = (arr_7 [i_1] [i_2] [i_2]);
        }
    }
    var_13 = (max(var_13, -5713955142856608598));
    #pragma endscop
}
