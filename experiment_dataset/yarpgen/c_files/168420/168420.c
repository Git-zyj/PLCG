/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((-(((((0 ? 1 : var_4))) ? var_8 : (arr_4 [i_0] [10] [i_1]))))))));
                var_12 += 255;
                var_13 -= var_7;
            }
        }
    }
    var_14 &= var_8;
    var_15 = (23 - var_7);
    #pragma endscop
}
