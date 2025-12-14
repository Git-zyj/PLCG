/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((32760 / var_8) / (((var_2 ? (-2147483647 - 1) : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_12 &= ((min(var_8, (arr_1 [i_0]))));
                arr_5 [i_1] [i_1] = ((!(((var_8 ? (((min((arr_0 [i_1]), (arr_4 [i_1]))))) : (max((arr_3 [i_0] [i_0]), (arr_0 [i_1]))))))));
            }
        }
    }
    var_13 = ((((max(32, -1775536398626550078))) ? var_5 : -12));
    #pragma endscop
}
