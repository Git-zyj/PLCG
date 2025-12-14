/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((var_1 ? var_6 : -1)))));
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((min((-24747 || 2940579579), (arr_1 [i_0])))) ? (((var_6 && ((min(var_6, 65535)))))) : ((28607 ? (57258 && 60111) : ((((arr_3 [i_0]) && 3065869140))))))))));
                var_17 += ((-((var_8 ? 2856428578 : var_6))));
                arr_5 [i_1] [i_1] &= min((2213876721 + var_4), ((min(-32747, 60766))));
                arr_6 [i_0] [i_0] [i_0] &= var_8;
            }
        }
    }
    var_18 = min(var_4, ((((min(2213876723, var_7))) ? ((var_7 ? var_0 : var_4)) : (var_5 <= 4039392919))));
    var_19 |= (max(-3065869164, 2843164651));
    #pragma endscop
}
