/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-77 > var_14);
    var_21 = (~var_7);
    var_22 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (!-77);
                arr_5 [i_1] [i_1] = var_4;
                var_23 = ((((max(((-78 ? (arr_3 [i_1 - 1]) : 30868)), -77))) ? (max((arr_1 [i_1 + 1]), (((arr_2 [i_1] [i_1]) ? var_4 : 13)))) : (arr_1 [i_1])));
                arr_6 [i_1] = (((((+(((arr_1 [i_0]) ? -64 : var_16))))) ? 32704 : -73));
            }
        }
    }
    var_24 = ((var_10 < (!var_9)));
    #pragma endscop
}
