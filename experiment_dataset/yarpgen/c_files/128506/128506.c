/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_2 [i_0]) >> (((arr_0 [i_1]) - 41))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = ((2118480435404709478 >> (42004072 - 42004023)));
                                arr_15 [i_1] [i_2] [i_4] = (!(arr_2 [i_0]));
                            }
                        }
                    }
                }
                var_20 = ((((((arr_1 [i_0]) ? (arr_3 [i_1] [i_0]) : (arr_14 [i_0] [i_1] [i_1])))) && (((arr_11 [i_0] [i_0]) && (((var_2 ? var_12 : var_1)))))));
                var_21 = (~(((((max(178, (arr_10 [i_0] [7] [i_0] [i_0])))) == (arr_14 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_22 = var_13;
    var_23 = (max(var_23, 2118480435404709489));
    #pragma endscop
}
