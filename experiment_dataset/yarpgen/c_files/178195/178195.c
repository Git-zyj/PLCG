/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(var_11, (((-61 ? 255 : 242))))));
    var_14 = var_12;
    var_15 |= (var_11 | var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [7] = (((arr_6 [i_0] [i_1] [i_2] [i_2]) ? ((var_3 ? (arr_3 [i_0]) : (arr_6 [i_0] [i_1] [8] [10]))) : ((13783421375053454167 ? (arr_3 [i_0]) : 1740537931))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 *= (((((var_0 ? var_5 : ((min(var_7, var_1)))))) ? 1740537944 : (((arr_10 [i_3] [0] [i_2] [i_3] [i_3 + 1] [8]) ? (7718010311779933762 - var_2) : (var_2 % var_10)))));
                                var_17 |= (var_4 || ((!(arr_13 [i_0] [i_1]))));
                                var_18 = ((!(arr_1 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
