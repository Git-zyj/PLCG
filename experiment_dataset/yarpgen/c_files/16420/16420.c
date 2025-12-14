/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (max((((var_6 % -75) ? 0 : (15006 > 2147483647))), (0 < var_4)));
                    var_20 = -15016;
                }
            }
        }
    }
    var_21 = (-15006 | var_18);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_22 -= ((-15044 ? -15006 : -15016));
                var_23 *= (((max(7, var_10)) == (!65535)));
            }
        }
    }
    var_24 = (var_0 % var_0);
    #pragma endscop
}
