/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((arr_6 [i_1] [i_1 + 1] [16]) >> (((arr_1 [i_0]) - 152)))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_11 = var_3;
                        var_12 = (-1791397685 + 2147483647);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_13 = (((var_7 <= var_7) ? var_7 : (arr_12 [i_4])));
                            arr_15 [i_4] = (arr_11 [i_0] [i_1 + 2] [i_1 + 2] [i_4]);
                            var_14 = (min(var_14, (((~(~var_6))))));
                            arr_16 [i_0] = (((-2147483647 - 1) + 12184947762033300600));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] = (arr_4 [i_5 - 1]);
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_15 = (arr_14 [i_6] [i_4] [i_0 + 2] [i_0 + 2] [i_0 + 2]);
                            arr_20 [i_0] [i_0] [i_0] [9] [i_2] [i_4] [i_6] = (~-var_8);
                        }
                        arr_21 [i_1 - 1] [i_2] [i_1 - 1] [i_0 + 2] = (arr_10 [i_0] [i_0] [i_0] [i_1 - 1] [i_0]);
                        var_16 = ((-var_9 ^ ((~(arr_13 [i_2])))));
                    }
                    arr_22 [i_0] &= -754280300;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_17 = (arr_4 [i_0 + 2]);
                                arr_28 [i_0] [0] [i_2] [0] [i_2] = (((((max(var_8, var_4)) ? (arr_25 [i_0] [i_7 + 1] [14] [i_1]) : var_8))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 *= var_4;
    #pragma endscop
}
