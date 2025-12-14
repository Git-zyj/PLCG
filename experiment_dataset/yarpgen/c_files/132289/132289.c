/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (+-1310174561)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max((((0 ? 15728640 : 95))), (!15728661)));
                var_22 = (((-15728645 % var_9) / ((max((!var_16), var_0)))));
                var_23 = (min(var_23, (((((!(var_6 || 0))) ? ((((-15728626 + 2147483647) << (18446744073709551615 - 18446744073709551615)))) : var_19)))));
            }
        }
    }
    var_24 &= (var_5 && (~0));
    var_25 &= (~var_14);
    #pragma endscop
}
