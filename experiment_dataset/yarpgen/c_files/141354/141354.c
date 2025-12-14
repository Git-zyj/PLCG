/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [12] &= var_5;
                var_18 = (max((((arr_0 [i_0]) ? (max(var_8, 1535205395)) : (min(var_8, -1535205401)))), (((var_0 > (arr_3 [i_0 + 1]))))));
                arr_6 [i_0] [i_0] = ((var_2 ? (((((var_5 ? 519480294 : 1))) ? (-772522560802008052 / -1535205396) : (!var_13))) : (((2 | (((arr_2 [i_1]) ? (arr_3 [i_0 + 1]) : 1535205376)))))));
                var_19 = ((~(min(39, (arr_3 [i_0 - 1])))));
            }
        }
    }
    var_20 = -1421030359;
    #pragma endscop
}
