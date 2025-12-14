/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((max((((18014398509481952 ? (arr_6 [i_0] [i_0] [i_2]) : var_5))), (var_1 | 17151397437139231433))) % ((((var_8 < (arr_0 [i_0]))))))))));
                    arr_10 [i_1] [i_1] [i_2] [i_1] &= 1295346636570320183;
                }
            }
        }
    }
    var_15 &= ((((max(var_1, var_3))) ? ((max(23, (232 == var_10)))) : (!var_2)));
    #pragma endscop
}
