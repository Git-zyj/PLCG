/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((((arr_2 [i_0] [i_0 - 2]) || (arr_2 [5] [i_0 + 3]))) && (((-(arr_2 [i_0 - 2] [i_0]))))));
                arr_5 [i_0] = (0 + 127);
                arr_6 [i_0] [i_1] [i_1] = (+((min((arr_4 [i_0 + 4] [i_1]), var_18))));
                var_22 = (max(var_22, (((((((arr_3 [i_0 - 1] [i_0 + 3]) ? (arr_3 [i_0 - 2] [i_0 + 3]) : (arr_3 [i_0] [i_0 + 3])))) ? (((arr_3 [i_0] [i_0 + 3]) / var_13)) : (arr_3 [i_0 - 1] [i_0 + 3]))))));
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
