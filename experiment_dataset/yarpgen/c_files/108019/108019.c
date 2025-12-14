/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((var_7 | 6), -6))) >= (((((var_15 ? var_9 : 121))) ? var_8 : var_19))));
    var_21 = var_4;
    var_22 = (~var_18);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 = (min(var_23, (((-((max(-122, 6))))))));
        arr_3 [i_0] [i_0] = (((-99 + 2147483647) >> (-6 + 24)));
        arr_4 [i_0] [i_0] = (((((((-6403151825353749242 ? 26 : var_13))) || 18)) ? (arr_1 [i_0]) : ((17 ? 65535 : (arr_2 [i_0])))));
    }
    #pragma endscop
}
