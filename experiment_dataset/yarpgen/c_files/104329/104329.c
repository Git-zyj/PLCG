/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((127 & 1) && ((((arr_1 [i_0]) & (arr_1 [i_1]))))));
                arr_4 [i_0] [i_1] = (((arr_1 [i_1]) != (arr_1 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = var_14;
                                arr_13 [i_2 + 1] [i_2 + 1] = (max((min(var_6, ((1 - (arr_10 [5] [i_1] [i_0] [i_1] [5] [5] [7]))))), (1 / var_2)));
                                arr_14 [12] [12] [0] [12] [i_4] [i_2] [i_4] = ((~(((255 && 1) * 599619754))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, (((((((0 * var_6) / (var_16 * var_6)))) ? ((((var_14 ? var_12 : 12275169177961641612)) * (((4294967295 ? var_8 : var_2))))) : (((-1722142238 / var_0) * var_11)))))));
    var_23 = (min(var_23, ((((((var_8 + var_0) <= (((max(var_14, var_2))))))) <= (((!(((var_16 ? 18446744073709551609 : var_12))))))))));
    var_24 = (min(var_24, (((~(((min(var_16, var_7)))))))));
    #pragma endscop
}
