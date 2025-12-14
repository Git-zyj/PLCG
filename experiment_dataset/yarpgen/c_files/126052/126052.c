/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_0 >> (-var_10 - 7360479589447631551)))) ? (((((min(var_1, var_7))) > (7443144110492588415 ^ var_10)))) : (!var_9)));
    var_13 = (min(var_13, var_0));
    var_14 &= (min(var_11, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 -= (-81 && 3288);
                var_16 = 7443144110492588406;
            }
        }
    }
    #pragma endscop
}
