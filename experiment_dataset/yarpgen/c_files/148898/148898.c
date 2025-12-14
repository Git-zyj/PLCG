/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148898
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
                var_20 = (var_5 + ((-(arr_3 [i_0] [i_0] [i_0]))));
                arr_7 [i_1] [i_0] = -138165025;
            }
        }
    }
    var_21 = max(var_2, ((var_0 ? ((var_6 ? var_19 : 16147)) : 16152)));
    var_22 = (var_13 ? (max((~var_3), -9679)) : var_11);
    #pragma endscop
}
