/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 8101969203424826999;
        var_20 = ((var_0 ? 0 : (max(0, (arr_2 [i_0])))));
        var_21 *= ((((min(((-22653 ? 1616731786 : -6508)), 122))) && 14150));
        arr_4 [i_0] [i_0] = (((--1) ? (((arr_0 [i_0]) ? var_0 : ((var_10 / (arr_2 [i_0]))))) : (max(var_10, ((max(-14264, var_12)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            {
                arr_10 [i_1] = (i_1 % 2 == 0) ? ((((((max(var_12, var_8)))) >> (((arr_9 [i_1] [i_1] [i_1]) - 15612))))) : ((((((max(var_12, var_8)))) >> (((((arr_9 [i_1] [i_1] [i_1]) - 15612)) + 22843)))));
                var_22 = (max(var_22, ((max((((var_8 ? ((-(arr_7 [i_2] [i_2] [i_2]))) : ((var_2 / (arr_6 [i_1])))))), -27)))));
            }
        }
    }
    #pragma endscop
}
