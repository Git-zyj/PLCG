/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [14] [i_1 + 1] [i_2] &= ((var_8 << ((((max(var_4, var_4))) - 181))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [1] = (min((var_6 >= var_8), (min(var_9, var_9))));
                                var_13 = (min(var_13, var_5));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = var_10;
                                arr_17 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((min(var_8, (var_8 | var_5))));
                                var_14 = ((min(((var_4 ? var_2 : var_5)), (min(var_8, var_10)))) != var_2);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] = var_10;
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_15 = (((min(var_1, var_10)) == (((var_9 << (var_3 + 1264433819))))));
                    arr_22 [i_1] = (max(((min(var_5, var_7))), ((((((var_4 ? var_5 : var_7))) || var_2)))));
                    arr_23 [i_1] [i_5] [i_1 + 1] [i_1] = (((var_6 == var_4) || ((min(var_9, var_1)))));
                    arr_24 [1] [i_1] [i_5] [i_1] = (min((min(var_8, ((var_3 ? var_3 : var_8)))), (((var_2 + 2147483647) << (((var_3 + 1264433828) - 24))))));
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 = ((var_4 ^ (var_5 >= var_1)));
                                var_17 = ((var_9 ? var_0 : (var_9 >= var_3)));
                            }
                        }
                    }
                    arr_31 [i_0] [i_0] [i_1] [i_1] = var_1;
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_43 [i_11] [i_1] [i_11] = (max(((min((var_7 || var_0), var_9))), ((var_6 ? ((var_7 ? var_4 : var_8)) : (min(var_7, var_11))))));
                                var_18 -= ((((var_7 >= var_2) ? var_6 : (min(var_3, var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
