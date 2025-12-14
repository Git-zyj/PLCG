/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((var_7 ? var_11 : (var_1 ^ var_6)))));
    var_21 ^= var_10;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_22 = (min(245, var_17));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 = 1;
                    arr_8 [i_1] = ((var_19 ? (((1 ? 7 : 9787))) : (max(-8, 1))));
                    var_24 = 1;
                }
            }
        }
        var_25 = 1;
    }
    #pragma endscop
}
