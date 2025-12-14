/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((~(((arr_5 [i_0 + 2]) - (arr_5 [i_0 - 1]))))))));
                    arr_9 [9] [i_0] [i_2] = (arr_3 [i_0]);
                }
            }
        }
    }
    var_12 = (var_4 != var_10);
    #pragma endscop
}
