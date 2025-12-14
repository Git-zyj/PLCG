/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = var_13;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = ((((1620980747884924002 ? 7082194415461522033 : 15305237357594317081)) & var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = var_0;
                                var_20 -= (~1380015114);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
