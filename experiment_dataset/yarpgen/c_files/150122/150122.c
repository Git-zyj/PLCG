/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((118 + 0), 192)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 -= (((((-9223372036854775805 ? (268427264 > 14) : 15))) ? (~0) : -93));
                    var_19 += ((min(var_4, -26657)));
                }
            }
        }
    }
    var_20 ^= ((((65535 && 18446744073709551615) ? var_3 : ((max(-26682, var_4))))));
    #pragma endscop
}
