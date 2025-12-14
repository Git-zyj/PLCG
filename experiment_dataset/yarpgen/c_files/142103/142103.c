/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_5 >= (((((min(22, var_16)) + 2147483647)) << (((((min(var_16, var_3)) + 1586094641)) - 30)))))))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((((-32 * (32736 + var_4)))) / ((-20 - (arr_0 [i_0 - 1])))));
        arr_4 [i_0] [i_0 + 2] = (min(13, (arr_0 [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = ((-(-2085208715 && 18446744073709551615)));
        arr_8 [16] = ((-(arr_5 [i_1] [i_1])));
    }
    var_18 = (((var_6 || 4294967295) / var_0));
    #pragma endscop
}
