/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [4] |= -72054883461121611;
        var_12 = (((((10085679028489588489 >= 1) ? (arr_3 [3]) : (min(-1675940999, -5)))) % 92));
        var_13 = (((((min(var_1, (arr_1 [i_0] [i_0]))))) / (((var_3 >= (((arr_1 [i_0] [i_0]) / (arr_3 [3]))))))));
    }
    var_14 ^= ((((4294967295 % 1) * 0)) + var_11);
    var_15 = (((((((((var_7 + 2147483647) << (var_1 - 116)))) != -1116892707587883008))) != ((~(var_6 ^ 1)))));
    var_16 = (((var_0 != (~var_7))));
    #pragma endscop
}
