/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((var_2 + ((min(var_10, 53704)))))) ? (-var_8 - var_8) : (min(4294967289, (((-4818 ? 31 : var_11)))))));
                var_13 = -1802117500338735316;
                arr_6 [i_0] [i_1] = 17112760320;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((min(-63, var_2))), (max(17112760320, 7))));
                        arr_13 [i_0] [6] [i_2] [i_3 - 1] = (((((17592185913344 * 1) && (((66 ? 7537989931725092538 : var_10))))) ? (var_12 == var_5) : (min(var_10, (max(var_6, var_9))))));
                        arr_14 [8] [1] [i_0] [13] [i_3 + 2] [i_3] = var_1;

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_14 &= var_7;
                            arr_18 [i_0] [13] [2] [i_1 + 2] [i_0] = 13968;
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_15 = (max(var_15, (((((min(1, 0))))))));
                            arr_22 [i_5] [i_5] [i_0] [i_3 - 4] [i_0] [7] [i_0] = (max(((0 ? ((53704 ? var_7 : 470214897)) : (((3072 ? 1 : -66))))), ((((((11834 ? 1 : var_1))) ? (16 <= var_4) : var_12)))));
                            arr_23 [i_0] [i_0] [7] [i_2] [8] [i_5] = var_8;
                            var_16 = (min(var_16, (((-var_5 ? (~var_12) : var_2)))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_27 [i_0] [i_1 + 2] [i_2] [i_0] [7] = 267412300;
                        arr_28 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_6] = ((553477053 ? 1 : var_5));
                        var_17 = (((((~1) ? 1155057919 : var_4)) / 21));
                    }
                    var_18 = -51;
                }
            }
        }
    }
    var_19 -= (((!var_10) ? (min(249, (min(-2781352206199598642, -7483043954973420939)))) : var_8));
    #pragma endscop
}
