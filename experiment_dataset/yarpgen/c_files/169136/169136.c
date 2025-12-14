/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(var_14 <= 4672177179471818499)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                    var_22 = (max(var_22, ((((((arr_7 [i_2] [i_2] [i_1 + 2] [i_1 + 1]) ? (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2]) : (arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1]))) != (arr_7 [i_2] [i_2] [i_1 + 2] [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
