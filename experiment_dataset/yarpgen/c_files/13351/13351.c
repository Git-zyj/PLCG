/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_12 >= (arr_2 [i_0 - 2] [i_0 - 1])));
        arr_4 [i_0] = (((arr_2 [i_0 + 1] [i_0 - 1]) >= (arr_2 [i_0 + 1] [i_0 - 2])));
        var_17 = -7;
    }
    var_18 = (max(var_18, (((((var_13 <= var_15) ? -7 : var_10))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                arr_11 [i_1 - 2] [i_1] [i_1 + 1] = ((var_10 ? (((arr_2 [i_1 - 1] [i_1 - 2]) ? 2480660465182577581 : var_10)) : (arr_0 [13] [i_2])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_13));
                            var_21 = ((((var_9 ? var_12 : var_10)) + ((max((arr_10 [i_1 - 1] [i_1 + 1]), var_3)))));
                            arr_17 [i_4 + 3] [i_3] [i_2] [7] = (+(((arr_16 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 1]) + (arr_12 [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 + 1]))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_22 ^= ((~(max((~var_15), ((var_7 ? var_11 : var_16))))));
                    var_23 = (max(var_23, (max(((-(min(-1, var_5)))), (!-301778586)))));
                    var_24 = (max((max(var_14, (!var_0))), (arr_5 [i_1 + 1])));

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_25 = ((var_6 <= ((max((max((arr_9 [i_1 - 1] [i_2]), var_5)), (var_14 & var_11))))));
                        arr_24 [i_1 + 2] [i_2] [i_5] [i_6] = -4294967295;
                        arr_25 [i_5] [i_5] [i_2] [i_1 - 2] = (var_15 ? (arr_14 [i_1] [i_1 - 2] [i_6 - 1]) : ((var_16 ? var_0 : (var_9 == 0))));
                        var_26 = var_11;
                    }
                    var_27 = (min(var_27, (((((min(6, 120))) ? var_2 : ((var_8 ? var_10 : (arr_21 [i_1] [i_2] [i_1 - 2] [8]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            {
                var_28 = ((((((((105 ? var_15 : var_3))) ? (arr_30 [i_8 - 3]) : (var_15 + var_11)))) ? (((((147 ? 1903054639 : 22))) ? (max(var_10, var_12)) : ((max(var_5, var_10))))) : ((max((max(var_0, (arr_28 [i_7]))), (max(1386687002, -625666099)))))));
                var_29 ^= ((118 ? ((((max(144, var_8)) >= (arr_27 [i_7 - 2])))) : (((((max(-15, (arr_28 [i_7])))) || var_9)))));
                var_30 = (max((arr_28 [i_7 + 3]), (max((max(var_3, var_10)), (min(var_14, var_2))))));
                var_31 = (max(var_31, var_0));
                var_32 -= ((1529887570001236222 >= ((((~var_5) == var_11)))));
            }
        }
    }
    #pragma endscop
}
