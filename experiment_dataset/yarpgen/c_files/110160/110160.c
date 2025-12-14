/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_10 + 108);
    var_18 = ((((var_16 ? var_12 : var_6)) & (var_3 - -23990)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 = ((((max((min((arr_3 [i_0]), var_15)), (((-31914 && (-9223372036854775807 - 1))))))) ? (((arr_3 [i_0]) & (((!(arr_1 [i_0])))))) : (((!((min(var_6, var_3))))))));
                arr_5 [10] |= (10232 != -31914);
            }
        }
    }
    #pragma endscop
}
