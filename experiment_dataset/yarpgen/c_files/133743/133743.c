/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551615;
    var_18 = (var_10 - 62);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (arr_2 [i_0])));
                var_20 = (21080 / -8599);
            }
        }
    }
    var_21 *= ((var_13 ? ((((var_2 ? var_3 : var_6)) << (var_9 - 17990))) : var_10));
    var_22 *= var_4;
    #pragma endscop
}
