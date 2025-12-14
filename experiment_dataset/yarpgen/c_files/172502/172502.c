/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = 143;
                    var_14 = ((-(!-5628213639682050766)));
                    var_15 = 15136122585063914100;
                }
            }
        }
    }
    var_16 = ((0 ? var_0 : ((var_7 ? var_0 : (var_8 * var_1)))));
    #pragma endscop
}
