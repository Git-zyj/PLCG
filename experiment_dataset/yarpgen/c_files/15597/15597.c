/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(0, (arr_0 [i_0])));
        var_18 = ((((((((arr_0 [7]) - (arr_1 [10] [i_0]))) * ((10 ^ (-2147483647 - 1)))))) ? ((2147483647 ? (((((arr_1 [i_0] [i_0]) != (arr_0 [i_0]))))) : 3443952165)) : -3565));

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((1 ? ((2016 * (arr_1 [i_0] [i_0]))) : 18446744073709551610))) ? 18446744073709551613 : 1);
            arr_6 [i_1] = 1;
            arr_7 [i_0] [i_0] = (((arr_1 [i_1 + 2] [i_0]) ? (((arr_1 [i_1 - 1] [i_0]) % (arr_1 [i_1 + 4] [i_0]))) : (min(18, (arr_1 [i_1 + 2] [i_0])))));
        }
        arr_8 [i_0] = (arr_0 [i_0]);
    }
    var_19 = var_14;
    var_20 = var_6;
    var_21 = ((!var_8) ? ((var_10 ? (18052 - 2147483647) : 22)) : ((((var_1 + 9223372036854775807) << (var_14 - 379560511)))));
    #pragma endscop
}
