/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-(max((max(var_6, var_5)), (min(15, 7537008919503723959)))));
    var_11 = (min(var_5, (((((max(var_1, var_9))) >= (min(var_9, var_5)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((~((max(var_4, var_6))))) + 2147483647)) >> (var_1 || var_7)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_12 = var_5;
                    arr_12 [i_0] [22] [16] [i_3] [i_2] = (var_2 | -var_0);
                    var_13 += (!var_1);
                    arr_13 [i_2] [i_0] [i_1] [i_2] [i_3] = ((var_9 ? var_2 : var_3));
                }
                arr_14 [i_0] [i_0] [i_2] [i_0] = (((min((var_6 <= var_2), var_0)) - ((~(max(var_2, var_0))))));
                var_14 = (min((max(var_0, var_8)), var_4));
            }
            var_15 = (max(var_15, ((((min(var_0, var_4)) / ((((min(var_1, var_3)) * -var_6))))))));
            arr_15 [8] [i_0] [i_0] = (((min(var_6, (min(var_4, var_1)))) != ((((var_5 <= var_1) <= var_9)))));
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_19 [1] [i_4] = (!var_1);
        var_16 += (((var_1 / var_6) & (var_3 && var_6)));
        var_17 = (min(var_17, ((((var_6 ? var_8 : var_5)) | var_7))));
        arr_20 [i_4] [i_4] = ((((7537008919503723962 >> (-25820 + 25854))) | (var_2 % var_1)));
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
    {
        var_18 += ((~((613030711217531291 >> ((((max(25823, 127))) - 25810))))));
        var_19 = (-var_9 >= -var_9);
        var_20 += ((((var_0 ? var_9 : var_9)) > ((((min(-25835, 144605474)) == (var_8 >= var_1))))));
    }
    var_21 = (max(var_21, (((+(((var_8 % var_4) ? ((min(var_9, var_3))) : (max(var_5, var_3)))))))));

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_28 [8] &= var_1;
        var_22 = (max(var_22, (((((max(-var_8, (var_9 >= var_5)))) ? (((max(var_4, var_5)) >> (((max(var_3, var_1)) - 2018121630553571337)))) : (max(-var_5, (var_3 || var_4))))))));
        var_23 -= (max((min(((max(var_2, var_7))), var_5)), ((min(var_1, var_7)))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_24 = ((~((var_4 + ((var_5 ? var_5 : var_9))))));
        arr_31 [i_7] [i_7] = (((-32767 - 1) > (167 == 46997)));
    }
    #pragma endscop
}
