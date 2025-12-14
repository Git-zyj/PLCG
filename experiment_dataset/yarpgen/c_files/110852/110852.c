/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(var_6, (min((max(1, -5023783648297361276)), var_2))));
                var_18 = (min((max(-75, 1)), var_5));
            }
        }
    }
    #pragma endscop
}
