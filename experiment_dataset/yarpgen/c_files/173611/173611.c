/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_10, (2147475456 | var_4)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 -= max((((arr_0 [i_1 - 1] [i_2]) ? (~var_1) : ((412206967428454997 ? var_7 : (arr_8 [i_0] [i_0] [i_1] [i_0]))))), (((arr_6 [i_2] [8]) ? var_7 : var_7)));
                    var_13 = (((max(31090, ((min(var_1, 10194)))))) ? (max((arr_7 [i_1]), var_10)) : var_9);
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((-((11590335440609272716 - (!-7342959307809600125)))));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_14 -= (((((arr_10 [i_3 + 1] [i_1 - 2] [i_2] [i_3] [i_3 - 1]) & (arr_10 [i_3 - 1] [i_1 + 1] [i_2] [i_3] [i_1]))) << (((max(var_4, 34445)) - 34407))));
                        var_15 = ((((max((1936327418102019112 / 2842120445), 1))) ? (((arr_10 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3]) ? var_0 : (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3]))) : (arr_5 [i_3])));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((-1452846846 ? (((arr_8 [i_0] [1] [i_0] [i_0]) ? 1 : (((arr_11 [i_0] [i_0]) ^ -2)))) : (min((min(var_7, 16199491528480950415)), ((var_5 ? (arr_1 [i_0]) : var_10))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_15 [i_0] [8] [i_4] &= (arr_14 [i_0] [i_0] [i_0]);
            var_16 = (min(var_16, 34445));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_17 = 34446;
            var_18 = ((min((((31115 ? 2842120445 : 10112))), 11)));
            var_19 = (min(var_19, ((max(16199491528480950399, (arr_7 [i_5]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_20 = (min(var_20, ((-(arr_24 [i_7 - 1] [i_6] [i_7] [i_8])))));
                        var_21 |= ((arr_20 [i_8] [i_8] [i_7 - 1]) ? (~var_10) : (arr_2 [i_0] [i_0]));
                    }
                }
            }
            arr_25 [i_0] [i_0] [i_6] = ((164 + (((arr_17 [i_0] [i_0]) ? (arr_22 [i_6] [i_0]) : 34420))));
            arr_26 [i_0] [i_0] [i_6] = (!-655218977);
        }
        arr_27 [i_0] = ((max((((var_3 ? 1322263734 : 1452846855))), (arr_13 [i_0] [i_0]))) / (((-1 ? 31089 : 478924802))));
    }
    var_22 = (min(var_22, var_2));
    var_23 = (min(var_9, ((((var_2 ? var_9 : var_8)) >> (var_5 + 1764739512)))));
    #pragma endscop
}
