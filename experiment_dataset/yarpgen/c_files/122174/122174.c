/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = 1;
                arr_5 [i_1] = (((arr_3 [i_0] [i_1]) ? (~1) : (5891725199030739103 ^ 1231127801)));
            }
        }
    }
    var_16 = ((1231127801 << (2141277521882703187 - 2141277521882703187)));
    #pragma endscop
}
