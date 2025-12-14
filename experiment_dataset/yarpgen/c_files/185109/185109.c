/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 &= (min(var_7, (arr_1 [i_0])));
        var_13 = ((209 ? 72 : 1));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((14220726543109805118 ? 3572155838784706087 : 4226017530599746498));
        var_14 *= var_1;
        arr_7 [i_1] [i_1] = (min((((var_4 && (arr_4 [i_1] [i_1])))), (((((~(arr_5 [i_1]))) != (0 == 0))))));
    }
    var_15 = 0;
    var_16 = 96;
    #pragma endscop
}
