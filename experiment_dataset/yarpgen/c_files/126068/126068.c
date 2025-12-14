/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((((!(((1 | (arr_3 [8]))))))));
                arr_5 [1] [i_0] = ((((min(var_7, var_3))) / -6632));
                arr_6 [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_1]) * (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 -= ((2554817262 ? 1 : 1));
                            arr_11 [i_0] [18] [i_0] [i_2] [i_3] = (5 && -6822521116520663382);
                            arr_12 [i_0] [i_1] [i_1] [i_1] [15] [2] = (~(((((var_6 ? (arr_2 [i_0] [i_3]) : (arr_10 [19] [i_1] [17] [i_2] [i_0] [i_0])))) ? (16840929356678428174 <= 3585539119106900353) : (((!(arr_8 [9] [1] [i_3])))))));
                            var_16 |= ((((var_13 ? (9223372036854775807 / 112) : (arr_7 [i_3] [15] [i_1] [i_0]))) * ((512 / (max(1904406850882372317, (arr_10 [0] [i_1] [12] [i_2] [i_1] [16])))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    var_18 -= (max((((!19) >= var_1)), (min((var_7 <= 127), (!var_14)))));
    #pragma endscop
}
