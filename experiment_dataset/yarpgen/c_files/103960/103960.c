/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(max(var_4, ((var_2 ? var_8 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [2] [i_2] [i_2] [1] [3] [i_0] = (arr_7 [i_2]);
                            arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] = (((~1) != (((arr_7 [i_0]) / ((48 ? 1 : 1))))));
                            var_11 = var_4;
                            var_12 = (max(var_3, (((8 <= (((arr_9 [i_0] [i_0] [i_0]) / 1)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_0] [i_4] [i_5] = ((120 ? 15 : var_5));
                            arr_21 [i_4] = 65535;
                            var_13 = (min(var_13, (((1 ? (max(964660950, ((1 ? -1821469205 : -9)))) : 1)))));
                            arr_22 [i_4] [i_5] = (!1);
                        }
                    }
                }
            }
        }
    }
    var_14 ^= max((max(((var_2 ? var_0 : var_5)), var_9)), ((var_6 ? (max(var_2, var_7)) : ((var_6 >> (var_9 + 2047849466))))));
    #pragma endscop
}
