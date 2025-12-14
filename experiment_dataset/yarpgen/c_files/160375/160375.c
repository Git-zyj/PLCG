/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_10 = var_5;
                        var_11 = (((var_7 ? var_2 : var_1)));
                        var_12 &= -111;
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_13 = 103;
                        var_14 = (((var_3 ? var_1 : var_5)));
                    }
                    var_15 |= 238;
                    var_16 = var_2;
                    var_17 += (((var_9 ? var_5 : var_6)));
                }
            }
        }
    }
    var_18 = (((((var_7 ? var_0 : var_2)))) ? var_5 : ((253 ? 1621709266 : 123)));
    var_19 -= var_1;
    #pragma endscop
}
