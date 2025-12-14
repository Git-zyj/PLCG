/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_13 && (((((max(1366696765907675977, 1366696765907675977))) ? (min(var_5, (arr_1 [i_0] [i_0]))) : (((arr_0 [i_0]) ? var_7 : var_9)))))));
        arr_4 [i_0] [i_0] = ((((min(-47, var_2))) * -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = (arr_5 [i_1]);

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_17 ^= var_14;

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = ((arr_10 [i_3 + 2] [i_3 - 1] [i_3 - 1]) ? (arr_7 [i_3 - 1] [i_5]) : var_15);
                        var_19 = (-103 != 78);
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = (-22145 != -108);
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_3] [i_4] [i_4] [i_6] [i_2] = (((arr_19 [i_6] [i_4] [i_4] [i_2] [i_1]) * (~var_10)));
                        var_20 = (((arr_8 [i_3 - 1]) ? var_10 : var_2));
                        var_21 = ((232 << (((((arr_6 [i_1] [i_1]) * 22145)) - 5814278010517755930))));
                        arr_22 [i_1] [i_2] [i_4] [i_4] [i_6] = (((arr_12 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3]) - (arr_20 [i_1] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_22 = (((arr_15 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 2]) ? 18446744073709551603 : (!var_3)));
                        var_23 = (min(var_23, ((((((var_14 ? var_5 : -1))) ? (((arr_10 [i_4] [1] [i_3]) ? var_4 : var_9)) : var_6)))));
                    }
                    var_24 = -22142;
                    var_25 = (var_3 ? (~4095) : ((47 ? 209 : var_14)));
                }
            }
            var_26 = (((((224 ? -22143 : -1))) ? (var_12 / 8388607) : var_12));
        }
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_27 = ((var_6 ^ ((-(arr_0 [i_8 + 3])))));
        arr_27 [i_8] = (-(~var_0));
        var_28 = (((22144 | 0) ? (((-89 < -104) ? 22142 : -22127)) : -116));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = (((((-1 / var_4) ? (var_3 >= var_0) : ((min(67, var_1))))) / var_11));
        arr_32 [i_9] = ((~(((((min(var_2, var_12))) == ((((-32767 - 1) == var_6))))))));
        var_29 ^= var_10;
        arr_33 [i_9] = ((-29 ? ((22137 ? ((12725 ? 32767 : 0)) : 1)) : (4 & var_0)));
        arr_34 [i_9] = (((((1 ? ((0 ? 1 : -79)) : 0))) / (((arr_24 [i_9] [i_9]) | (((-6150492458755237402 ? 4 : 19469)))))));
    }
    var_30 ^= ((((var_3 % (~var_7)))) && var_9);
    #pragma endscop
}
