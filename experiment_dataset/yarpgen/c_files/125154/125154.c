/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((var_7 ? ((min((225 <= 105), (min(150, 51952))))) : (var_9 - var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 -= ((min(var_4, (arr_2 [i_0 + 2] [i_1 - 1]))) <= 110);
                arr_4 [i_0] = (min(-120, (max(var_13, (var_3 * var_5)))));
            }
        }
    }
    #pragma endscop
}
