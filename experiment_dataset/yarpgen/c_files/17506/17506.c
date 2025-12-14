/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (max(var_15, (((((~(~-8332817943579819230))) ^ 296433962)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 3951946436;
        arr_3 [i_0] = (((((~((var_10 ? 115 : (arr_0 [i_0])))))) ? ((11883345101752232956 ? (min((arr_0 [i_0]), (arr_1 [i_0] [8]))) : ((1 ? 1 : (arr_1 [i_0] [8]))))) : (-9223372036854775807 - 1)));
        var_16 = ((!((((var_11 ? 1 : 0))))));
        var_17 ^= (min((((!(!18446744073709551603)))), (arr_0 [i_0])));
    }
    #pragma endscop
}
