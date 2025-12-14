/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [1] = 1616064499;
        arr_5 [i_0] [i_0] = (((-var_8 + 2147483647) << ((((((-(~var_7))) + 1979041772)) - 27))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_10 ? var_10 : (arr_2 [i_1 + 1])));
        var_16 &= arr_1 [i_1];
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [i_3] = var_0;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_17 = (arr_13 [i_3 + 1]);
                                var_18 = (min(var_18, (((-(var_12 | 165801250))))));
                                var_19 += ((var_6 ? 51335 : 2147483642));
                                arr_22 [4] [i_2] [i_3] [i_3] [i_3] [i_4] [i_5] = (236 ? 1 : (arr_20 [i_3 + 1] [i_3] [2] [i_4] [i_4 + 1]));
                            }
                        }
                    }
                    var_20 = (min(var_20, 1));
                    arr_23 [i_3] [i_2 - 1] [i_3] [i_3] = (arr_9 [i_2 + 1] [i_3]);
                }
            }
        }
        arr_24 [i_1] = ((var_7 ? 14195 : (arr_6 [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = (arr_26 [i_6 + 2] [i_6 + 1]);
        var_21 += (arr_27 [i_6 + 2]);
    }
    var_22 = (max(var_22, (((14202 >= ((max(32, 46463))))))));
    var_23 *= (((((((!var_2) ? var_8 : ((max(var_5, var_0))))) + 2147483647)) << (19058 - 19058)));
    #pragma endscop
}
