/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2 - 1] = ((max((arr_5 [i_2 - 3] [6] [10] [i_2]), (arr_5 [i_2 + 2] [19] [i_0] [19]))));
                    var_18 = (arr_2 [i_0]);
                    var_19 = (min((arr_5 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 - 4]), 1208468770991613100));
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
