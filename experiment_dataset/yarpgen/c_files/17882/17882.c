/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_8 ? 18446744073709551593 : var_13)) % var_4)) | (-1516685384 + 249)));
    var_15 &= ((((max((!var_5), var_11))) ? (((-241 != (var_3 % 236)))) : 1325446828));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0 - 3] = 239;
                arr_5 [i_0] = ((+((min((1 <= 70231305224192), (min(var_13, 10754)))))));
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
