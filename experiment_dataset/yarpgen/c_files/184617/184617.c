/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((var_11 ? 1171 : (arr_0 [i_0 - 1]))), 1259060366));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 *= ((((((-(arr_14 [i_0] [i_1] [i_2] [9] [9]))))) | (((max((arr_1 [i_0] [i_0]), (arr_1 [i_2] [i_4])))))));
                                var_19 -= (((((((min((arr_7 [i_0] [i_1] [i_2]), var_0))) - (((arr_0 [i_1]) ? 1259060366 : (arr_14 [i_0 - 1] [i_1 + 1] [1] [i_3] [i_4])))))) ? (arr_9 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1]) : (((((max(var_9, var_10))) || (~0))))));
                                arr_15 [i_2] [i_0] = (77 >= 2147483647);
                            }
                        }
                    }
                    var_20 += 640;
                }
            }
        }
        var_21 ^= ((((((arr_12 [i_0 - 1] [i_0 - 1] [6] [6] [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 - 1]) : -626693449))) ? var_9 : var_0));
        arr_16 [i_0] = (max(((((37882 <= 0) ? ((13841 >> (13621466672732986126 - 13621466672732986108))) : (arr_5 [i_0] [i_0] [12])))), 3237529963));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 += ((23739 ? 16498 : 1259060366));
        var_23 = ((!65515) && ((!(arr_18 [i_5] [i_5]))));
        var_24 = (max(((var_14 ? (~1) : 54875)), ((((max(13962, 49339))) >> (((255 & var_9) - 36))))));
        var_25 ^= (arr_17 [8] [i_5]);
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        arr_21 [i_6] = ((~(min((~49339), ((var_1 >> (arr_20 [i_6])))))));
        arr_22 [i_6] = (min((((((~var_13) + 2147483647)) >> (((var_7 + 2147483647) >> (var_13 - 32097))))), ((max(var_10, ((max(var_6, (arr_17 [i_6 - 2] [4])))))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_26 = var_6;
        var_27 = (max(var_27, -1805230861));
        var_28 = 21321;
    }
    var_29 = (min(var_13, ((0 ? (1 + 127) : ((max(var_2, 18331)))))));
    var_30 |= (max((~-25480), ((min(-106, 0)))));
    var_31 = ((((((((max(var_13, 49339)))) | var_16))) ? 46311 : ((max(var_1, var_13)))));
    #pragma endscop
}
