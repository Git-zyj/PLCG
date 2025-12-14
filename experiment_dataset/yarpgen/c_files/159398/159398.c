/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 ? ((65519 ? 16 : 2147483647)) : var_14));
    var_18 = (min(var_18, ((max(((max(var_6, var_1))), ((((min(var_0, 2))) ? ((min(6, -1757178848))) : 18446744073709551606)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 *= 25477;
                var_20 = 25;
            }
        }
    }
    #pragma endscop
}
