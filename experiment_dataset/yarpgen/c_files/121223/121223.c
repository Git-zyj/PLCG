/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 10242;
    var_12 += ((((max((min(var_6, 48312)), var_6))) ? var_2 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (!48317);
                var_14 = ((var_4 ? (((var_0 + 2147483647) >> (55277 - 55273))) : 55321));
            }
        }
    }
    var_15 = -1137901458;
    #pragma endscop
}
