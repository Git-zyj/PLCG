/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_5 ? (-32767 - 1) : ((5884 ? (arr_0 [i_0]) : ((12 ? (arr_1 [i_0]) : var_18))))));
        arr_3 [i_0] [1] = (max((((32767 ? 32765 : 32765))), 32765));
        arr_4 [i_0] = (min((max((arr_1 [i_0]), var_1)), ((((arr_0 [i_0]) || 13794)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1] = (-9223372036854775778 ^ ((((127 ? (arr_8 [11] [i_1] [11]) : (arr_6 [i_2]))) / (max(var_4, -9223372036854775770)))));
            var_20 = ((!(((2636287877 ? -16 : -4708363592659549500)))));
            var_21 = (min(var_21, 2061));
            var_22 *= ((min((arr_6 [i_2 - 2]), (arr_6 [i_2 + 1]))));
            var_23 = 4265731101;
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_1] = (arr_11 [i_1] [i_3]);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_24 += (arr_15 [i_3] [i_6]);
                            var_25 = (((!var_14) ? (-32767 - 1) : var_3));
                        }
                    }
                }
                var_26 = ((-(arr_9 [i_3 + 3] [i_3 + 3])));
            }
            arr_23 [i_1] [i_1 + 3] [i_1 + 3] = ((((((arr_20 [i_1] [i_3 + 3] [i_3] [i_3]) ? var_2 : var_1))) ? (((var_2 - (arr_6 [17])))) : (arr_16 [i_1] [i_3] [i_3])));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_30 [i_9] [i_9] [i_8] [i_1] [i_9] [i_3] [i_7] = (max(4, 4294967267));
                            var_27 = 4294967267;
                        }
                        var_28 = (min(((-0 ? var_6 : 15475215827399212482)), var_11));
                        arr_31 [i_8] [i_1] [i_3] [i_1] [i_1] = 4321466268966469437;
                    }
                }
            }
        }
        var_29 += ((var_0 ? (arr_22 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]) : (max((max(18446744073709551615, var_19)), var_8))));
        var_30 = ((max((~17), (((var_1 ? 127 : var_12))))));
    }
    var_31 = var_17;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            {
                arr_38 [i_11] [i_11] = (((arr_11 [i_10] [i_10]) ? ((0 ? 4096 : ((-5066142649067424528 ? (arr_26 [i_10] [i_10] [i_10] [i_11 - 3] [i_11] [i_11]) : 57)))) : ((((arr_8 [i_11 - 1] [i_11] [i_11 - 3]) ? (arr_34 [i_11]) : (arr_34 [i_11]))))));
                var_32 = ((0 ? (arr_29 [4] [i_11]) : ((max((-4321466268966469437 > 4321466268966469440), (((arr_35 [i_11]) % (arr_22 [i_11] [20] [i_11] [i_10] [1]))))))));
            }
        }
    }
    var_33 = -var_1;
    #pragma endscop
}
