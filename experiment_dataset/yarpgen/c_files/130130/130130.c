/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_1 || var_14) >> ((((min(40, var_8))) & var_11))));
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((65531 | ((((max(65531, 1))) ? (arr_3 [i_0] [i_1]) : var_11))));
                var_21 = ((1 ? var_6 : (max((arr_3 [i_1 - 1] [i_1 - 3]), var_10))));
            }
        }
    }
    #pragma endscop
}
