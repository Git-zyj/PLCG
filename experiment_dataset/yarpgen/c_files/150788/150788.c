/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_4 / ((var_4 ? var_11 : (max(var_0, var_16)))));
    var_19 = var_14;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = min((~var_4), ((max(var_17, var_6))));
        arr_5 [i_0] [i_0] = (((var_15 ^ var_3) < (var_12 != var_14)));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_10 [i_1] = ((~(((~var_5) ? (((48 >= (-127 - 1)))) : var_3))));
        var_20 = (((var_5 ? var_1 : var_8)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [i_3] = (((var_15 ^ var_11) <= (max(((min(0, -25))), ((var_7 ? var_17 : var_5))))));
                    var_21 = (max(((min((var_0 < var_6), (!var_8)))), var_8));
                    arr_18 [i_2] [i_3] = ((((min(((var_2 ? var_16 : var_14)), ((min(var_14, var_13)))))) ? (((var_17 < (var_8 <= var_6)))) : ((-(~var_12)))));
                    arr_19 [i_1 + 1] [i_2] = ((-(!21)));
                }
            }
        }
        arr_20 [i_1] = var_15;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_22 = var_0;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    arr_29 [i_4] [i_4] [i_5] = var_10;
                    var_23 = (var_4 <= var_8);
                }
            }
        }
        arr_30 [i_4] = (!36186);
        arr_31 [i_4] [i_4] = (~-82);
    }
    #pragma endscop
}
