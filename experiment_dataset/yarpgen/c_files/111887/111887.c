/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~3209195153);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (((arr_3 [i_1 + 1] [i_1 + 3]) || (arr_5 [i_1 + 1] [i_1 + 2] [i_1 - 1])));
                    arr_8 [i_1] = (arr_6 [i_2]);
                    var_12 = (-(arr_3 [i_1 + 1] [i_1 - 1]));
                    arr_9 [i_1] [23] [i_2] [i_0] = (arr_7 [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_13 = -1085772142;
        var_14 = (~39294);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_15 = ((~(((~var_0) ^ (min(var_1, (arr_1 [10])))))));
                    arr_16 [i_3] [i_3] = (min(((min(((var_10 ? var_6 : (arr_0 [i_3]))), (min(var_8, var_1))))), ((var_3 ? (arr_7 [i_4] [i_5]) : var_5))));
                    var_16 = (max((((var_5 & var_7) ? (((arr_10 [i_3]) ? var_5 : var_2)) : (arr_12 [i_3]))), ((min((~1085772142), ((var_3 ? var_8 : (arr_11 [18]))))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_17 = ((+((3209195153 ? (~95) : var_8))));
        var_18 = (max(var_18, ((min((max(var_5, ((var_8 ? 0 : var_4)))), var_0)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_19 = ((var_3 == (min((arr_4 [i_9]), (min(var_3, var_9))))));
                            arr_31 [i_8] = ((-(((!(!30))))));
                            var_20 = ((((min((((arr_14 [i_7] [i_7] [i_7] [19]) ? 2096640 : (arr_30 [i_10] [i_8] [6] [i_8] [i_7] [i_7]))), (((var_8 * (arr_18 [i_10] [i_7]))))))) ? 1085772142 : var_9));
                            var_21 = ((+((+(((arr_12 [i_9]) / var_2))))));
                        }
                    }
                }
                var_22 = var_9;
            }
        }
    }
    #pragma endscop
}
