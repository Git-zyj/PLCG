/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(~196)));
    var_13 = (min(17511880075034497259, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((~(~650909574)));
                var_15 = ((59782 ? 10608010529412445012 : 230080010764117095));
            }
        }
    }
    var_16 = (max(var_16, var_0));
    #pragma endscop
}
