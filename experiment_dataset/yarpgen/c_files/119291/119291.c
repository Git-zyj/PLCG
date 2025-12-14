/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((65535 / var_3), (min((~-157028592), (var_6 > 4)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [1] [10] [9] = (arr_8 [i_0 - 1] [i_0]);
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((((max((max((arr_6 [1] [i_0] [i_2]), (arr_9 [12] [i_1] [i_2] [i_3 + 1] [i_4]))), 41173))) ? ((((((arr_3 [i_0] [i_0] [i_2]) ^ (arr_0 [6])))) ? 65525 : (((arr_9 [11] [i_1] [12] [12] [6]) ? (arr_7 [i_0] [i_4] [i_2]) : (arr_11 [i_0] [6] [i_0] [10]))))) : ((((((arr_1 [i_0] [i_0]) == 1076855398)) ? -106 : (((arr_9 [3] [i_1] [i_2] [i_3] [i_4 + 1]) ? 9 : var_8)))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_1] [i_1] = (max(((-((var_12 ? 32134 : 11)))), ((((1 ? (arr_11 [i_0 - 1] [i_0 - 1] [10] [i_1]) : (arr_2 [i_0]))) - ((var_12 ? 1697373532 : var_11))))));
            }
        }
    }
    var_17 *= ((((var_10 != ((var_11 ? var_14 : var_2)))) ? ((max(var_5, -32132))) : (((var_14 != (!var_7))))));
    var_18 &= var_3;
    #pragma endscop
}
