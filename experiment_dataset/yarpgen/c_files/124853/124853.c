/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_5, ((var_5 ? (7796776713370670818 - 62) : var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [6] = -41563;
                    arr_8 [i_2] [i_1] [i_2] = (min(23972, 65526));
                    arr_9 [i_2] = (min(1, -1947484340));
                }
            }
        }
    }
    #pragma endscop
}
