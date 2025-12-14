/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((~var_11) * -4))) ? var_14 : var_5));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 |= var_14;
                        var_22 = (min(var_22, ((((-16 + 2147483647) << (((-5 + 34) - 29)))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_17 [i_4] = (max(var_7, (((((45521 + (arr_15 [i_4])))) ? var_16 : (min(var_5, 3390704506))))));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_23 = ((((max((arr_25 [20] [i_6 - 4] [i_6 - 1] [i_6 - 1] [i_6]), (arr_25 [19] [i_6 - 1] [i_6 - 3] [i_6 - 3] [i_7])))) >> (var_9 - 31380)));
                        var_24 = (max((min(-33, (var_6 * 9392355693617905441))), (((18297783371834821159 ? 1 : 6948)))));
                    }
                }
            }
            var_25 = (min(var_25, var_7));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_26 = var_15;
            arr_29 [i_8] [i_4] [i_4] = (min((min(var_16, (arr_22 [i_8] [i_8] [i_4] [i_4]))), ((-15 ? -32760 : 11668635789582156420))));
            var_27 = (arr_16 [i_8]);
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_33 [11] [8] |= (!8859636435176031116);
            arr_34 [i_4] [i_9] = (arr_19 [i_4] [i_9] [1]);
            var_28 = (~(min(var_3, var_17)));
            arr_35 [1] = (((arr_31 [i_4]) + (((((8 ? 148960701874730456 : var_18)))))));
        }
        arr_36 [i_4] = ((((min(81, (arr_22 [i_4] [i_4] [i_4] [i_4])))) ? (((min((arr_28 [i_4]), (arr_28 [i_4]))))) : var_5));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_29 = ((((-((var_14 ? 32 : 1549955437)))) + var_13));
                    var_30 = (min(var_30, (arr_21 [16])));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_31 = var_18;
        var_32 *= (((((var_7 ? (arr_43 [i_12]) : 31425))) ? -4 : (arr_43 [0])));
        var_33 ^= 14153;
        var_34 -= arr_43 [i_12];
    }
    var_35 -= (((-32398 + var_11) == 1600707414830687155));
    #pragma endscop
}
