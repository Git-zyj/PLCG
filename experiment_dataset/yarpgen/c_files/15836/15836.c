/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (~1);
                arr_6 [i_1 + 1] [10] [i_0] = ((((var_4 ? (var_6 * var_2) : ((var_15 ? (arr_3 [i_1]) : var_7)))) << (!var_8)));
                arr_7 [i_1] [i_0] = (((((((min((arr_1 [i_0]), var_13))) ? (arr_1 [i_1 + 1]) : (arr_0 [i_1 - 2])))) ? 1 : var_9));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 += ((-(((((arr_14 [i_0] [i_1]) < -32751))))));
                            }
                        }
                    }
                }
                var_19 = var_6;
            }
        }
    }
    var_20 += ((var_7 >= ((-(1 > 1)))));
    var_21 &= ((~((var_5 ^ (1 << var_6)))));
    #pragma endscop
}
