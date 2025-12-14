/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_14, ((min(3058145583, 62)))));
    var_16 = max(var_9, (min(var_11, 2107140298)));
    var_17 = (((((var_4 ? var_10 : var_3)) == -8642)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max((min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1]))), (max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))));
                arr_5 [0] [i_1] &= 28;

                for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (((((55240 | 32755) ? 1 : (((arr_13 [i_0] [5] [i_0] [i_0]) & -2107140288)))) | 1));
                                var_20 = ((min(1, ((var_14 ? 29181 : var_11)))));
                                var_21 = ((((max(1073741696, 0))) ? (((arr_12 [i_0]) + var_7)) : (((min(32758, -29190))))));
                                var_22 = (32759 && -32760);
                                arr_15 [i_0] = (min((min(var_1, (arr_2 [i_0 + 1] [i_1] [i_0 - 2]))), -1));
                            }
                        }
                    }
                    arr_16 [i_2 + 1] [i_0] [i_0] [i_2 + 1] = (((16725410645006600589 ? 14 : 793599164)) / ((-19515 ? -12 : 0)));
                    var_23 = -2147483639;
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_24 = (((arr_18 [i_1]) + (arr_19 [i_0] [6] [i_0 + 1])));
                    arr_20 [12] &= (min((((763754096 == (arr_12 [2])))), (max(-27, var_8))));
                    var_25 = ((!(((((var_3 ? 100663296 : var_5)) - (max(2044, -16)))))));
                    var_26 = 8188620262369851069;
                }
                var_27 = (((2147483647 | -1628616134) * (arr_11 [i_0] [i_0] [i_0] [i_0 - 2])));
            }
        }
    }
    #pragma endscop
}
