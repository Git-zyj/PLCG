/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-32763 && var_15);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = min(((max(var_10, (arr_4 [i_0] [i_1] [i_1])))), var_13);
                arr_5 [i_0] = (max((max((arr_4 [i_1 - 1] [i_1 - 1] [i_0 + 2]), (arr_4 [i_1 - 1] [i_1 - 1] [i_0 + 4]))), (arr_4 [i_1 - 1] [i_1 - 1] [i_0 - 3])));
            }
        }
    }
    #pragma endscop
}
