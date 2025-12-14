/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 0;
    var_17 = (min(var_17, var_7));
    var_18 = (max(var_18, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, -26447));
                    var_20 += (min((arr_2 [2]), (-123 + var_2)));
                }
            }
        }
    }
    #pragma endscop
}
