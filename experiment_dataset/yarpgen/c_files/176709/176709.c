/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((!(117 & var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (((min(1095588188, (arr_7 [i_4] [i_4 + 1] [i_1 - 2] [i_1 - 2]))) >> (var_9 - 5523)));
                                var_20 = ((((arr_6 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3]) | 7350)));
                                var_21 |= (min(var_9, ((((!(arr_11 [i_4] [i_3] [i_1] [i_1] [i_0]))) ? ((var_15 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 101)) : (!5891764281104168996)))));
                            }
                        }
                    }
                    var_22 *= (((((-1984765630 ? 2706013249048847091 : var_6))) ? 20600 : ((-31688 - (arr_3 [i_0] [i_1 - 1] [i_0])))));
                    arr_13 [i_1] = (i_1 % 2 == 0) ? ((min(((((arr_9 [i_1]) >> (var_5 - 13463876878941372812)))), ((((~var_0) ? (~var_8) : (((arr_6 [i_0] [i_1] [18] [i_0]) ? var_10 : var_7)))))))) : ((min(((((((arr_9 [i_1]) + 2147483647)) >> (var_5 - 13463876878941372812)))), ((((~var_0) ? (~var_8) : (((arr_6 [i_0] [i_1] [18] [i_0]) ? var_10 : var_7))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 = (min((((((arr_11 [i_0] [i_1] [i_2] [13] [13]) ? var_15 : (arr_15 [i_6] [18] [i_2] [i_1] [i_1] [i_0]))) > (arr_2 [14] [1]))), ((var_15 >= (~7339)))));
                                arr_20 [i_1] [5] [i_2] [i_5] [i_6] = (max(((((min(1095588188, 356061305))) ? ((var_11 ? var_9 : var_5)) : (arr_14 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_1 - 2]))), (~var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
