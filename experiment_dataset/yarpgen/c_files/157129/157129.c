/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157129
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
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((!((((!508) ? (arr_7 [i_0] [i_2] [i_2 + 2] [i_1]) : 1)))));
                    var_19 -= ((max((arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1]), (arr_7 [i_2 + 2] [i_2 - 1] [1] [i_2 - 1]))) / (8737 | var_17));
                }
            }
        }
    }
    var_20 = var_9;
    var_21 = (!var_5);
    #pragma endscop
}
