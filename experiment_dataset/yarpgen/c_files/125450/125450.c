/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_2 [i_1]);
                arr_6 [i_0] [i_0] [i_1] = ((((((((var_9 ? var_7 : 3409451247))) ? 8765924393738446419 : (arr_0 [i_1 - 1] [i_1 - 1])))) ? (min((((arr_2 [i_1]) ? (arr_1 [i_0]) : var_3)), (max(3409451265, (arr_3 [i_1] [i_1]))))) : ((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1 + 1]))))));
            }
        }
    }
    var_12 = var_11;
    var_13 = ((1 ? 885516049 : 885516048));
    var_14 = var_1;
    var_15 = (min((~var_2), ((((max(var_11, var_0)) & var_0)))));
    #pragma endscop
}
