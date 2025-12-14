/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_8 - 233);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_0] = (((arr_4 [i_1 + 1] [i_1 - 2]) ? 8864233463423838616 : ((-10 ? (arr_4 [i_1 + 1] [i_1 - 1]) : var_7))));
                arr_6 [15] |= 1;
                arr_7 [i_0] [i_0] [12] = -983823728;
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (max(253, -19));
        var_11 ^= max(((32 / (arr_10 [i_2 + 1]))), (((arr_10 [i_2 + 1]) ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1]))));
        arr_12 [i_2 + 1] &= -28;
        var_12 = ((-((~(arr_8 [i_2 - 1])))));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_13 &= (min(683936352, (arr_14 [i_3] [i_3 + 1])));
        arr_15 [i_3] = (arr_9 [i_3 + 2]);
        arr_16 [i_3] = (arr_14 [0] [0]);

        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_3] [i_3] = (((((-63 + 2147483647) << (((-47 + 71) - 24)))) != (((max((arr_10 [i_3]), 0)) - (45574 && var_4)))));
            arr_21 [i_3] [19] = 159;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_24 [i_3] = (arr_13 [i_3] [i_5]);
            arr_25 [i_3] = (arr_23 [i_3 + 1]);
            arr_26 [i_3 + 2] [23] [i_3] = ((-24177 ? var_9 : 1175058090641713381));
        }
    }
    #pragma endscop
}
