/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (!(((~((var_8 ? 3822 : var_18))))));
                    var_21 = 65535;
                }
            }
        }
    }
    var_22 = (min((((((3834 ? 18446744073709551587 : 319587094))) ? var_3 : var_1)), (((min(75, var_8))))));
    #pragma endscop
}
