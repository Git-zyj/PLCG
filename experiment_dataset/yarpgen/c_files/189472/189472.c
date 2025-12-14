/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((min(4294967295, (((122 ? 127 : (~65535)))))))));
        var_13 = var_10;
        var_14 = (max(var_14, (((~(arr_3 [i_0]))))));
        var_15 = (((((~(4294967295 / var_4)))) || ((16 && (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_13 [i_1] = (4294967295 + 1457573942);
                        arr_14 [i_1 + 2] [i_1 + 2] [i_2] [i_1 + 2] = (var_1 ? var_2 : ((65535 ? 67978284 : var_1)));
                        arr_15 [i_4] [i_2] [i_2] = ((var_7 / 4294967295) ? 1610466608 : 4294967273);
                    }
                }
            }
        }
        arr_16 [i_1] = ((~var_3) ? 4294967295 : (var_6 ^ 2684500687));
        arr_17 [i_1 + 2] [i_1 + 2] = ((var_7 ? (~4226989012) : var_9));
        var_16 -= ((0 & 1457573942) ? var_0 : var_4);

        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_31 [i_1 + 1] [i_5] [i_6] [i_7] [17] = var_0;
                            arr_32 [8] [i_5] [i_6] [i_7] [2] = ((~(((arr_9 [i_8] [i_7] [i_6]) ? var_3 : 0))));
                        }
                    }
                }
            }
            var_17 = (((!-1) && var_10));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_18 = (!-var_0);
                        var_19 = ((~(var_1 == 4294967279)));
                        var_20 = var_7;
                    }
                }
            }
            arr_41 [16] = (10 ? (((var_9 ? var_8 : (arr_24 [i_1] [3])))) : 4294967289);
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            arr_44 [i_11] [i_11] = ((~((45531 ? var_5 : 0))));
            arr_45 [9] [i_1] [i_11] = (~650223587);
        }
    }
    for (int i_12 = 1; i_12 < 16;i_12 += 1)
    {

        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            var_21 = ((45531 | ((((min(127, 3809387065))) ? 4294967295 : (((arr_8 [i_12] [12]) ? 4294967291 : 4))))));
            arr_50 [i_12] [i_12 + 1] [i_13] = (!0);
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 18;i_16 += 1)
                {
                    {
                        arr_60 [i_14] [i_14] [i_14] [i_14] = ((1457573942 ? (min(20, ((1423021738 ? 1208877931 : 3)))) : 54096));
                        arr_61 [i_12 + 3] [18] [i_14] [i_14] [7] = (2318184389 / 4294967282);
                        arr_62 [i_14] [i_14] [i_16] [i_16] [i_16] [0] = ((max(((2 ? (arr_9 [i_12] [6] [i_15]) : (arr_10 [i_12] [i_12] [8]))), (arr_42 [i_12] [i_14]))));
                    }
                }
            }
        }
        var_22 = (~2584046799);
        arr_63 [i_12] = (((max(32704, 4294967295)) / (max((arr_37 [i_12 + 1]), 2837393353))));
    }
    var_23 = (((~5937) == 11520));
    var_24 = min(var_1, ((~(min(var_8, 1909046854)))));
    #pragma endscop
}
