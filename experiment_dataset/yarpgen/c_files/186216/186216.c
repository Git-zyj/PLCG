/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 ^ ((-((-768510538949330219 ? var_2 : 1))))));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 &= (min((!-768510538949330219), 16476));
        var_16 *= (((((min(0, 65535))) == -49052)));
        var_17 = 1;
        arr_4 [i_0] [i_0] = ((!((((((2097151 && (arr_0 [i_0] [i_0])))) % ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))))));
    }
    #pragma endscop
}
