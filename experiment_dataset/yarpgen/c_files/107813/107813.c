/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (255 < 1090661129701036068);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((((arr_1 [i_0] [i_0]) / var_12))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (-9223372036854775807 - 1))) : var_4));
        var_19 = (max(var_19, -1090661129701036068));
        arr_2 [i_0] [i_0] = ((+((((~var_12) > (min(9223372036854775807, 1090661129701036067)))))));
    }
    #pragma endscop
}
