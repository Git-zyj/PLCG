/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [12] &= ((!((((var_3 & 8) % ((-(arr_1 [5]))))))));
                    var_17 *= (arr_6 [i_0] [i_0] [i_2] [i_1 + 1]);
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((((min(((var_4 ? 16040822675926905042 : var_13)), 3835235431))) ? (arr_3 [i_0] [i_0] [i_0]) : (-724755749783729425 || var_14)));
                }
            }
        }
    }
    var_18 |= var_16;
    #pragma endscop
}
