/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max(var_1, (max(var_0, (var_4 | var_12))))))));
    var_21 = (max(var_21, (((var_8 == (-var_7 != -0))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (max(1, (max(1, var_12))));
                var_22 = (max(var_22, ((max((((((max(var_18, (-127 - 1)))) ? var_12 : (max(var_3, (arr_4 [i_1] [14])))))), (((56265 ^ 3307399503235026105) ? (((var_18 ? var_0 : var_3))) : (~3307399503235026094))))))));
                var_23 -= var_4;
            }
        }
    }
    #pragma endscop
}
