/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((-(arr_0 [18] [i_2])));
                    var_14 = (arr_6 [i_0] [2] [5] [13]);
                }
            }
        }
    }
    var_15 = (max(var_15, var_5));
    #pragma endscop
}
