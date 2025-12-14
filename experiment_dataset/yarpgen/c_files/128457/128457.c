/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= 3053561435;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max((var_4 / var_8), (arr_5 [i_0] [i_1])));
                arr_6 [i_0] [i_0 - 2] [i_1] = ((-65535 <= (((!(arr_4 [i_0 - 1] [i_0 + 1] [i_1 + 2]))))));
            }
        }
    }
    #pragma endscop
}
