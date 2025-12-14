/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 = (min(var_12, ((min(128, (((((var_0 ? var_10 : (arr_6 [4])))) ? (!var_10) : ((min(var_3, (arr_2 [i_0])))))))))));
            arr_7 [i_1] &= ((~(((arr_2 [i_0]) ? (~var_11) : (((arr_4 [i_0]) ? (arr_1 [8]) : var_8))))));
        }
        var_13 = (max(var_13, ((((((0 ? ((1022428505 ? 27493 : -1351816692)) : -1351816692))) ^ (12687 | 50331648))))));
    }
    var_14 = (-var_7 + var_5);
    var_15 = var_1;
    var_16 = (max(var_16, ((((var_1 >> (((~127) + 144)))) << (((-1268399551 + 1268399579) - 21))))));
    var_17 = var_1;
    #pragma endscop
}
