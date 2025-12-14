/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 -= ((max((~-117), (max(var_12, 0)))));
                arr_5 [i_0] [i_0] = ((max(var_8, -306553858)) << ((((arr_0 [i_0]) <= -1131978843))));
            }
        }
    }
    var_14 = (min(var_14, -var_11));
    var_15 &= ((var_10 ? ((((((var_2 + 9223372036854775807) << (var_12 - 16053945636279427485))) == var_7))) : var_3));
    var_16 -= var_6;
    #pragma endscop
}
