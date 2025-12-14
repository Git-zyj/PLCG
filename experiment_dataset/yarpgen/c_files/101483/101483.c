/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((((max((arr_3 [i_0]), var_0))) ? (var_10 || 0) : var_15))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (min((var_2 <= 32767), ((var_10 ? -2107098210592477104 : (arr_9 [i_0 - 1] [i_1] [i_2] [i_3])))));
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_0] = ((-(112 > 32767)));
                            var_19 = ((-(((arr_2 [i_0 + 1]) ? 8377363881445858414 : 21))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = max((((var_17 && (arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 2])))), ((255 ? 32767 : 235)));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 = ((~(min(4294967293, ((((arr_9 [i_0] [i_0] [i_4] [14]) > 1233723220)))))));
                            var_21 = var_9;
                            arr_18 [i_0 + 1] [i_0] [i_0] [i_4] = (((((((950333943 ? var_17 : 0))) ? (min(0, var_13)) : (min(-2107098210592477091, var_1)))) >> (121 - 67)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_7] [i_8] = ((((min((min(var_5, var_2)), var_13))) ? ((0 ? ((var_9 & (arr_24 [i_6]))) : (((min(var_2, var_4)))))) : (((var_15 ? (arr_16 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2]) : var_0)))));
                    arr_26 [i_6] [i_7] [i_8] [i_7] = (((((((min(950333943, -1107))) ? (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]) : (((2240213034 != (arr_10 [i_6] [i_6] [i_7] [i_8]))))))) && ((((0 ^ 18446744073709551615) ? ((max(-1107, 80))) : (arr_13 [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_8]))))));
                }
            }
        }
    }
    #pragma endscop
}
