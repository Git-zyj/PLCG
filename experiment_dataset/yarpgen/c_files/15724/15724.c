/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = arr_4 [i_0] [i_0];
                var_20 = (max(var_20, (arr_2 [i_0])));
                var_21 *= ((+((((arr_4 [i_1 - 2] [i_1 - 1]) && (arr_4 [i_1 - 2] [i_1 + 2]))))));
            }
        }
    }
    var_22 = var_11;
    var_23 = (var_6 ? var_5 : ((((!(((var_0 ? var_1 : var_6))))))));
    var_24 = var_14;
    var_25 = var_3;
    #pragma endscop
}
