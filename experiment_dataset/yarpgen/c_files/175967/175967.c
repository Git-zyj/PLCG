/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [8] [i_1] |= ((45600 ? 65024 : 2049386931));
                var_13 *= (((((65535 ? -23488 : ((1 ? -30432 : 48287))))) && (((2245580365 + (((max(41173, 65535)))))))));
            }
        }
    }
    var_14 = var_11;
    var_15 = ((-var_7 || var_5) / (min(((max(var_7, 59824))), var_3)));
    #pragma endscop
}
