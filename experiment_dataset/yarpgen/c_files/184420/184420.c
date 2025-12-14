/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_9 ? 1103424138916387834 : 4)))));
    var_11 = ((!((((!var_6) * (0 > 8953119584956106253))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((((min(((1153857826 - (arr_0 [i_1]))), (arr_5 [i_0])))) ? (((arr_4 [i_0] [i_1]) - (arr_4 [i_1] [i_1]))) : ((((-3848901246348656190 ? 2194 : 8953119584956106253))))));
                var_13 = (((max((((var_5 ? var_8 : -3848901246348656187))), (~var_1))) ^ (((-((-497056221 ? 0 : var_5)))))));
            }
        }
    }
    #pragma endscop
}
