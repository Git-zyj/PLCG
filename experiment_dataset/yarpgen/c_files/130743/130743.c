/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = ((+(((((arr_2 [i_0]) > -15885)) ? (arr_2 [i_0]) : -var_5))));
        arr_4 [16] [i_0] |= ((-(arr_0 [i_0] [i_0])));
    }
    var_16 |= (~var_4);
    var_17 = (min(var_17, ((min((((((244135666 ? 12654514829127090603 : 1))) ? 1320388821873281362 : 1920206105)), var_12)))));
    #pragma endscop
}
