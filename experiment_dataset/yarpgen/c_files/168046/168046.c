/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 * 562949953421311);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-17851442945088618398 ? var_2 : (arr_1 [i_0] [i_0])))) ? ((var_4 - ((var_3 - (arr_2 [11] [11]))))) : (((arr_0 [i_0]) ? 17851442945088618393 : 12741863753827234598)));
        var_17 = var_2;
    }
    var_18 = (max(var_18, (((-(((min(var_9, var_5)))))))));
    var_19 = min(65535, -1152271358117889632);
    #pragma endscop
}
