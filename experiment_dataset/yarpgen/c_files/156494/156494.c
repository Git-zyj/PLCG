/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((var_3 ? ((max(var_1, var_0))) : ((var_9 ? var_14 : var_7)))));
    var_18 = ((var_3 + (((0 >= 5299850020451576532) ? var_0 : ((var_0 ? 82 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_2 - 2] = ((-(((arr_2 [i_0] [i_0]) % -2147483642))));
                            var_19 = (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? ((5 ? ((((arr_5 [i_0]) != (arr_5 [i_0])))) : ((-54 | (arr_5 [i_3]))))) : 1));
                        }
                    }
                }
                var_20 = ((((!(((8523 ? 2189493066470717272 : -58))))) ? (arr_0 [i_0]) : ((((3 ? 13635716020024215716 : 1510799199)) / var_3))));
                arr_12 [i_1] = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 = (((((((var_8 + (arr_1 [i_6] [i_5])))))) - (arr_13 [i_6 - 1] [i_5])));
                            arr_23 [i_4] [i_4] [i_5] [i_6] [i_7] = ((5 ? 12718153340816526135 : 0));
                        }
                    }
                }
                var_22 = (arr_20 [i_5] [i_4] [i_4] [i_5]);
                var_23 = var_3;
                var_24 = (((arr_19 [i_5] [i_5]) / var_5));
                var_25 = var_10;
            }
        }
    }
    var_26 = ((-68 ? 1 : 212));
    #pragma endscop
}
