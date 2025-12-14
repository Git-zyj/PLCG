/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_13 += (arr_3 [i_0] [i_1] [i_1]);
                arr_6 [i_0] [i_1] = -1;
            }
        }
    }
    var_14 = (((min(var_0, (var_5 - 0)))) ? ((((max(var_3, var_3))))) : (((min(var_12, var_5)) + (((min(var_11, var_2)))))));
    #pragma endscop
}
