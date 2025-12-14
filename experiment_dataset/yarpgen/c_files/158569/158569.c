/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((max(((var_1 >> (1552063109 - 1552063094))), (var_3 > var_8)))) ? ((((~(arr_2 [i_0] [i_0]))))) : ((((arr_4 [i_0] [i_1]) > (0 > 0))))));
                var_14 = (((((0 ? 0 : -13))) ? ((max(16776192, 25))) : ((max((arr_5 [i_0] [i_1] [i_0]), 1748462690)))));
                var_15 ^= (max(5, ((~((-1 ? 8168082911837843336 : 1))))));
                arr_7 [i_0] [i_0] = (((10278661161871708280 & -1) ? (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (~1))) : (4258755264187755914 | 39615)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_16 = ((((~(~var_10))) / ((min(12, (var_10 || var_12))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 = (~var_8);

                            for (int i_6 = 1; i_6 < 18;i_6 += 1)
                            {
                                var_18 ^= (((((arr_17 [i_4] [i_4] [i_6 + 1] [i_4] [i_4]) ? (arr_17 [i_6] [i_6] [i_6 + 2] [i_6] [i_6]) : var_2)) % (7376099396522320735 && 15041958326242698508)));
                                var_19 ^= -1829182759;
                                var_20 = (0 <= 34141);
                                var_21 -= (((((min((arr_12 [i_3] [i_3]), var_12)) > ((~(arr_18 [i_5]))))) ? (arr_17 [i_3] [i_6 + 2] [i_3] [i_6 - 1] [i_6 + 1]) : -var_8));
                            }
                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                var_22 *= ((min((arr_14 [i_2] [i_2] [i_2]), var_4)));
                                var_23 = ((~(((arr_19 [i_2] [i_7]) / (min(1989620697, 23403))))));
                            }
                            for (int i_8 = 2; i_8 < 19;i_8 += 1)
                            {
                                var_24 = (max(var_24, ((min(((~(arr_9 [i_8 - 1]))), (arr_9 [i_8 - 2]))))));
                                var_25 = (min((min((~var_1), 56366)), ((((var_11 ? var_0 : (arr_11 [i_2] [i_2] [i_8 - 2])))))));
                            }
                            arr_25 [i_2] [i_2] = var_3;
                        }
                    }
                }
            }
        }
    }
    var_26 = ((var_6 ? ((min(var_1, (var_13 == var_2)))) : 1));
    var_27 ^= var_12;
    #pragma endscop
}
