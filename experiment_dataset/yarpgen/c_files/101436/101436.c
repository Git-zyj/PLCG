/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((min(var_6, (min(var_2, var_10)))) % (((-8751 ? 1170380104 : -1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((var_5 ? ((min(var_7, var_5))) : (var_0 - var_13)))) ? -var_2 : ((29741057 & (!2321230252))))))));
                    var_16 = (max(var_16, var_0));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 = ((!(max((var_4 || var_0), (!var_12)))));
                        var_18 ^= (((~var_6) ? ((var_8 ? (var_2 == var_10) : (~var_13))) : var_4));
                    }
                }
            }
        }
    }
    #pragma endscop
}
