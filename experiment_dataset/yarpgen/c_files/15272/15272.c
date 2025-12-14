/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 += ((var_1 ? (arr_0 [i_1]) : (48 < 0)));
                    var_11 = (((((var_7 | (arr_2 [i_2])))) ? (((((arr_0 [i_0]) ? 4294967282 : var_6)))) : (min((max(4294967295, 0)), 11))));
                }
            }
        }
    }
    var_12 = var_6;
    var_13 = ((2953219987 ? 0 : -6062));
    #pragma endscop
}
