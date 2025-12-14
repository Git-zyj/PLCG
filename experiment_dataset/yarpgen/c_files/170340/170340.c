/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_0 * var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((7 && (!var_0)));
                    var_15 = (min(var_15, ((var_4 ? (1073741823 ^ 365840798) : 1073741811))));
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = (min(var_17, (~var_3)));
    var_18 = (max(var_18, (((min(var_11, var_6))))));
    #pragma endscop
}
