/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= -var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((((((197 ? 12610 : var_4))) ? (arr_2 [i_0]) : (7593570102788967797 && var_1))));
        var_12 = ((((max((max(var_7, (arr_0 [i_0]))), 0))) ? (!var_6) : ((~(arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = 4907;
                        var_13 = (~127);
                        var_14 ^= (((arr_10 [i_3] [i_3 + 3] [i_2]) ? var_1 : var_3));
                        var_15 = (((~var_4) && (!0)));
                        var_16 -= (min(((max((arr_10 [i_0] [i_2] [i_2 - 2]), (!10524)))), 27533));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_2] = (~var_1);
                        arr_16 [i_2] [i_1] [i_2] [i_4] = ((var_1 ? (max(((~(arr_7 [i_1] [i_0] [i_1] [i_0]))), 1)) : (((((var_5 ? var_8 : (arr_0 [i_1])))) ? (arr_12 [i_0] [i_2 - 2] [i_2]) : -27548))));
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_2] = ((~((-var_0 ? (((var_7 > (arr_13 [15])))) : (arr_8 [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2])))));
                }
            }
        }
        var_17 = ((-(arr_0 [i_0])));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_18 += (((((-(arr_7 [i_5] [i_5] [i_5] [i_5])))) ? (arr_10 [i_5] [i_5] [i_5]) : -var_1));
        arr_21 [8] = ((!(((210 ? (arr_7 [i_5] [i_5] [i_5] [i_5]) : (arr_8 [i_5] [i_5] [i_5] [i_5]))))));
        var_19 += (arr_6 [i_5] [i_5] [i_5] [i_5]);
        var_20 = max((~-5229809845087257470), (~10913));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = (((var_8 + var_9) ? (((((-7708418669849511130 ? var_2 : 29629))) ? (arr_8 [i_6] [i_6] [i_6] [i_6]) : var_8)) : 23));
        arr_27 [i_6] = var_0;
        var_21 = var_6;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = var_6;
        var_22 = (max(var_22, ((((arr_14 [i_7]) + var_8)))));
        var_23 = (~var_9);
        var_24 = (max(var_24, (arr_18 [i_7])));
    }
    var_25 = -var_2;
    var_26 += -var_0;
    #pragma endscop
}
