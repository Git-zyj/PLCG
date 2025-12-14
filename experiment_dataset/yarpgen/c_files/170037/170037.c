/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [22] [i_1] [22] = min((max(((min((arr_2 [i_0] [i_1 + 2] [i_0]), 133))), (((arr_4 [5] [i_1 + 2] [i_1]) ? 123 : (arr_1 [i_0]))))), var_13);
                    arr_7 [i_0] [i_1] [i_2] = var_3;
                }
            }
        }
    }
    var_15 = 214;
    #pragma endscop
}
