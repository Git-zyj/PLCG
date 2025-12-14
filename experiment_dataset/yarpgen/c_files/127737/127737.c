/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(((var_5 ? -7986 : var_13)), 19256));
                var_17 = ((-((((!var_8) || var_11)))));
            }
        }
    }
    var_18 = ((((max((~3042568706), (var_0 ^ 7998)))) * (max((max(var_7, var_5)), (255 * 246)))));
    var_19 &= var_12;
    #pragma endscop
}
