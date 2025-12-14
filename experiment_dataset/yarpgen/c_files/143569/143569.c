/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = var_13;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = ((((95 ? 252201579132747776 : (((30097 ? -90 : var_5))))) & 1168699712));
                        arr_11 [i_0] [i_0] [3] [i_3] = ((((min((30097 && 1), (min(var_0, var_10))))) ? var_12 : (24984 * var_0)));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_0] [i_2] = max((((max(11675, var_10)))), ((var_13 ? 1 : 112)));
                        arr_16 [i_0] [i_1] = (max(1473968497, (((var_7 << (var_0 - 4288205679))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = 5030567874137871561;
                                var_19 = (min((max(12, (var_5 || var_3))), 1));
                                var_20 = 18155;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
