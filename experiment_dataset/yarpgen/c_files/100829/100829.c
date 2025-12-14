/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -17069;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (((var_5 % var_1) ? (~var_0) : 1337818787));
                    var_17 = (max((((255 == (max(1499212855, -398575299))))), ((1915200358 >> (1046528 - 1046510)))));
                }
            }
        }
    }
    var_18 = (4503599627108352 ? 26928 : 20);
    var_19 = var_11;
    var_20 = ((1 ? 45 : 62147));
    #pragma endscop
}
