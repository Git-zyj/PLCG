/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_17 ? var_18 : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = (min((min((var_15 - var_10), (~9139402236421166174))), ((((arr_1 [i_1 - 4]) || (arr_1 [i_1 + 1]))))));
                            var_21 = (max((((!((max(var_11, 968425789)))))), ((+(max((arr_5 [i_0] [i_1] [i_2] [i_0]), 49152))))));
                        }
                    }
                }
                var_22 = (min((((arr_6 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 - 2]) ? var_17 : var_10)), var_10));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = -6991868496566870085;
                                var_24 = (min(var_24, (arr_9 [i_6] [i_5] [i_1])));
                                var_25 = ((((var_4 * (231652860 / 17515225772549417295))) < ((((~-1075098261695691742) ? (max((arr_6 [i_0] [i_0] [i_0] [i_1] [i_0]), 3864950817)) : -968425789)))));
                                arr_16 [i_0] [i_1] [i_4] [10] [i_6] &= ((((min(((~(arr_3 [i_0] [i_0]))), (16405 < 65535)))) ? (arr_8 [i_5]) : (~4294967294)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_26 = (~430016464);
                                var_27 = var_4;
                                arr_27 [i_9] [i_1] = var_17;
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] [i_7] = (min((arr_4 [i_0] [i_1] [i_7] [i_1 - 2]), (23979 != -29918)));
                            }
                        }
                    }
                }
                arr_29 [i_0] [i_0] [i_0] = (min(var_15, (((-(((arr_26 [i_0] [i_0] [i_1]) ? (arr_11 [i_0] [i_0] [i_1] [i_1]) : var_8)))))));
            }
        }
    }
    var_28 = (12 & 968425779);
    var_29 = var_17;
    var_30 = 968425788;
    #pragma endscop
}
