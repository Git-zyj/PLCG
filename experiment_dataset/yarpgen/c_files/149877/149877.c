/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_9;
    var_18 = (~var_1);
    var_19 = ((((((~0) ? (~-923427671) : (!13698009322039585931)))) ? ((~(~var_4))) : ((var_1 ? (((var_5 ? var_15 : var_14))) : (min(1, var_4))))));
    var_20 = ((((13653389559004004274 ? ((0 ? var_0 : 4265006319438022698)) : (((var_13 ? 0 : 25))))) % (((var_14 ? ((186 ? var_6 : var_6)) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [12] [i_2] = (max(((((max(1456439192, (arr_0 [i_1])))) ? ((var_14 - (arr_3 [19] [i_1] [i_2 + 2]))) : ((var_13 ? var_6 : 0)))), ((((((1 ? (arr_3 [i_0] [i_1] [i_2]) : var_4))) ? (1 < -8968) : var_0)))));
                    arr_8 [i_0] [i_1] [i_2] [10] = (max(1220589740065845892, 6401602684938219722));
                    var_21 = -51472;

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = (min(((min(1, 102))), var_6));
                        var_22 = (arr_3 [5] [i_1] [2]);
                        arr_12 [i_0] [5] [i_1] [i_1] [i_0] [i_0] = (!(!1));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_23 = (((!1) >= (1 > 1923435833591607184)));
                            arr_15 [i_0] [20] [i_3] [i_4] [i_4] [19] [i_4] = var_4;
                            var_24 = 526324147691250763;
                        }
                        var_25 = ((((((arr_6 [i_2 + 1] [i_0] [i_2 + 1]) && var_15))) ^ 213));
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_5] = -43;

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_26 = var_16;
                            var_27 = ((((25 & (var_16 + var_2))) <= (arr_18 [i_6] [i_2] [i_2] [i_1] [i_0])));
                            var_28 *= (((((((arr_21 [i_0] [9] [i_2] [i_2] [i_5] [1]) * (arr_16 [i_0] [i_1] [16] [i_5]))))) ? (1 <= var_5) : (!3691176103451544960)));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_29 = (min(var_29, -1392794013));
                        arr_26 [i_0] [9] [i_1] [i_1] [i_2 + 1] [i_0] = (0 == 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
