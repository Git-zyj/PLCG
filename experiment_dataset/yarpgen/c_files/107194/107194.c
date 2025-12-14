/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((((min(var_6, var_13))) && var_11)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 - 1] [6] = (arr_0 [10]);
        arr_3 [i_0 + 2] [i_0] = (((arr_0 [i_0]) ? ((((!(arr_0 [i_0]))))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [1] [8] = (~161);
        arr_8 [4] |= (!0);
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [16] = (arr_11 [i_2] [14] [i_3]);
                arr_14 [i_2] [i_2] = (((((!(arr_9 [i_2])))) ^ (((arr_9 [i_2]) * (arr_9 [i_2])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] [i_4] = (((arr_20 [i_4 + 1] [i_5 + 2] [i_4]) ? ((((!(arr_20 [i_4 - 1] [i_5 + 2] [i_4]))))) : (((arr_20 [i_4 + 1] [i_5 + 3] [i_4]) ? var_0 : (arr_20 [i_4 - 1] [i_5 - 1] [i_4])))));
                    arr_23 [i_4] [i_5] [8] [i_4] = (((((arr_15 [i_4]) > (arr_15 [i_6]))) && ((min(var_0, (72 ^ -1500360525217487478))))));
                }
            }
        }
    }
    var_17 = ((var_13 < (((var_1 && (0 / -1143611178))))));
    #pragma endscop
}
