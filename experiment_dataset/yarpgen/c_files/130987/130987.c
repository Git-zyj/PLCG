/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-1 ? 246 : -29);
    var_19 = (max(var_19, var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [5] [i_0] [i_1 - 2] = ((((max(15, -15132))) - ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10)))));
                arr_5 [i_0] = var_2;
            }
        }
    }
    var_20 = 15105;
    #pragma endscop
}
