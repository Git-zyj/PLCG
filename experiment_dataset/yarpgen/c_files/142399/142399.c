/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 -= 916491527;
    var_21 *= (max((((var_4 + 2147483647) >> (var_3 + 21479))), ((~((120 ? 1 : var_4))))));
    var_22 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_23 = -3020465361897430028;
                    arr_8 [14] &= 3020465361897430021;
                }
            }
        }
    }
    #pragma endscop
}
