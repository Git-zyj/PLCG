/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [3] = ((((((arr_4 [i_0] [8]) ? var_3 : (arr_4 [i_0] [i_1])))) <= 2374532955872642014));
                arr_6 [i_0] [i_1] = var_5;
            }
        }
    }
    var_13 = var_3;
    var_14 -= ((min(((173 << (var_10 - 29946)), ((var_7 ? var_8 : var_0))))));
    #pragma endscop
}
