/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = var_0;
                var_15 = ((!(arr_2 [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = arr_7 [i_0] [i_3] [i_2] [i_0];
                                var_17 = var_5;
                                var_18 = min((((((~(arr_2 [i_0] [i_0 + 1])))) ? ((((arr_1 [i_1]) + var_4))) : ((298559162842377573 ? 18148184910867174042 : -2111098884)))), ((((arr_12 [9] [i_3] [i_0] [i_1] [i_1] [i_0]) || (arr_5 [i_0] [i_0])))));
                                var_19 = (((((arr_12 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0 + 1]) != var_11)) && (((18446744073709551604 ? 9331003743231320786 : 18446744073709551604)))));
                                var_20 = var_6;
                            }
                        }
                    }
                }
                var_21 = (max(((8509979073450265629 * (min(var_5, var_1)))), (var_6 == var_6)));
                var_22 = (((((var_10 >> (((arr_5 [i_0 - 2] [i_0 - 3]) - 95))))) ? (arr_8 [i_0 + 2] [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1]) : ((-(((arr_10 [i_0] [i_1] [i_1] [i_0]) << (((arr_1 [i_0]) + 93))))))));
            }
        }
    }
    var_23 = (max(var_23, var_3));
    #pragma endscop
}
