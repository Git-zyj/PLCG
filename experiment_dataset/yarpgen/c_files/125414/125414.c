/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 19));
    var_15 = (max(var_15, 8223070730583577648));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 2132563036161182614));
                var_17 += var_10;
                var_18 = (min(var_18, (arr_4 [22])));
            }
        }
    }
    var_19 |= 1;
    #pragma endscop
}
