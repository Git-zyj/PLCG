/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 >> (var_1 - 30214)));
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (((!-104) ^ -4487989920114880487));
                    var_15 = (!-107);
                    var_16 += (((((-3502445325422593658 && (!-83768643113473636)))) << ((((min(-107, 0))) + 133))));
                }
            }
        }
    }
    #pragma endscop
}
