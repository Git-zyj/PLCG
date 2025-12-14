/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!-13);

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 2] = ((((((81 ? 11 : 18446744073709551612)) - -26667)) - -14748));
        arr_3 [i_0] = (((arr_0 [i_0 - 1] [i_0 + 2]) - (arr_1 [i_0] [i_0 - 2])));
    }
    var_19 = ((max(0, var_1)));
    var_20 = var_7;
    #pragma endscop
}
