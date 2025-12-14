/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((arr_1 [i_0] [1]) + 9223372036854775807)) << (((((arr_1 [i_0] [i_0]) + 2889161501062572517)) - 6)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (arr_3 [i_0] [i_0]);
                    var_16 = (min(var_16, (((!((((arr_7 [i_0] [i_1] [i_2] [i_2]) + var_3))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [11] [i_3] [i_4] = 240;
                                var_17 -= (((9122426824147232092 ? (arr_5 [i_0] [i_1] [11] [i_4]) : (arr_8 [i_2] [17]))));
                                var_18 = (arr_1 [16] [i_4]);
                                arr_14 [i_0] [1] [i_0] [i_3] [i_0] [i_3] = ((-((~(arr_0 [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                                var_20 = ((((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [17] [i_1] [17] [i_5] [i_6 + 2]) : var_12))) ? var_7 : var_5));
                            }
                        }
                    }
                }
            }
        }
        var_21 = ((!(arr_8 [i_0] [i_0])));
    }
    var_22 = var_3;
    var_23 = (min(var_23, ((max(var_7, ((((!9122426824147232092) ? var_8 : var_1))))))));
    #pragma endscop
}
