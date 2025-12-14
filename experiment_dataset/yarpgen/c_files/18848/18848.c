/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (arr_0 [3] [12]);
                var_21 &= 230;
                var_22 &= (max(2849906674794520983, 20712));
                var_23 = var_1;
                var_24 = (min(var_24, (((((((((230 + (arr_1 [4] [4])))) + ((5635872134751785004 ? var_19 : var_18))))) ? var_11 : 726713555)))));
            }
        }
    }
    var_25 = var_3;
    #pragma endscop
}
