/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [0] |= (arr_0 [i_1]);
                var_19 *= (max(((((arr_0 [i_0]) >> ((((8 ? 1714318574 : 163)) - 1714318560))))), 0));
            }
        }
    }
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = (max(var_21, ((-((((max((arr_9 [i_2] [i_2]), 159)) < 38744)))))));
                var_22 = ((((((arr_7 [i_2 + 1] [i_2 + 1]) ? (arr_7 [i_2 + 1] [i_2 + 1]) : (arr_7 [i_2 + 1] [i_2 + 1])))) / var_9));

                /* vectorizable */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_23 = (arr_6 [i_2] [i_2]);
                    var_24 |= ((((0 ? 183 : -4742))) >= 81);
                    arr_15 [i_2] [i_2] = (arr_9 [i_2] [i_2]);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_25 = -3798;
                            arr_22 [i_2] [i_3] [i_5] [i_6] [i_2] [i_6] = (((var_2 ? 1734240049 : (arr_20 [i_2 - 1] [i_6 - 1] [i_6 - 1]))));
                            var_26 |= ((((max(((max(1, 1))), (max((arr_20 [7] [i_3] [i_3]), (arr_11 [i_6] [i_5] [i_3])))))) ? ((((min(var_9, (arr_19 [i_2] [i_3] [i_6] [i_2] [i_5] [i_5])))) ? (arr_19 [i_2] [13] [i_3] [i_3] [i_5] [13]) : 1)) : 1));
                            var_27 = (max((min((((-(arr_7 [i_3] [i_3])))), (arr_16 [i_2 + 1] [i_3]))), ((min((arr_14 [i_6 - 1] [i_5] [i_2] [i_2]), -1734240048)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
