/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~5623330907195008450);
    var_20 = (~1);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -5623330907195008462;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (min(var_21, ((((arr_5 [i_0] [i_0] [i_0]) / (((arr_5 [i_1] [i_1] [i_1]) ? -12279 : 12250)))))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_2] [i_2] [i_2 - 1] [i_2] = ((((((min(var_17, var_6)) > (var_0 / 200))))) - (max((arr_8 [i_2] [i_1] [i_1] [i_1]), var_15)));
                var_22 = -1;
            }
        }
        arr_10 [9] = ((((var_11 * (var_17 / var_12))) * (255 / 81)));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_23 = var_6;
            var_24 = (min(var_24, (((16 ? (((12256 < (arr_2 [i_0])))) : (1 * var_16))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_25 = (((((max((arr_1 [1]), var_3))) ? (arr_6 [i_0] [i_4]) : 16)) != (((arr_16 [i_4 + 1]) ? -8679219903368374264 : var_2)));
                            var_26 = (min((arr_15 [i_0] [i_3] [i_6]), (~140737488355327)));
                            var_27 = var_7;
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] [i_0] = ((((-(arr_4 [i_0]))) << (1 - 1)));
        }
        var_28 = min((!var_16), ((((min((arr_0 [16] [i_0]), var_2))) ? (!var_8) : (arr_4 [i_0]))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        arr_33 [i_10] [i_10] [i_10] [i_7] = (--8767204065953210959);
                        var_29 = (((arr_8 [i_10] [i_8] [i_8 + 2] [i_8]) ? (arr_4 [i_10]) : var_13));
                        arr_34 [i_8] [i_10] [7] = (((arr_5 [i_9 - 3] [i_9 + 3] [i_9 + 2]) ^ var_15));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_30 = (((arr_8 [4] [i_7] [14] [i_7]) ? (arr_15 [i_7] [i_11] [i_7]) : -12309));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_31 = 1;
                            var_32 = ((-5623330907195008450 && (((3288837650 << (arr_23 [i_7]))))));
                            var_33 = (arr_11 [i_11] [i_14]);
                        }
                    }
                }
            }
            var_34 = (min(var_34, (arr_39 [i_7] [3] [i_7])));
        }
    }
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_35 = (arr_18 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
        var_36 = (~((~(min(12236, -7040081052107008119)))));
    }
    var_37 = ((var_1 != var_13) ? (((var_5 + 9223372036854775807) << ((((min(99, var_8))) - 78)))) : (min((max(var_3, 1)), var_8)));
    var_38 = var_13;
    #pragma endscop
}
