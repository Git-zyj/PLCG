/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [1] = -var_7;
                var_20 = 2194819054;
                arr_8 [i_0] [i_1] = (min(-1387142916, 4294959104));
            }
        }
    }
    var_21 = (min(1, 4));
    var_22 = ((!((((!var_12) ? (min(var_6, 1)) : var_3)))));
    #pragma endscop
}
