/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (var_11 / var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((115909711 && 1401906164974685723) ? (min((arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 1]), var_6)) : ((min(42, 8740137327096379869)))));
                arr_6 [i_0] = ((((!var_2) ? (14849880132481256817 && 54) : var_11)));
                var_15 = (min((arr_3 [i_0 - 3] [i_1] [i_1]), ((((arr_1 [i_0 + 1]) && (var_2 % var_7))))));
            }
        }
    }
    #pragma endscop
}
