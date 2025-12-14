/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = -104;
                var_17 = min(((max((((1799820698587478496 || (arr_0 [i_0] [i_0])))), (min(var_4, 19847))))), var_16);
            }
        }
    }
    var_18 = (min(var_18, var_10));
    #pragma endscop
}
