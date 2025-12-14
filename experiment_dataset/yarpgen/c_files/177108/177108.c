/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = ((!-2612371829591658959) ? (max(-6754176773005320819, -1814125694)) : (1814125694 == 9170925637390335555));
        arr_3 [i_0 - 1] [i_0 - 1] = (arr_2 [i_0 - 1]);
        arr_4 [12] [i_0] = (((((arr_1 [i_0 - 1]) + 9223372036854775807)) >> (((max(1814125694, (arr_2 [i_0 - 1]))) - 12729458141872660842))));
        var_14 = (arr_1 [i_0 - 1]);
    }
    var_15 = 5105;
    #pragma endscop
}
