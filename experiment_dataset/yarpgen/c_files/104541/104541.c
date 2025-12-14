/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_13 = (((((~((2313321172400249648 ? var_7 : (arr_12 [i_2] [i_1] [i_1] [i_3] [i_4])))))) ? ((((((arr_15 [i_4] [i_2] [i_1]) ? (arr_4 [i_2] [i_3] [i_4]) : var_6))) + var_12)) : (((((max(var_3, var_3))) << ((((5 ? -20 : var_10)) + 25)))))));
                            var_14 = (arr_4 [i_0] [i_2 + 2] [i_2 + 3]);
                            var_15 = 1;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_16 = ((var_6 ? (arr_3 [i_3]) : var_3));
                            var_17 |= -27;
                        }
                        arr_18 [i_2] [i_2] [19] [i_2] = var_10;
                        var_18 -= 3326315636;
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((((((var_8 ? var_11 : var_2)))) ? (((!(((var_12 ? 6699727085664038549 : var_9)))))) : ((((max((arr_0 [i_0]), var_7))) ? (-241280165902671649 > var_10) : (var_6 >= var_2)))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_19 += var_12;
                        var_20 = (arr_11 [i_2 - 1] [i_1] [i_2 - 1] [i_0]);
                        var_21 ^= -4508171109576721536;
                        arr_23 [i_0] [i_0] [i_2] [i_2 + 2] [i_6] [i_6] = ((!(arr_1 [i_2 + 3])));
                    }
                    var_22 = (((((max((arr_10 [i_0] [i_1] [i_2 - 1] [i_1]), (arr_10 [i_0] [i_1] [i_2 + 2] [i_0]))))) * var_12));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_30 [i_2] [i_7] [i_2] = ((((min(((((arr_8 [i_8] [i_2]) != (arr_20 [i_0])))), -125))) ? var_12 : var_9));
                                var_23 = var_1;
                                var_24 = ((((((((var_10 ? (arr_3 [i_1]) : 255))) ? -5 : (var_7 && var_10)))) ? (max((((arr_4 [i_1] [i_1] [i_7]) - -61)), var_6)) : (((var_7 == var_0) ? var_1 : (((var_0 || (arr_24 [i_0] [i_1] [i_2 + 3] [i_7] [i_7] [i_7]))))))));
                                var_25 = ((24630 ? var_8 : var_2));
                                var_26 = var_6;
                            }
                        }
                    }
                    var_27 = (max(var_27, var_0));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_28 = ((247 * ((((arr_28 [i_0] [i_1] [20] [i_9] [i_2 + 2]) > (arr_34 [i_2 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_10] [i_0]))))));
                                var_29 = (min((max((((arr_3 [i_10]) / -26)), (((var_2 > (arr_24 [i_0] [i_2] [i_2 + 2] [i_10] [i_0] [i_10])))))), -255));
                                var_30 = (((arr_0 [i_0]) & (max(var_1, (min(var_12, (arr_3 [i_9 - 1])))))));
                                var_31 = ((~(((((max((arr_8 [i_2] [i_2]), 255))) || (var_6 % var_12))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = var_10;
    #pragma endscop
}
