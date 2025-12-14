/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((-51 + 2147483647) << (((-75 + 101) - 26))));
    var_16 = ((((((75 < 1) && (192 <= 1211763866)))) > (((66 < -38) - 0))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] = 139326840;
                    arr_8 [i_2] = 459268004;
                }
            }
        }
    }
    var_17 = -44;
    #pragma endscop
}
