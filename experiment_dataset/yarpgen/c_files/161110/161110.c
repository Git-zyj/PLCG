/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((145226648 ? var_4 : var_4)) ^ ((var_4 ? (max(var_1, var_5)) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = (~-32759);
                var_13 = (((arr_4 [i_0] [i_0] [i_0]) > (min((((-32756 || (arr_3 [i_0] [i_0] [i_0])))), 774270658))));
            }
        }
    }
    var_14 = (min((min((-1366601666 + var_6), -32754)), (~var_3)));
    #pragma endscop
}
