/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_2 ^ -28) ? (!var_14) : (min(((2493828918 ? (-127 - 1) : -832399659)), ((879084114 ? (-127 - 1) : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [7] [i_1] [5] = var_14;
                    var_18 = (max(var_18, (((!(((min(1, -102)))))))));
                }
            }
        }
    }
    #pragma endscop
}
