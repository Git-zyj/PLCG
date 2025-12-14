/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] [i_1] = (arr_0 [4]);
                arr_6 [i_0 + 2] = ((((((!(((~(arr_3 [i_0 - 1])))))))) != (min((arr_0 [i_1 - 1]), 587768486))));
            }
        }
    }
    var_11 = var_2;
    #pragma endscop
}
