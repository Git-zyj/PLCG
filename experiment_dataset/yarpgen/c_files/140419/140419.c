/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (min(var_15, ((((((~(~0)))) ? (var_1 / 248) : (((252 ? 4294967044 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min((arr_4 [i_1 - 1] [i_0 - 1] [i_0]), ((0 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_5 [18] [i_1 + 1] [i_0 + 4]))))))));
                var_17 = (max(var_17, ((((((arr_0 [i_0 + 3]) >= (arr_3 [i_0 + 4]))) ? (min(0, (arr_2 [i_0]))) : (arr_6 [i_0] [24] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
