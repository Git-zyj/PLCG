/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(((~(min(var_10, var_7)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((var_9 ? (((min(var_8, var_13)))) : (max(7337, -6349382912986891723))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] = ((!(~var_6)));
                            arr_14 [i_2] [i_2] = var_5;

                            for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_3] = ((max(var_9, var_13)));
                                var_16 *= var_3;
                                var_17 |= var_10;
                            }
                            for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                            {
                                arr_23 [i_2] [i_3] [i_2] [i_0] [i_2] = (max(((((max(var_9, var_2))) + (max(var_2, var_4)))), var_12));
                                var_18 -= var_2;
                            }
                            var_19 = 6349382912986891731;
                            var_20 = (min(var_20, ((((var_13 > var_6) << (((max((var_13 ^ var_5), var_2)) + 7422)))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_26 [i_6] [i_1] [i_0] [i_6] = var_0;
                    var_21 = -var_7;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_29 [i_0] [i_1] [i_1] [i_7] = (~var_1);

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_22 += (!var_9);
                        var_23 = ((-(min((var_7 != var_5), var_6))));
                        var_24 = (min(var_24, (((-806850031605849254 <= (-2147483647 - 1))))));
                    }
                }
                var_25 += ((-(~var_5)));
            }
        }
    }
    var_26 -= (((((var_3 ? var_7 : (var_13 / var_0)))) ? var_4 : (min((max(var_1, var_8)), (!var_12)))));
    #pragma endscop
}
