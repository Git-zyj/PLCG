/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((max((var_1 ^ var_9), 6128856685521905343)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_3 [1])));
            var_13 = (max(((((-1 + 9223372036854775807) << (((((arr_3 [i_0]) + 2444369029971068201)) - 36))))), ((-(arr_5 [i_0 - 1])))));
            var_14 = (((min((max((arr_5 [i_0]), var_7)), (arr_1 [i_0]))) > (min((max(var_6, (arr_5 [i_0]))), 8013793111049367583))));
        }
        var_15 = (min(var_15, (((!(~-8))))));
        arr_7 [i_0] = ((((max((arr_1 [i_0 - 1]), var_9))) ? (max(var_5, 6)) : ((((-12 + 2147483647) << (arr_1 [i_0 - 1]))))));
    }
    var_16 &= (min(1625762153, (min(var_8, ((var_3 ? var_8 : var_5))))));
    #pragma endscop
}
