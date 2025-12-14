/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? (((((((var_5 ? var_4 : var_2))) >= ((var_5 ? 35184372088831 : var_5)))))) : var_9));
    var_11 = (min(1652790842, (min((-7487235690989027339 <= var_8), var_4))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_2 [5]);
                arr_6 [0] [i_1] [0] = ((max((((arr_4 [i_0] [i_0 - 2]) ? (arr_1 [i_0]) : -10916)), -366656097)));
            }
        }
    }
    var_12 = var_2;
    #pragma endscop
}
