/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_3 & ((max(var_2, var_10)))))) ? (~var_13) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((var_3 > (min(var_12, (arr_4 [i_1])))));
                var_21 ^= (arr_3 [i_1 + 1]);
                arr_6 [i_1] = ((min((arr_0 [i_1 - 1] [i_1 + 1]), -100)));
            }
        }
    }
    var_22 &= var_6;
    var_23 = var_11;
    #pragma endscop
}
