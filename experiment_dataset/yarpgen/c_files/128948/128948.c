/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = max(((max(var_16, var_14))), (max((arr_0 [3]), (((-2066200170350349740 ? -2066200170350349740 : var_8))))));
                arr_7 [i_0] [i_1] [i_1] = (((~524935254) >= (arr_0 [i_0 - 3])));
            }
        }
    }
    var_21 = (((max((min(var_5, 2066200170350349739)), var_14)) / var_9));
    #pragma endscop
}
