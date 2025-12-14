/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((-28391 ? (((-4688 > 0) ? (0 && 12234105670350157417) : 32767)) : ((-2266 ? 2265 : 19651))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_10 *= ((((min(((var_7 >> (((arr_1 [12]) - 8911040428748289807)))), -var_3))) ? (((~((max(var_4, 32767)))))) : (2265 % -63718538164479165)));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_11 = (max(((((var_3 - var_4) || var_7))), (max(((var_8 ? (arr_9 [i_1]) : 32754)), 0))));
                            var_12 = (min(var_12, (arr_7 [i_2 - 1] [i_2 - 1])));
                        }
                    }
                }
            }
            var_13 = ((var_6 ? ((((max(32767, (arr_16 [i_0] [i_1] [6] [i_1] [i_1])))) ? (((((arr_15 [8] [i_1] [i_1] [i_1] [i_1] [i_1]) || -1450707485600534754)))) : ((var_0 ? var_2 : var_8)))) : ((((-2266 != -32363) ? 417469231 : 0)))));
            arr_17 [i_0] [i_1] = ((var_4 / ((((~-28463) >= ((var_7 ? var_8 : var_3)))))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_14 = ((var_9 != (arr_19 [i_0 + 1])));
            var_15 = (min(var_15, ((((17385 ? 14152 : -417469231)) | ((19002 ? 811812498 : (-32767 - 1)))))));
            arr_20 [i_0] [i_0] = (((arr_10 [i_0 + 1]) ? -9115 : (((!(arr_2 [i_0] [i_0 - 3]))))));
        }
        var_16 = var_6;
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_17 = (((7048 ? (arr_28 [i_6] [i_7] [i_8] [i_8]) : (arr_28 [i_6] [i_7] [4] [i_8]))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_18 ^= ((2265 ? (max(-2286, (max(8456196009249344707, var_4)))) : 26765));
                                var_19 = (min(var_19, 417469226));
                                var_20 = (max(var_20, (((417469230 ? ((min(2948174017721713172, var_3))) : 29195)))));
                                var_21 = ((min(10436751983495509915, (arr_23 [i_9 - 2]))));
                                arr_33 [i_8] = (arr_23 [i_10]);
                            }
                        }
                    }
                    arr_34 [i_6] [i_6] [i_6] [i_8] = var_2;
                }
            }
        }
        var_22 += (((var_3 + (arr_24 [i_6] [i_6]))));
    }
    var_23 = var_2;
    #pragma endscop
}
