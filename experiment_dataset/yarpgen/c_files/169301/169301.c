/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((2147483647 ? var_1 : 4245169107));
    var_14 -= 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (72048797944905728 < 32767);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            var_16 = (max(var_16, 1));
                            var_17 = (max(-156, (((9223372036854775807 | 1) ^ (~1)))));
                        }

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_18 = 0;
                            var_19 = ((~(var_12 < 58672)));
                        }
                        var_20 = (1 % -6880);
                        var_21 = 41598;
                        var_22 = (min(var_22, (((((min((max(var_5, var_1)), (var_6 || var_12)))) ? ((((((var_5 ? 0 : var_2))) || 1253405191))) : ((var_11 ? (!2445) : var_2)))))));
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_23 = ((((((min(var_12, var_6))) ? var_7 : var_10)) % var_12));
                        arr_18 [i_2] = (((~((var_6 ? var_3 : 60)))));
                        arr_19 [i_2] [i_2] [i_1] [i_2] = var_3;
                    }
                    var_24 = (max((((2251799813554176 & 18446744073709551612) ? (((-64 ? 1 : 1))) : (((-9223372036854775807 - 1) | 18446744073709551615)))), (min(1, 0))));
                    arr_20 [i_0] [i_0] [i_1] &= (((~var_5) - var_6));

                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        var_25 = ((!(((-(min(var_3, var_3)))))));
                        arr_23 [i_2] = (max(((var_0 & ((0 ? 67436596 : 127)))), (max(1048576, ((var_5 ? 2425239250 : 18))))));
                        var_26 = (max(var_26, var_12));
                    }
                }
            }
        }
    }
    var_27 = ((-((-((var_6 ? 1 : var_1))))));
    #pragma endscop
}
