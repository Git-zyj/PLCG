/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((var_0 ? (~65535) : 1693903438))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_15 = (((((3726 ? var_11 : ((var_3 ? 255 : 255))))) || 255));
        arr_2 [i_0] = -1;
        var_16 -= (((max((((arr_1 [i_0]) % (arr_0 [i_0 + 1] [i_0 - 1]))), var_0)) < (((min(var_1, 0))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [0] [0] |= (arr_4 [i_1] [i_2]);
            var_17 = var_4;
            var_18 -= ((0 ? 9223372036854775807 : -9223372036854775805));
            var_19 = ((-(min(((9223372036854775807 ? -9223372036854775805 : 8039132476974475207)), (((var_11 ? (arr_4 [i_1] [i_2]) : 255)))))));
        }
        arr_8 [i_1] = 255;
    }
    var_20 = (max(var_20, (var_12 ^ 7135)));
    #pragma endscop
}
