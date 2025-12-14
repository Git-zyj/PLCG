/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1 ? 1 : ((1 ? 13382010773249290759 : var_7))))) ? ((var_5 ? ((var_1 ? 13382010773249290764 : 13382010773249290776)) : var_2)) : -291923212));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min(((-((max((arr_0 [i_0 + 2]), 1))))), -0)))));
                var_16 = (max(var_16, (((max((arr_3 [i_0 - 1] [i_0 + 1]), 246119607))))));
                var_17 -= (min(((max(1, 1))), 1641307718));
                var_18 |= (min((arr_3 [i_0] [i_0 + 1]), 3697983735225084615));
            }
        }
    }
    var_19 += 1383542159;
    #pragma endscop
}
