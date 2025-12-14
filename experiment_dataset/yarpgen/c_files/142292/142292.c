/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 > (((var_13 ^ var_6) ? 13284872827890993942 : var_8))));
    var_18 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_16 ? var_13 : (var_16 >= var_13)));
        var_19 ^= var_11;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((((-(arr_5 [i_1])))) ? var_1 : (((-(arr_5 [i_1]))))));
        arr_8 [i_1] = (max(var_6, ((((arr_6 [i_1]) ? (!347680537) : (((arr_0 [i_1]) ? var_4 : var_8)))))));
        arr_9 [i_1] = (((((1029865121113130202 & var_7) >> ((((min(-5407, var_0))) + 5417))))) ? ((var_10 ? (arr_2 [14]) : 5576316386901229691)) : ((min(((((arr_6 [i_1]) != var_13))), ((var_2 / (arr_5 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 |= ((-(arr_14 [i_3])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_21 = ((var_1 ? (~var_10) : var_3));
                            arr_25 [i_5] [i_6] &= var_14;
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_28 [i_2] = var_16;
            arr_29 [i_2] [i_2] = ((161 ? (((((arr_27 [i_2] [i_7]) && var_2)))) : (arr_15 [1] [i_7] [i_2])));
        }
        for (int i_8 = 4; i_8 < 20;i_8 += 1)
        {
            arr_34 [i_2] = 9007199250546688;
            var_22 = var_4;
        }
        var_23 = (max(var_23, (arr_10 [2])));
        var_24 = (var_2 != var_14);
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_25 = 3028547464223387514;
        var_26 = (((max((arr_11 [i_9]), (arr_31 [i_9] [1] [i_9]))) << ((var_12 >> (var_16 - 3760492317)))));
        arr_37 [i_9] = ((5576316386901229691 / (arr_31 [17] [i_9] [i_9])));
        var_27 = ((var_7 ? (((((min((arr_15 [i_9] [i_9] [i_9]), 28976))) ? ((((arr_13 [i_9 - 1] [i_9]) < var_11))) : ((min(28988, 0)))))) : (((arr_21 [i_9] [7] [13] [i_9 + 1] [i_9]) ? (((min(var_7, 0)))) : (-13057 & var_16)))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                {
                    var_28 = (arr_13 [i_11] [i_10]);

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_29 = (min(var_29, var_13));
                        var_30 = ((((max((arr_21 [i_9 - 1] [i_10] [i_11 + 1] [i_12] [20]), (arr_20 [i_9 - 1] [i_10])))) ? ((((var_12 ? var_10 : var_15)))) : (max((min(var_13, (arr_35 [i_9]))), (!var_2)))));
                    }
                    var_31 = (((max((((var_10 ? var_7 : var_10))), ((102 ? var_13 : 28969)))) / (((max(((!(-9223372036854775807 - 1))), ((var_2 != (arr_23 [7] [i_9] [i_9] [7] [i_9])))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_32 ^= (((((((arr_31 [i_10] [i_11 - 2] [i_10]) || var_13)))) == (((arr_31 [i_10] [i_11 - 3] [i_10]) & (arr_48 [i_11 + 1] [i_14 + 2] [i_13] [i_11 + 1] [i_11 + 1] [i_11])))));
                                arr_50 [1] [1] [1] [i_9] [i_9] = (!0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = max((48 > var_8), (((min(0, var_2)) ^ (var_6 * 0))));

    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_34 = (!var_2);
        var_35 = (min(var_35, (((max(var_4, (arr_11 [i_15])))))));
    }
    #pragma endscop
}
