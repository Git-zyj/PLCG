/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_3 + 0) ? (((25 ? (-2147483647 - 1) : -29))) : var_11)) < var_6));
    var_15 = (min(((max(var_4, (min(7874300889656955534, 2147483647))))), (min(var_2, var_12))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((!(((-(arr_6 [i_0] [i_1]))))));
                var_17 = (arr_6 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
