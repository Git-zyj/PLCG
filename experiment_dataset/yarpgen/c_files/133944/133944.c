/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(-1984287743 & -1984287743))) | ((((min(-19291, 0))) ? var_11 : (min(-1984287715, 32756))))));
    var_19 = -32757;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = ((((~(var_4 == 66))) ^ 1));
                var_21 = ((~(((((254 ? 32756 : 254))) | (arr_5 [i_0] [i_0] [7])))));
            }
        }
    }
    var_22 = 32758;
    #pragma endscop
}
