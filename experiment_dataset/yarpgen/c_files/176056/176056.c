/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((arr_3 [i_0] [i_0] [i_1]) >= (4294967295 >= 0))) ? (((((arr_4 [i_0] [i_0] [9]) >= (arr_3 [i_0] [i_1] [i_1]))))) : (((arr_1 [i_0]) + 13))));
                arr_7 [i_1] = (max((min((arr_4 [i_0] [i_0] [i_0]), ((4294967271 ? var_7 : (arr_3 [i_0] [i_1] [i_1]))))), var_15));
                var_16 = ((1 ? 17179869152 : 0));
            }
        }
    }
    var_17 = ((~((var_15 * (-1 / 25707)))));
    #pragma endscop
}
