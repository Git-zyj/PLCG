/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 -= (255 ^ 65535);
                    var_21 = -var_6;
                }
            }
        }
    }
    var_22 = ((((!(((var_11 << (((var_6 + 120) - 17))))))) && ((min((5925 % -3326), ((var_13 ? var_7 : var_15)))))));
    #pragma endscop
}
