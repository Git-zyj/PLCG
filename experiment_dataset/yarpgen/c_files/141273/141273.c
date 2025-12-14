/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((((+(((-2147483647 - 1) + -2635251874256776311))))) ? (~var_8) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((((((arr_0 [i_0]) ? var_2 : (arr_3 [i_1] [i_1 - 1]))))) && (((((arr_3 [i_0] [i_1]) && var_7))))));
                arr_6 [i_0] [i_0] [i_0] = ((((((24808 / -25346) ? 2635251874256776310 : ((2635251874256776338 ? (arr_2 [i_0] [i_0]) : -2635251874256776307))))) ? (arr_1 [i_0] [i_0]) : (min((((arr_1 [i_0] [i_0]) ? 1689735730 : (arr_4 [i_0] [i_0] [i_1]))), (((!(arr_0 [i_1]))))))));
                arr_7 [i_0] = var_9;
                var_11 = (min((((((-(arr_1 [i_0] [i_1 - 1])))) ? (max((arr_2 [i_1] [i_1]), var_2)) : var_6)), var_2));
                var_12 = (min(var_12, ((max(-2635251874256776316, 1)))));
            }
        }
    }
    #pragma endscop
}
