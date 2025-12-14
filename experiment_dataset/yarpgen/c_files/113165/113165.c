/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_17 = (max(12409550356828458527, (max((~var_15), ((~(arr_4 [i_0] [i_0])))))));
                                var_18 = ((!(((var_10 ? var_8 : var_16)))));
                            }
                            arr_15 [i_0] [i_1] [i_3] [i_3] = (arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_3]);
                            var_19 = 758854082;
                            var_20 = (((-1 / (var_10 * 105))));
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_0] = ((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) >> ((((-1 ? (arr_3 [i_0] [14] [i_0]) : 136)) - 114183166666715543))))) ? 16 : (((((2147483642 || 85) == (arr_7 [19] [i_0] [i_1 - 1])))))));
            }
        }
    }
    var_21 = ((((((((var_14 ? var_11 : var_10)) >= (!28))))) ^ var_10));
    var_22 = var_4;

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_23 [i_5] = (~var_13);
            var_23 = (var_16 < var_15);
        }
        arr_24 [i_5] = (arr_17 [i_5]);
        var_24 = (((max((arr_18 [i_5]), (arr_17 [i_5])))) >> (var_10 - 10711020800962473633));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 = ((((arr_25 [i_7] [9]) * (arr_25 [i_7] [i_7]))) * (arr_25 [i_7] [i_7]));
        var_26 = ((((((var_7 ? var_9 : (arr_26 [i_7]))))) && var_13));
        var_27 = ((!(!var_14)));
        var_28 = ((var_16 ? (((var_10 - 158) ? var_0 : (var_13 < var_12))) : (11023454081542461948 != 90)));

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_30 [i_7] = (((arr_26 [i_7]) - (((arr_26 [i_8]) ? (arr_27 [4]) : (arr_26 [i_7])))));
            var_29 = (var_13 / 150);
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_30 = -var_7;
                            var_31 = ((((((arr_34 [i_7] [i_7] [i_9]) ? var_12 : var_4))) ? (9037405266712769604 / -93) : (13 == 3000412539)));
                            arr_39 [i_7] [i_8] [i_9] [i_7] [i_10] [i_8] [i_11] = (1 && 32744);
                            var_32 = ((((min(-915148089, (arr_37 [i_7] [i_8] [i_7] [i_10] [i_7] [i_8])))) || (arr_37 [i_7] [i_7] [i_8] [i_9 + 2] [i_10] [i_11])));
                        }
                    }
                }
            }
            var_33 = (((((var_7 ? 27261 : (arr_28 [i_7] [i_7])))) ? ((~(arr_28 [i_7] [i_7]))) : (-6638 < 4)));
        }
    }
    #pragma endscop
}
