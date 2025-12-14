/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((min(((max(0, var_16))), (max(var_19, var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((-((max(-1, -32759)))));
                arr_7 [i_0] = (!(arr_4 [i_0]));
                var_21 = (min(var_21, (((2147483630 ? 1833767427 : 2147483617)))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, 8231222169425802392));
                                var_23 = ((-(((arr_5 [i_3] [i_3]) ? (arr_8 [i_0] [i_1] [i_2] [i_1]) : 1))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_1] [6] = (arr_8 [0] [i_1] [0] [0]);

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = (max(var_24, (arr_13 [i_5] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0])));
                        var_25 = var_10;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_26 = ((~((var_19 ? var_2 : (arr_16 [i_6] [8] [i_2] [2])))));
                            arr_20 [i_0] [i_1] = 9199;
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_27 = -6434484529614501882;
                            var_28 = ((var_15 - ((-(arr_0 [2])))));
                            arr_23 [i_0] [i_0] = var_19;
                        }
                    }
                    var_29 = (var_13 + 9076301161573845976);
                }
            }
        }
    }
    var_30 = var_18;
    var_31 = (max(var_31, (var_7 > var_15)));
    #pragma endscop
}
