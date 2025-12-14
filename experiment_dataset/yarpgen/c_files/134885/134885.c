/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (204 % 191);
    var_17 &= (var_0 % 1);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [7] = (max(((((-(arr_1 [5] [i_0]))) ^ (arr_0 [13] [i_0 - 1]))), (((arr_1 [i_0] [1]) ? ((var_8 ? var_5 : 1)) : (var_14 | 168)))));
        arr_3 [5] [i_0] = (((arr_1 [i_0 + 1] [i_0 + 1]) / (max(-1274333783, -69))));
        arr_4 [i_0 - 1] [i_0] &= (max((((!(-2147483647 - 1)))), (min((arr_0 [i_0] [i_0 - 1]), 1200056588))));
        arr_5 [i_0 - 1] = (((((((((-2147483647 + 2147483647) << (arr_0 [i_0] [i_0])))) ? ((min(191, var_0))) : (arr_0 [i_0 - 1] [i_0 + 1])))) ? ((((((var_0 & (arr_0 [i_0] [i_0])))) ? var_9 : (~-821058843)))) : (((arr_1 [i_0] [i_0 + 1]) ? var_0 : ((var_13 ? var_3 : var_7))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_4] [4] [8] [i_1] = -4238737728358692477;
                        arr_16 [4] [i_4] [6] = (((!0) ? (arr_7 [i_3 + 2]) : ((((max(14, -1274333783))) ? (((30151 ? 763153778 : -763153774))) : (((arr_6 [i_2]) - 395414631))))));
                        arr_17 [i_2] [i_1] [i_2] = ((~(((arr_11 [i_1] [i_1] [i_3 - 2] [4]) ? (arr_14 [i_3 + 4] [i_3 + 4] [i_1]) : (arr_14 [i_3 + 1] [i_3] [i_1])))));
                    }
                }
            }
        }
        arr_18 [1] [i_1] = ((1 ? (8188 / -1) : -763153759));
        arr_19 [i_1] = ((((((0 > (arr_1 [1] [1]))) ? (~var_4) : -395414631)) ^ var_7));
    }
    var_18 = ((((max(var_3, (-2147483630 / var_3)))) ? (((var_3 ? var_7 : var_5))) : 763153779));
    #pragma endscop
}
