/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((((3232716396 ? 9345117931551056071 : 3481785547))) && (~var_3)));
                var_14 = (min(var_14, ((((((var_1 << (((var_8 + 319160386) - 28))))) && (((-3517449794 ? (((var_2 >= (arr_2 [i_0] [i_1])))) : -107))))))));
            }
        }
    }
    var_15 = (max(var_15, var_8));
    var_16 |= 42355;
    var_17 = (-((-(var_3 > 1533332980))));
    #pragma endscop
}
