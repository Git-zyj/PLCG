/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (((arr_2 [12] [i_0]) ? var_11 : (((max(var_15, 0))))));
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_17 = (((((arr_2 [i_0] [6]) >= var_7)) ? (!var_2) : ((-3744 ? (arr_1 [i_0]) : (arr_0 [8] [i_0])))));
        var_18 = ((((((arr_1 [7]) - (arr_1 [i_0])))) ? ((var_7 ? var_0 : (arr_1 [15]))) : var_12));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_19 = var_10;

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_20 = (arr_6 [i_1 - 1]);
            arr_9 [i_1 + 2] [i_2] = max(((5086821439834998896 >> (((-127 - 1) - 4294967167)))), var_15);
            var_21 = ((0 ? 4741778741258510983 : 0));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_22 = 13704965332451040633;
            var_23 &= 0;

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_24 = (max((max(var_15, 0)), 37337));
                var_25 = 9004393857200373516;
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_5] = (arr_6 [i_1]);
            var_26 = (min(2225648895377858716, 871454688));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_27 = min(var_9, (471983664 && -28065));
                        arr_27 [i_1] [i_1] [i_7] [i_7] = var_1;
                    }
                }
            }
            var_28 = ((((((arr_24 [i_1 + 2]) <= var_6))) != (arr_24 [i_1 + 2])));
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_29 = (arr_20 [i_9]);
        arr_30 [i_9] [i_9] = (arr_2 [1] [i_9]);
    }
    var_30 = (!var_12);
    #pragma endscop
}
