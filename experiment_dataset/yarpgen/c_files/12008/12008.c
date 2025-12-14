/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((var_1 ? -var_8 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_0] &= ((+(((~4294967295) ? (arr_9 [i_0] [i_2 + 1] [i_2] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (((!(arr_7 [i_2]))))))));
                                var_19 = ((((((arr_2 [i_1 - 2] [i_2 + 1]) / 1215394420)) * (((arr_8 [i_0] [i_0] [i_0] [i_0]) / var_11)))) << (((arr_6 [i_3] [i_2] [i_1 + 1] [i_0]) - 258933774)));
                                arr_13 [i_1] = 1;
                                var_20 *= ((arr_11 [i_0] [i_0] [i_0] [i_3 + 1] [i_4] [i_4] [i_2 + 1]) ? (min((arr_4 [i_1] [i_1 - 1] [i_1]), 1)) : (-1073741824 < -1));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, (((!((((!4038810107) ? var_1 : (var_12 / 1215394424)))))))));
                var_22 |= ((((max((arr_3 [i_0] [i_0]), ((var_12 ^ (arr_7 [i_0])))))) ? 1 : (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
