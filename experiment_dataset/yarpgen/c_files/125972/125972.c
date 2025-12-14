/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (min(var_3, -var_10));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (max((((arr_1 [i_0] [i_1 + 1]) ? (arr_4 [i_0 - 1] [i_0] [i_1]) : (arr_3 [i_0 + 2] [i_1 + 1]))), 114));
                var_15 = (max(var_15, ((max((((!10798) ^ (max(32765, (arr_5 [8] [i_1]))))), (((((-32763 | (arr_0 [i_1])))) ? (arr_5 [i_0] [i_1]) : (164 / 3))))))));
                var_16 = ((min((((arr_0 [i_0 - 1]) ? 1 : (arr_0 [i_1]))), ((min(-24529, 32750))))));
            }
        }
    }
    #pragma endscop
}
