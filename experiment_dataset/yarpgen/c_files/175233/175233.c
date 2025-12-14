/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_2 * (var_9 || var_9))));
    var_15 = (((((var_10 - var_7) + var_5)) / var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((max(112, 131)));
                    arr_8 [i_2] [21] = (((var_4 && var_3) != var_4));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_2] [i_1] [i_1] = ((var_11 >= (max((var_5 >= var_0), (1 + 59)))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_17 ^= (var_0 >= var_0);
                            var_18 = var_6;
                            var_19 = (29852 >= 1);
                            arr_15 [i_2] [i_1] [i_2 + 1] [i_2] [i_3] [i_2 + 1] = (~var_0);
                            var_20 = var_11;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((min((max(var_10, var_12)), (max(var_12, 68719345664)))));
                            var_22 &= (((((max(273071706, 204) == (!var_4))))));
                            arr_18 [i_2] [i_2] [i_2] [i_1] [i_2] = (!var_13);
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] [i_3] [i_5] = ((var_12 ^ (max(var_10, var_12))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_3] [i_1] |= ((((((!((max(var_3, var_4))))))) & ((var_5 | ((max(var_2, var_10)))))));
                            var_23 = (min((min(var_9, var_8)), -0));
                            arr_25 [i_0] [i_2] [i_2] [i_3] [19] [i_6] = ((var_4 ^ ((max(32764, 8)))));
                            var_24 = (min(var_24, ((((var_3 >> (var_8 - 2876253134694906398)))))));
                        }
                        var_25 = (((var_9 - var_10) >= (var_8 < var_13)));
                    }
                    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_26 += -var_10;
                            var_27 = (max((29069 >= 1380526286410711325), var_5));
                            var_28 = (max(var_28, var_8));
                            var_29 = var_1;
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_2] [i_8] = var_1;
                        }

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_30 = var_3;
                            arr_36 [i_0] [2] [i_2] [i_2] [i_7] [i_7] [i_2] = var_7;
                            var_31 *= var_5;
                        }
                        arr_37 [i_2] [3] [i_1] [i_2] = (min((((max(var_8, var_1)) & var_10)), var_13));
                    }
                    for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_2] [i_0] [i_1] [i_0] [i_2] [i_10] = var_7;
                        var_32 = 6105141404623582105;
                        var_33 = ((var_13 != (var_3 == var_2)));
                        var_34 *= (var_12 >= var_3);
                        var_35 = ((~((var_9 >> (((max(var_10, var_12)) - 8870055623876919484))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
