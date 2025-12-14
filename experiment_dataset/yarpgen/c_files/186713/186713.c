/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (~2111716439);
    var_11 = (min((((min(4294967288, 1)))), (min(1, var_3))));
    var_12 ^= var_3;
    var_13 += (!23);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = 1;
                    var_15 *= (max(((min(1, 1))), ((((max(0, 1))) ? ((1065215400 ? 1 : 15)) : 0))));
                }
            }
        }
    }
    #pragma endscop
}
