/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~-13119188139279306412);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = (var_8 | var_6);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 = 5327555934430245213;
                        arr_11 [i_0] [i_0] [i_1] [1] [i_3] = -var_3;
                        arr_12 [1] [1] [1] [i_0] = (((~var_10) != (~13119188139279306402)));
                        arr_13 [i_3] [i_3] [1] [8] [i_0] = var_2;
                    }
                }
            }
            arr_14 [i_0] [i_1] = (6211739182005559082 * var_4);
            arr_15 [i_0] [i_1] [i_1] = (5327555934430245197 & (25424 & var_0));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_13 -= (((13119188139279306412 < 13119188139279306403) || (var_6 == -6211739182005559052)));

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_23 [i_4] [i_4] = ((5327555934430245217 ? 1653 : 13119188139279306404));
            arr_24 [5] [i_5] = -var_8;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_14 = -var_0;

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_15 = (-1943894686 || 13119188139279306402);
                            var_16 = (min(var_16, ((((~5327555934430245214) < var_5)))));
                        }
                    }
                }
            }
            arr_33 [i_4] = ((var_1 ? var_4 : (var_1 != var_4)));
        }
        arr_34 [i_4] = (0 >> 1);
    }
    var_17 = (((~-6211739182005559052) ? var_7 : 13119188139279306399));
    #pragma endscop
}
