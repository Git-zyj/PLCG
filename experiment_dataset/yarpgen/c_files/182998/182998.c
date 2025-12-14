/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 915782929;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = min(((((var_6 ? (arr_0 [i_0]) : var_2)) + (~var_13))), (min((max(var_14, var_11)), ((((arr_0 [i_1]) % var_6))))));
                            var_17 *= (~265613166);
                            var_18 = var_13;
                            var_19 |= (((((max(var_0, 1003172232)) ? (~var_6) : (var_7 < 7060945529030819449)))));
                        }
                    }
                }
                var_20 = -var_8;
            }
        }
    }
    var_21 = 1110247860;
    #pragma endscop
}
