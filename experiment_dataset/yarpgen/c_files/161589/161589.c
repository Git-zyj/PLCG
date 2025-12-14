/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!((min(var_14, 129)))))) >> (max((var_10 >= 13809), (var_11 & 1147)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] |= ((64388 ? 64411 : (arr_0 [i_0])));
                var_20 *= (((1466647040 ? (max(204522652635831035, (arr_1 [i_0]))) : (var_5 % 64389))));
                var_21 = ((1147 ? (((var_17 ? 64397 : var_2))) : (1147 ^ 2133390120)));
            }
        }
    }
    #pragma endscop
}
