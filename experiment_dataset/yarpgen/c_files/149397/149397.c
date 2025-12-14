/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [15] = (((arr_0 [i_0 + 1]) / ((10569553335679807853 | (arr_1 [i_0 - 1] [i_0])))));
        var_11 = -103;
        var_12 = min(32761, ((((29737 & -946674551) && ((((arr_1 [i_0] [i_0 + 1]) - (arr_1 [i_0] [i_0]))))))));
        var_13 &= (min(((((arr_1 [i_0] [i_0 - 1]) << (arr_0 [19])))), (-6790533332046499714 + 0)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(var_14, ((max((arr_1 [i_1] [i_1]), 18446744073709551613)))));
        var_15 -= 4294967295;
    }
    var_16 = var_7;
    var_17 = (-15 < var_10);
    #pragma endscop
}
