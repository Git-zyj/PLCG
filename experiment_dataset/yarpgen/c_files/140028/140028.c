/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = ((-(max((arr_2 [i_0]), (max(var_10, (arr_4 [i_3] [i_2] [i_1])))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_19 ^= ((((((arr_6 [i_4] [i_3] [i_1] [i_0]) % var_6))) ? 12990 : -2915304694011149891));
                            var_20 = var_6;
                            arr_13 [i_0] [i_2] [i_0] [i_4] = (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (-32767 - 1) : (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_21 += ((var_14 == (arr_5 [i_1])));
                            var_22 = (max(var_22, (!var_10)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (arr_12 [2] [i_1] [i_1] [i_1] [i_1])));
                            arr_19 [i_6] [i_0] [i_2] [i_0] [i_0] = ((var_15 ? var_10 : var_8));
                            var_24 = 0;
                        }
                        var_25 = (min((((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), 0));
                    }
                }
            }
        }
        arr_20 [i_0] = (min((arr_5 [i_0]), (max(var_8, (var_3 + var_5)))));
        var_26 = ((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : var_9)));
        var_27 = var_16;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_24 [i_7] = arr_21 [i_7] [i_7];

        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_28 = (max(var_28, var_10));
            var_29 = (((((-32767 - 1) != 0)) && (arr_25 [i_7] [i_8])));
            arr_27 [i_7] [i_8] = ((((((arr_22 [i_7]) / (arr_26 [i_7] [i_8] [i_8])))) ? var_2 : var_9));
        }
        var_30 ^= ((arr_25 [i_7] [i_7]) ? var_11 : ((min((arr_25 [i_7] [i_7]), (arr_22 [i_7])))));
        arr_28 [i_7] &= (arr_23 [i_7]);
        var_31 = (-32767 - 1);
    }
    var_32 += ((((((var_12 + 9223372036854775807) >> ((((var_3 ? var_3 : var_16)) + 8120491175778122770))))) ? var_2 : 2250859926495519480));
    var_33 = -995965535;
    var_34 = (max(var_12, (((((var_8 ? var_5 : 1307653657))) ? 4160233616788826879 : var_7))));
    var_35 = (max(var_10, ((min(var_15, var_0)))));
    #pragma endscop
}
