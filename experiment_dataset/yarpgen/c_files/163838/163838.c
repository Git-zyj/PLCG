/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8367;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(1381428165, 152));
                arr_7 [i_0] [i_0] = (((0 ? ((min(160, 165))) : 1)));
            }
        }
    }
    var_18 = (((max(1, (!var_12))) * var_1));
    var_19 = (((((max(var_10, var_16)))) && (!var_10)));
    #pragma endscop
}
