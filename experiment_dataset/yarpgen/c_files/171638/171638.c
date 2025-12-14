/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (1945792564 && 1)));
                        var_20 = ((((var_9 ? (((arr_9 [i_0] [i_1] [i_2] [i_3 + 1]) * 1)) : -1945792564)) * 1945792564));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [i_5] [i_5] = (((((max((arr_14 [i_0] [i_0] [i_5]), (arr_7 [i_0] [i_4] [i_4] [i_4]))) <= var_1)) ? (((-1 ? ((var_14 << (1226869784 - 1226869762))) : var_15))) : ((0 ? (((((arr_13 [i_4]) > var_13)))) : (max(18, var_8))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_21 = var_7;
                                arr_22 [i_0] [8] [i_4] [i_0] [i_0] = 1;
                                var_22 *= (~-1226869792);
                            }
                        }
                    }
                    arr_23 [i_4] = (-((185 ? ((((arr_9 [i_0] [i_4] [i_5] [i_4]) && var_12))) : (max(var_1, 177)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_23 = (max(49, (~1)));
                                var_24 = (min(var_24, 1));
                                arr_29 [i_0] [i_0] [4] [i_0] [i_4] [i_0] [i_0] = (~1945792562);
                            }
                        }
                    }
                }
            }
        }
        var_25 = var_17;
        arr_30 [i_0] = var_15;
        var_26 = 58;
    }
    var_27 = -var_11;
    var_28 = (max((max((~70), ((1 ? 147 : 1)))), (((max(var_2, var_14)) / 198))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                var_29 = (((arr_31 [i_10 + 1]) ? (arr_31 [i_10 + 2]) : -59));
                arr_36 [i_10 - 1] [i_10 + 3] [i_10 - 1] = ((~(max((0 * var_5), ((max(1, 1)))))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_30 *= -1;
                            var_31 = (arr_37 [i_10] [i_10] [1]);
                            arr_41 [1] [1] [i_13] = (((max(2072498868, (((!(arr_35 [i_13] [i_11] [i_12])))))) >= ((((arr_31 [i_13 + 2]) ? 1 : (arr_31 [i_13 + 2]))))));
                            arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_13] = (((((2072498868 ? 0 : var_11))) && (~var_0)));
                            var_32 *= ((-((2700113552 << ((max(1, 1)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_33 += ((max((((2222468439 ? 1 : 65531)), ((var_18 ? 4294967295 : var_18))))));
                            var_34 = (max(var_34, ((((((var_10 ? (var_8 || 773755407) : ((1 ? 5779496482924564916 : (arr_44 [i_10] [i_11] [i_11])))))) && (((var_2 + (((arr_44 [i_15] [i_15] [i_14]) >> (var_10 - 70)))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
