/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_3;
                var_14 &= ((~(max(((var_9 ? var_4 : (arr_3 [1] [i_1] [i_1]))), (((121 == (arr_4 [i_0] [i_0]))))))));
                arr_6 [i_0] [i_0] = ((((min(var_3, var_4) / var_9))));
                var_15 = var_11;
                var_16 = var_11;
            }
        }
    }
    var_17 |= max((min((!-106), var_3)), (((var_5 | (652 + var_11)))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5 - 1] = (((max((arr_9 [i_6 - 1]), (arr_9 [i_6 + 4]))) >> ((((arr_1 [i_6 - 1]) <= (min(var_7, (arr_9 [i_6]))))))));
                                arr_20 [i_6] [i_6] [i_4] [i_6] [i_2] = ((((var_3 * (max(var_4, (arr_9 [i_2 - 1]))))) / 652));
                                arr_21 [i_6] [i_3] [i_4 + 1] [i_6] [i_6] = (((-40 + 2147483647) << ((((((((min((arr_15 [11] [10] [10] [i_5] [i_6 + 3]), var_10))) - (var_10 && var_0))) + 62)) - 5))));
                                var_18 = (((min(((64220 ? 1316 : 2305843008945258496)), (!59377))) < (arr_14 [i_2] [i_2])));
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] [i_2 + 2] [i_2] = (arr_1 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
