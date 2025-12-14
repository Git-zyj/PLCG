/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = ((~(((4294967289 / var_8) ? 30 : 0))));
                        var_12 |= (((arr_5 [i_0 + 3] [i_1] [i_0 + 3]) ? 4294967289 : 0));
                        arr_9 [i_3] [1] [i_0] [i_1] [i_0] = (((1615266409576139276 | (arr_8 [i_0 - 1] [i_0 + 3] [i_3] [i_3]))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = var_9;
                            arr_15 [i_0 + 3] [i_0 + 2] [15] [i_0 + 1] = (((((6 | var_6) & (~1125899906842623))) <= (((0 ? var_4 : (((var_2 ? 55503 : -51))))))));
                            var_13 = (min((((+(((arr_10 [i_3] [i_2] [i_1]) * -46))))), (((arr_3 [i_0 + 2] [i_4 - 1]) / (arr_3 [i_0 + 2] [i_4 - 1])))));
                            var_14 |= ((~((-1615266409576139276 | (arr_8 [i_3] [i_3] [i_2] [i_0])))));
                            var_15 = (((1022102774 | 18446744073709551615) - (1615266409576139288 || -21248)));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        var_16 = -1125899906842624;

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_17 = (min(var_17, (0 / var_3)));
                            var_18 = (1192082093 && 14386);
                        }
                        var_19 |= -1615266409576139282;
                    }
                    var_20 = (((10032 || 6) ? (!var_2) : (((arr_0 [i_0 - 1]) ^ -var_5))));
                    var_21 |= ((+((((((-1615266409576139269 + 9223372036854775807) >> 9))) ? (((var_7 ? var_9 : var_6))) : ((var_3 ? var_6 : var_1))))));
                    var_22 = 735114617;
                }
            }
        }
    }
    #pragma endscop
}
