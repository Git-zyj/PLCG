/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((!var_6) ? (((((arr_2 [10] [10] [i_1 - 1]) < (!18446744073709551615))))) : (arr_5 [i_1] [i_1 + 1]));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = var_5;
                            arr_11 [i_0] [i_0] [i_0] = (((~(~var_3))));
                            var_20 = ((-(((((~(arr_9 [i_0] [i_0])))) ? -16120575455536828146 : (arr_4 [i_0] [i_0] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    var_21 -= (~var_18);

    /* vectorizable */
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        var_22 = (min(var_22, (((3013818235 ? (arr_0 [i_4 - 3] [i_4 + 1]) : ((((var_6 + 2147483647) << (22 - 22)))))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_23 = ((18446744073709551594 ? (!182) : -20435));
                                var_24 = (((arr_1 [i_5 - 1]) / (arr_12 [i_5 - 2] [i_5 - 1])));
                                var_25 = var_7;
                            }
                        }
                    }
                    arr_29 [i_4] [i_5] [i_6] = var_1;
                }
            }
        }
        var_26 = var_16;
        var_27 = (max(var_27, ((((arr_3 [i_4 + 1]) ? (arr_3 [i_4 + 1]) : (arr_3 [i_4 + 1]))))));
        var_28 -= var_15;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_29 += ((+(((arr_12 [i_9] [i_9]) ? 327538623398012273 : var_18))));
        arr_33 [i_9] [5] = var_11;
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_37 [i_10] [14] = ((var_9 ? (arr_18 [0]) : ((var_15 ? (((arr_19 [i_10] [8] [i_10]) ? -27879 : 12892)) : (arr_6 [i_10] [i_10] [i_10])))));
        arr_38 [i_10] [i_10] = (!18446744073709551615);
        var_30 -= var_15;
    }
    var_31 -= ((17223 ? (51236 | var_4) : (!22)));
    #pragma endscop
}
