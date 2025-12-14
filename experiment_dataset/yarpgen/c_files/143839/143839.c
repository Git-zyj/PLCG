/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(min(8, (arr_0 [i_0 + 1])))));
        var_11 *= var_0;
    }
    var_12 = (min(((633282181673699205 ? 1 : 1)), var_3));
    var_13 = var_1;
    #pragma endscop
}
