/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((!(((9347295869295121053 ? var_7 : var_4)))))), var_9));
    var_11 = ((((((((59 ? var_7 : 9347295869295121022))) ? (235 * 51336) : 7393))) ? var_5 : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = var_1;
                                arr_13 [i_0] [i_3 - 2] [10] [i_1] [i_0] = (max(var_4, (max(var_1, 2241185869791047806))));
                                arr_14 [i_4] &= ((!((max(1959745565, 9347295869295121048)))));
                                var_13 += (arr_7 [i_1 + 1]);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_14 = (+(((~var_6) ? (((max((arr_10 [i_0] [i_0] [i_2]), (arr_16 [10] [10] [i_0]))))) : (arr_0 [i_1 - 1] [i_0]))));
                        var_15 = (!9347295869295121053);
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_16 ^= ((!((min(((224 ? (arr_9 [i_1] [i_2] [i_1] [i_0] [i_0]) : 39)), (arr_15 [i_6 - 2] [i_6] [i_6] [i_1 + 1]))))));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_17 = (max(var_17, (+-1)));
                            var_18 = (((((arr_0 [i_1 + 1] [i_0]) + (arr_0 [i_1 + 2] [i_0]))) & (((((arr_8 [i_0] [i_1] [i_1 - 1] [i_6 + 2] [8] [i_6]) != (arr_11 [i_0] [i_1] [i_6 - 1] [i_1 + 1] [i_0])))))));
                        }
                        var_19 += var_6;
                    }
                }
            }
        }
    }
    var_20 = -49;
    #pragma endscop
}
