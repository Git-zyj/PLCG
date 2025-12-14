/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, ((((-4375516288833900532 ? 67108863 : 1040384))))));
        arr_3 [i_0 - 2] = (min((((((-(arr_2 [i_0])))) ? (2545508099606805665 + -518197743794912817) : ((((arr_2 [i_0]) - var_16))))), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_20 = ((var_14 | (((~(~-29602))))));
                        arr_14 [12] [i_2 - 2] [i_2 - 2] [3] = ((((((0 ? var_4 : var_15)))) ? 1117687385 : ((~((((arr_0 [i_3]) && var_3)))))));
                        var_21 += (!-281474976710656);
                    }
                }
            }
        }
        arr_15 [i_1] &= var_10;

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_22 = var_10;
            arr_19 [i_5] [i_1] [i_5] = 2147483647;
            var_23 = (((((-(~var_18)))) ? (max(((var_7 * (arr_10 [i_1] [i_5] [i_5]))), (max(4294967279, var_2)))) : (((arr_16 [i_5]) | var_11))));
        }
        var_24 = ((((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_6 [i_1])))) ? 255 : var_1));
        arr_20 [i_1] = (arr_2 [i_1]);
    }
    var_25 = ((-((((max(var_11, var_7))) | var_11))));
    #pragma endscop
}
