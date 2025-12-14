/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (((((~((var_12 ? var_11 : 9658))))) ? var_12 : 3453));
                            var_15 = (((((3454 ? var_5 : var_9))) ? ((((var_2 && ((max(3453, var_9))))))) : ((8104776881035179625 ? var_3 : -0))));
                        }
                    }
                }
                var_16 = (((((3447 & (3447 | 8104776881035179631)))) ? 3453 : ((1 ? (~10341967192674371981) : 16))));
            }
        }
    }
    #pragma endscop
}
