/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (~-5159926371458384149)));
    var_19 = (max(((((var_15 + 2147483647) >> 14))), (((~var_16) << (-49124368 + 49124429)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_5));
                    var_21 *= (!var_1);
                    var_22 = (min(var_22, (((28586 ? 7 : -1486)))));
                }
            }
        }
    }
    var_23 = (min(var_23, (((var_11 <= (~var_14))))));
    #pragma endscop
}
