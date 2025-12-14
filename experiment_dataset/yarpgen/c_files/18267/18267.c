/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_1 & (max(var_13, var_13)))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (((((var_13 * var_8) < (arr_1 [i_0] [i_0]))) ? (arr_5 [i_0]) : (!-9152822524260461698)));
                arr_7 [i_0] = (((((~4294967295) ? (arr_2 [2] [i_1]) : var_3)) != (arr_5 [3])));
            }
        }
    }
    var_16 = (max(var_16, ((!(!var_4)))));
    #pragma endscop
}
