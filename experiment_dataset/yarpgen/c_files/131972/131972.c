/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((((~(min(65534, 140737488355327))))) ? 56899 : 8652));
                    var_20 -= ((!((min(761767885, (arr_5 [i_2 - 4] [i_2 + 2] [i_2 - 2]))))));
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
