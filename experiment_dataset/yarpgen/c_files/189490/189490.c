/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (((var_18 < var_8) ? var_18 : (((-(1 < -2053581088))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = (-(min(88, (arr_0 [i_1]))));
                    var_23 = (!14770885);
                }
            }
        }
    }
    var_24 = 7;
    #pragma endscop
}
