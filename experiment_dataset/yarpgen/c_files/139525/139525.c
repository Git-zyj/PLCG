/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (min((-1125809635 == var_14), 39220));
                    arr_9 [i_2] [i_2] [i_0 + 3] = ((((max(var_12, (~var_14)))) ? ((((var_1 ? (arr_6 [i_1] [i_2]) : var_3)))) : (min(((11397822703982403247 ? 62 : (arr_3 [i_1]))), ((min(-82, -35)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_16 = ((-(((arr_6 [8] [i_4]) ? (arr_4 [i_3 + 1] [i_3 + 1]) : (arr_1 [i_3 + 1])))));
                            arr_21 [i_3] [i_5] [i_4] [i_3] = (min(var_5, var_11));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_30 [i_3] [16] = ((!(((~(arr_8 [i_3 - 1] [i_3]))))));
                            var_17 = ((~(arr_11 [i_3])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_18 = (((~6363527338384131250) ? (((((!(arr_36 [i_3 + 1] [i_3 + 1] [i_4] [i_9] [i_10]))) ? (arr_28 [i_3] [i_3] [i_4] [i_10]) : (arr_23 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1])))) : (+-6044976969005812063)));
                            arr_38 [i_3] [i_4] [i_3] = (~-280852926);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_45 [i_3] = (((((-5886395759839248396 ? 4599 : (arr_23 [i_3] [i_4] [i_11] [i_12])))) ? -844812480 : (var_1 - var_10)));
                            var_19 = ((min((arr_26 [i_11] [i_3] [12] [i_11] [i_11]), ((562949953421311 ? 4261626054063106526 : 1790686366847647572)))) / ((((min(-6, (arr_15 [i_3] [i_4] [i_11] [i_12])))))));
                        }
                    }
                }
                var_20 = (arr_25 [i_3]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    arr_52 [i_13] [i_14] [i_14] = (-1850709830 || 60937);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                var_21 = min((((((arr_8 [i_14] [i_15]) + var_8)) * (max(-280852926, var_4)))), ((max((arr_49 [i_14] [i_13]), (arr_49 [i_13] [i_13])))));
                                var_22 = (((-60937 | -var_7) ? -4045223513553864587 : (((((var_4 ? (arr_4 [20] [i_15]) : var_5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    var_23 = (arr_6 [i_20] [i_19]);
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 21;i_22 += 1)
                        {
                            {
                                arr_70 [i_20] [i_19] [i_20] [i_21] [i_20] = 127;
                                var_24 = (!25123);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 24;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 24;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 24;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 24;i_27 += 1)
                        {
                            {
                                var_25 = ((arr_74 [i_26]) / (((var_6 ? (arr_1 [i_23]) : var_1))));
                                arr_86 [i_23] [i_23] [i_23] [i_23] [i_25] = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 24;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 24;i_29 += 1)
                        {
                            {
                                arr_91 [i_29] [2] [i_29] [i_25] [i_29] = (arr_75 [i_23]);
                                var_26 = (((max((((var_0 ? (arr_81 [i_25] [i_25]) : var_5))), ((var_7 ? 18446744073709551615 : (arr_81 [i_23] [i_23]))))) >= (((((arr_73 [i_23]) != (max((arr_87 [i_23] [i_23] [i_25] [i_28] [i_29]), (arr_76 [i_23] [i_24])))))))));
                                var_27 = (arr_75 [i_23]);
                                arr_92 [i_23] [i_23] [i_23] [i_23] [i_25] [i_23] = (!((min(13942, (((arr_5 [i_23] [i_29]) ? var_3 : (arr_87 [21] [i_24] [i_25] [i_28] [1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
