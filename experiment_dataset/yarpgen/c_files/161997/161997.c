/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_2 > var_8) ? 31 : (((-503722621281624372 + 9223372036854775807) >> (var_16 - 54750)))))) ? (((var_3 >= var_10) ? 9223372036854775807 : var_9)) : 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = (((((1 ? ((3 ? (arr_1 [11] [i_1]) : (arr_13 [i_0]))) : (((((arr_5 [i_0] [i_2] [i_2]) >= (arr_6 [i_4 - 2] [i_0] [i_0])))))))) ? (max(var_18, ((~(arr_2 [i_0] [i_0]))))) : (min(503722621281624371, (arr_2 [i_1] [1])))));
                                var_21 = (((arr_1 [i_4 - 2] [i_4 + 1]) ? 567631166 : (((246 >= (arr_1 [i_4 + 1] [i_4 - 3]))))));
                                arr_16 [i_0] [i_1] [3] [i_3] [i_4] = ((~(max(var_8, var_7))));
                                var_22 -= ((+(((arr_7 [i_2] [i_2] [8]) ? ((1 ? -1950545495 : 503722621281624371)) : (3727336138 + var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= (max(1, 567631158));
    var_24 = (max(var_24, (((var_14 > var_2) && ((((var_14 ? var_4 : 2692))))))));
    var_25 = (max(var_25, (((var_1 && ((min(var_11, ((503722621281624371 ? 0 : var_10))))))))));
    #pragma endscop
}
