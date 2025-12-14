/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 % (((var_2 <= 31) ^ (min(var_10, 2207100971953024140))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_0]);
                var_20 = ((max(-28154, (var_11 ^ 26))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 = 4104296206;
                    var_22 = ((((((arr_1 [7]) % (arr_1 [i_0])))) > -32766));
                }
                arr_7 [i_1 - 1] [i_0] = ((((((190671070 << (var_2 - 33552))))) * (-var_14 / var_16)));
            }
        }
    }
    var_23 |= ((((min(31, 1411)))));
    var_24 = (((((min(35379, var_2)))) + (max(((max(-127, -48))), var_4))));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] = (arr_8 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_17 [i_3] = (((-(arr_12 [i_3] [i_4] [i_3]))));
                    var_25 ^= (~48);
                    arr_18 [i_3] [i_3] = (~var_10);
                }
            }
        }
    }
    #pragma endscop
}
