/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-(!var_4)))) / (min(99, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((18446744073709551615 ? 2936800561792898842 : 2820693504081475931)))));
                var_22 = ((max((arr_2 [i_0]), var_0)));
            }
        }
    }
    #pragma endscop
}
