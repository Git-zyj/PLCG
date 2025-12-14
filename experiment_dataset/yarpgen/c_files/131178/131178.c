/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_2 [4] [4]);
                var_13 = ((-(min((arr_1 [i_0]), (max(7982678763473058663, 38932))))));
            }
        }
    }
    var_14 = (max(var_5, 0));
    var_15 += 4193280;
    #pragma endscop
}
