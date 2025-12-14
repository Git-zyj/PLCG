/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (min(var_20, 4294967295));
                var_21 = (min(var_21, ((max(-4294967295, 4294967295)))));
                arr_6 [i_0] = ((~((var_16 & ((~(arr_4 [i_1])))))));
                var_22 += ((var_13 ^ (((var_11 | (arr_0 [13]))))));
            }
        }
    }
    #pragma endscop
}
