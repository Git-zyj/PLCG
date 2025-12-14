/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;
    var_19 = var_5;
    var_20 = (min(var_20, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = arr_4 [1] [18];
                arr_6 [i_1 - 1] [i_1] [i_1] = ((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_2 [i_1 - 1] [i_1]))));
                var_22 = var_13;
                var_23 *= arr_3 [i_0] [i_1 - 1];
            }
        }
    }
    #pragma endscop
}
