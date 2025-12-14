/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_19 = (min(var_19, (~var_12)));
                    var_20 |= (16384 ? 13768612858567069911 : 9223372036854775779);
                    var_21 = -9223372036854775780;
                }
                var_22 = -4678131215142481704;
            }
        }
    }
    var_23 = (max(var_23, var_2));
    #pragma endscop
}
