/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_11, (((-1129905656 == var_9) ? (((-7385696150754239522 ? -7385696150754239516 : -2458293438308787980))) : 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (arr_4 [i_1 + 4] [i_1 + 3]);
                    var_22 = var_17;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3 + 2] [i_4 - 3] [i_1] = (arr_4 [i_3] [i_3]);
                                var_23 = (max(var_23, ((((((7 ? var_11 : var_15))) ? (139 || 18446744073709551593) : var_17)))));
                            }
                        }
                    }
                    var_24 = ((~((((arr_7 [i_0] [i_1] [i_0]) != var_13)))));
                }
            }
        }
    }
    var_25 = (max((max(var_14, ((var_5 ? var_11 : var_17)))), (((((533858154 ? var_3 : 7385696150754239526))) ? var_6 : (min(var_11, var_3))))));
    var_26 = 0;
    #pragma endscop
}
