/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? var_2 : (((((var_11 ? 20853 : var_0))) ? 6 : (((-62 ? 177 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((25 ? 52218 : 52218)))));
                var_14 = (max(var_14, ((((arr_2 [i_0] [i_1]) / (52218 ^ 3655514402106153012))))));
                arr_5 [i_0] [i_0] [i_1] = (((((~(~32)))) ? ((13300 ? 1 : 168)) : var_0));
            }
        }
    }
    #pragma endscop
}
