/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max((!var_7), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = ((((max(132, 127))) | var_4));
                            var_14 = (arr_6 [i_1 + 2] [i_1 - 1]);
                        }
                    }
                }
                var_15 |= (max((((((arr_6 [1] [i_1]) ? var_12 : var_6)))), ((-(var_4 / var_9)))));
                var_16 = ((((max(var_2, (arr_6 [8] [i_1]))))) + ((((arr_7 [i_0]) / var_8))));
            }
        }
    }
    var_17 = (--82);

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = 3578771265;
        var_18 |= (((((18446744073709551615 ? 18446744073709551600 : var_12))) ? (arr_11 [13]) : -5893139122292317666));
        arr_14 [i_4] [i_4] = ((+(((arr_12 [i_4]) ? 35 : -8528714141874011159))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((!(((min((arr_15 [i_5]), (arr_15 [i_5])))))));
        arr_18 [19] = 45;
        arr_19 [i_5] = ((((min(1, var_0))) ? (var_7 < var_3) : (-313846982 > 532787817)));
        arr_20 [i_5] [i_5] &= 8;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((((arr_16 [i_6] [i_6]) ? var_8 : var_6)));
        arr_24 [i_6] [i_6] = (min(491888909349159563, ((min((arr_12 [i_6]), 1047569458)))));
        var_19 = (max(var_19, (((((((!(arr_15 [i_6]))))) ? var_6 : (max((((!(arr_11 [i_6])))), var_8)))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_20 = (~1209867024500008549);
        var_21 = (~(-2147483647 - 1));
    }
    #pragma endscop
}
