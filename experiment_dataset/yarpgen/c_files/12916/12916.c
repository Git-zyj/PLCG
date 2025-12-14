/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-3959, 0));
    var_21 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((max((arr_8 [i_0 - 1] [15]), var_2))) && (arr_2 [i_0 - 1] [2])));
                    var_22 = -7770705900456602682;
                }
            }
        }
    }
    #pragma endscop
}
