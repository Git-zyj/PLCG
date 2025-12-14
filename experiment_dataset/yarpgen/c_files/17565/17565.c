/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((0 ? (arr_1 [i_0]) : ((min((arr_0 [i_0] [i_0]), 1546568151))))) >= ((((!-1546568163) ? ((-(arr_0 [i_0] [i_0]))) : 1546568151))));
        var_10 = 2578328053;
        arr_3 [i_0] = var_9;
    }
    var_11 = ((~(((!(1546568151 - var_5))))));
    var_12 = max((((~var_4) ? var_7 : (((1716639242 ? -1546568151 : -1546568151))))), (((1546568151 ^ (!var_3)))));
    var_13 = max(1546568146, (((!((min(-1546568151, 65535)))))));
    var_14 = ((-1546568156 ? 1546568156 : 0));
    #pragma endscop
}
