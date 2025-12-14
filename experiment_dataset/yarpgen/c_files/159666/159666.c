/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 |= (18446744073709551615 / 132);
        var_19 = ((-((312048864 ? ((132 ? (arr_1 [i_0]) : 1)) : (arr_0 [0])))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? 18446744073709551615 : (arr_1 [i_0])));
    }
    #pragma endscop
}
