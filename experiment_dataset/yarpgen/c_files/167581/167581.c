/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 *= (((((var_1 ? (max(var_11, var_10)) : (((var_13 ? var_6 : 1)))))) ? ((min(((var_7 ? var_12 : var_13)), (var_7 + var_0)))) : (((((0 ? var_4 : 0))) ? (max(var_3, var_2)) : 1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_1] [i_0] = 1;

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_17 = (((((arr_8 [i_3 + 1] [i_0 + 2] [i_3 + 1] [i_0 + 2]) ? (arr_1 [i_3 - 1]) : 48))) ? ((((48 ? var_10 : (arr_11 [i_0 + 4] [i_1] [i_3 - 1] [i_0 + 3]))))) : (~var_0));
                        var_18 = ((((((arr_2 [i_0 + 2]) ? var_1 : ((288230376151711743 ? 30499 : 65522))))) ? (1470994901 <= 2204141867) : (var_1 - var_5)));
                        arr_12 [i_3] = ((!(((((1 ? (arr_6 [i_0] [i_1] [i_2]) : var_10)) - ((min(47, 25))))))));
                        var_19 = 1;
                        var_20 = ((((((min(var_11, -1870147878))) ? -var_8 : ((min((arr_3 [i_1]), var_7))))) & var_9));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_21 = ((((min((arr_0 [i_0 + 4]), -16))) < ((var_10 ? -1 : 63))));
                        var_22 = (((1 < var_8) <= (var_10 + var_9)));
                        var_23 = (((((63 ? 1 : -1870147878))) - (((var_14 % 192) & (((var_14 ? var_0 : var_1)))))));
                        arr_16 [i_0 + 1] = ((((((((65522 ? 2090825433 : 2147483647))) ? (-31897 * 63) : var_11))) ? ((((var_1 ? (arr_11 [i_0] [i_1] [i_2] [i_4]) : var_5)))) : ((var_4 & ((var_4 ? 127 : (arr_4 [i_0 + 2] [i_0 + 2])))))));
                        var_24 = 20357;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            var_25 = (min(var_25, (((4294967282 ? ((var_5 ? 41519 : var_0)) : ((0 ? 1 : (arr_10 [i_0] [i_1] [i_2] [i_5 + 1] [i_6 - 1]))))))));
                            var_26 = (((var_4 | 0) ? var_11 : var_8));
                        }
                        var_27 &= (((var_2 && -116) < (65535 / 9223372036854775788)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
