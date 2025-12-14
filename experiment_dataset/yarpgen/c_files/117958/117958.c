/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((arr_2 [1] [i_1] [i_1 + 3]) ? var_2 : (((var_2 ? (((arr_0 [i_1]) ? var_0 : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_1]))))));
                var_13 = (min(var_13, (((var_5 ? (((((15 ? 30259 : 30259))) ? var_0 : var_4)) : (((((35276 ? var_5 : var_7))) ? -var_9 : (arr_2 [i_1 + 3] [i_1] [i_1]))))))));
            }
        }
    }
    var_14 = 7400851333357736944;
    var_15 = (((((-(!var_3)))) ? -4545173879868400136 : var_5));
    #pragma endscop
}
