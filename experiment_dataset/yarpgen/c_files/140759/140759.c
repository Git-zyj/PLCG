/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 += 22620;
        arr_2 [i_0 + 1] = (((max(((max(var_8, var_8))), (var_2 / var_2))) + (+-22602)));
        var_11 = 1;
    }
    var_12 = var_2;
    var_13 = (((((36424923 ? var_7 : var_9)) & 42934)));
    var_14 = (max(((((max(1, -1161595569)) & (57810 <= var_2)))), (max(9223372036854775807, -2769435710282132119))));
    #pragma endscop
}
