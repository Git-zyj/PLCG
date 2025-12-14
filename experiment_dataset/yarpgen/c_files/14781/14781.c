/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, 5554985149458365529));
                    var_19 = (!1640101607);
                }
            }
        }
    }
    var_20 = (min(var_20, var_12));
    #pragma endscop
}
