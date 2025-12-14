/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_4 & ((var_9 ? -43 : (arr_1 [i_0])))));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_10 = (var_7 && var_2);
        arr_6 [i_1] = (min(5835942455258021916, (((6529656993973128469 ? -477737192 : (arr_4 [i_1]))))));
        var_11 *= (min(6529656993973128469, 1));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_12 = (var_6 ? ((((arr_7 [i_1] [i_2]) ? var_7 : 1))) : var_8);
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_2] [i_2] = var_2;
                            var_13 |= (!43);
                            arr_19 [i_5] [i_2] [i_2] [i_1] = -3858475678212246144;
                        }
                    }
                }
            }
            var_14 = (arr_1 [i_1]);
            var_15 *= -38;
            arr_20 [i_2] [i_2] [i_1] = ((120 / -6437265952717163951) * (var_8 >= -43));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_23 [i_6] [i_6] [i_6] = ((((((~(arr_21 [i_1] [i_6] [i_6]))) ^ 1)) == (((var_6 >= (arr_11 [i_1] [i_1] [i_6]))))));
            var_16 -= ((((((max(var_2, 9223372036854775804))) ? (max(var_8, var_7)) : ((3594483875734733734 << (3858475678212246159 - 3858475678212246158))))) ^ var_0));
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_17 = (min(60, 263067340287805479));
        arr_26 [i_7] [i_7] = (max(((((arr_24 [i_7]) ? (arr_24 [i_7]) : (arr_24 [i_7])))), var_0));
    }
    var_18 = (max(var_8, ((((max(var_7, var_4))) ? (min(9183060409341963038, 1138234185805882426)) : (min(var_6, -4901205407206546435))))));
    var_19 = var_5;
    #pragma endscop
}
