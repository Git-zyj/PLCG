/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((!(arr_0 [i_0])));
        var_16 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_17 = (((arr_0 [i_1 - 1]) + ((14 ? (arr_3 [7] [i_1]) : 241))));
        var_18 = (241 * -1);
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_19 = (((((var_4 + (arr_6 [i_2 + 1])))) ^ (213 + 3647787779)));
        arr_7 [i_2] [i_2] = (((((arr_2 [i_2]) % (arr_2 [i_2]))) == (arr_2 [i_2])));
        arr_8 [i_2] = max((((!(arr_1 [i_2 - 1] [i_2 - 1])))), 136);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                var_20 ^= ((((((arr_12 [i_4 - 1] [6] [i_4 + 2]) ? (arr_12 [i_4 - 1] [10] [i_4 + 2]) : (arr_12 [i_4 - 1] [6] [i_4 + 2])))) || ((14 && (var_6 || 14)))));
                arr_13 [i_4] [i_4] = ((((((!var_0) < (arr_11 [i_3])))) * (1 + 15)));
                var_21 = (min(var_21, (((18 / (min((arr_12 [1] [6] [i_3]), ((-244495273 ? -6880748171951262719 : -1467224038)))))))));
                arr_14 [i_4] [i_4 + 1] = 240;
            }
        }
    }
    #pragma endscop
}
