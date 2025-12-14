/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-var_5 ? var_9 : (16155458832306948310 * 16155458832306948310))) * ((var_4 ? var_4 : -17503788906571452648)));
    var_13 = 1638599601;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((!(arr_2 [i_0] [i_1] [i_1]))) ? (var_6 || var_7) : (!var_7))))));
                var_15 = (min(var_15, ((((min(var_3, var_9)) + (~var_11))))));
                var_16 = max((max((arr_2 [i_1] [i_0] [i_0]), (arr_0 [i_0] [i_1]))), (var_11 > var_4));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_17 |= (var_4 * var_6);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 = (-(18057137231891693123 + var_1));
                                arr_17 [i_2] [i_2] = var_11;
                            }
                        }
                    }
                    arr_18 [i_4] [i_2] [i_2] [i_2] = var_5;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_19 = ((-(((!(arr_24 [i_2] [i_3] [i_3] [i_4] [i_7] [i_8]))))));
                                arr_25 [i_2] [i_3] [i_3] [i_4] [i_4] [i_7] [i_2] = ((var_1 ? (arr_8 [i_2 - 1] [i_2] [i_2]) : (arr_8 [i_2 + 2] [i_2] [i_2 + 3])));
                            }
                        }
                    }
                }
                arr_26 [i_2] [i_3] = (min(((((((arr_8 [i_3] [i_3] [i_2]) ? var_2 : (arr_5 [i_3 - 3]))) | (arr_15 [i_2] [i_3] [i_3])))), ((((max((arr_21 [i_2] [i_2] [i_2] [i_3] [i_3]), (arr_8 [i_3] [i_3] [i_2 + 1])))) ? (arr_4 [i_3] [i_3 - 3]) : var_11))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_20 = ((-((var_1 ? var_7 : var_5))));
                    arr_29 [i_2] [i_2] [i_9] = (((var_0 < var_3) && var_5));
                    var_21 -= (~var_7);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_32 [i_2] [i_3] = ((!(arr_21 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_2 + 1])));
                    var_22 = ((-(!var_0)));
                }
                var_23 = (min(var_23, (((((((!((max(var_3, -3218212868761365826))))))) | ((((min(var_0, var_0))) ? ((389606841817858493 / (arr_10 [i_2] [i_2] [i_3]))) : (var_5 / var_9))))))));
            }
        }
    }
    #pragma endscop
}
