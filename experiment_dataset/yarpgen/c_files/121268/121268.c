/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_10 + 241);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = var_5;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_22 -= (((((var_7 ? (arr_3 [i_3] [i_1]) : ((var_17 ? var_0 : (arr_7 [12] [i_1] [i_2 - 2])))))) ? (((var_15 ? var_7 : ((9223372036854775807 ? var_1 : (arr_5 [i_0] [i_2 + 1] [i_0])))))) : (min(8388607, (arr_6 [i_2 - 1])))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [12] = (max(var_4, ((((var_3 << 7) ? var_0 : var_10)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, var_7));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_4] [i_4] [15] = 65535;
                            var_24 = ((((((arr_16 [i_4] [i_5]) ? var_15 : (min(0, var_17))))) ? ((var_19 ? (min(var_4, 18446744073709551615)) : (~18446744073709551612))) : ((((arr_18 [i_5] [i_5] [i_6]) ? 0 : (((65526 << (251 - 250)))))))));
                        }
                    }
                }
                arr_24 [i_4 - 1] = (max((min(((var_11 ? var_11 : (arr_19 [i_4 - 1] [5] [i_4 - 1]))), ((-1 ? var_2 : var_14)))), (((arr_22 [i_5] [i_5] [i_4 - 1]) ? (var_16 - var_12) : (arr_13 [i_5] [i_5 - 1])))));
                arr_25 [7] [i_5 - 2] = (max((min((arr_14 [i_4 - 2]), (4294967285 + var_10))), ((((min(var_15, var_13)) > (arr_13 [i_5 - 1] [i_4 + 1]))))));
            }
        }
    }
    #pragma endscop
}
