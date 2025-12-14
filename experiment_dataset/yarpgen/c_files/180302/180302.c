/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~12256);
    var_11 = (min(var_11, var_4));
    var_12 = 18446744073709551596;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = min(((var_8 ? ((53276 ? var_4 : 3771518918642821741)) : (arr_1 [i_1]))), (arr_0 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = ((~((18446744073709551615 ? ((var_5 ? 2651907178 : var_5)) : (((min((arr_7 [i_0] [i_2] [i_0] [i_0]), (arr_1 [i_1])))))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = (var_6 | (((((4344100222827920106 ? (arr_13 [i_0] [i_0] [2] [i_3] [i_0] [4]) : (arr_7 [i_0] [i_1] [4] [i_3])))) % (((arr_4 [i_0] [i_1] [i_2] [i_2]) ? 7447444270281953514 : (arr_8 [i_0] [i_2] [i_3] [i_4]))))));
                                var_14 = var_6;
                            }
                            var_15 = (max(var_15, (((!(((((-3771518918642821746 ? 1 : (arr_0 [i_3])))) || ((max((arr_11 [i_0] [i_0] [i_3]), (arr_12 [1] [i_0])))))))))));
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_1] [i_1] = var_5;
                    arr_20 [i_0] [i_1] [i_1] [i_5] = ((((max((arr_4 [i_0] [i_0] [i_1] [i_5 + 1]), var_0)))) ? (arr_18 [i_5]) : (((((var_2 ? var_1 : var_5))) ? var_0 : (arr_13 [7] [7] [i_0] [i_1] [i_1] [i_5]))));
                    var_16 = var_2;
                    var_17 = min((((var_7 == (((arr_6 [i_1] [i_1]) ? var_8 : (arr_11 [i_1] [i_1] [i_5])))))), (~1));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_18 = (var_0 ? (((arr_14 [i_6] [i_0] [i_0]) ? (arr_5 [i_0]) : var_1)) : var_9);
                    arr_25 [i_6] [i_6] [i_1] = ((arr_8 [i_6] [i_1] [i_0] [i_0]) | (18014398509481983 || 3690323366));
                }
            }
        }
    }
    #pragma endscop
}
