/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max((var_18 / -27705), (-8412472479357209999 & var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [23] = ((min((~-3580256653665638142), (((!(arr_1 [i_0] [i_0])))))));
                var_21 = ((((((arr_7 [i_0] [i_0] [i_0]) ? -var_14 : 2317))) * ((-(arr_7 [i_1 + 1] [i_1 + 1] [i_0])))));
                arr_9 [13] = -391984524;
            }
        }
    }
    #pragma endscop
}
