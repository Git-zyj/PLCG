/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((((-9870 ? 4294967295 : 15))) && (arr_1 [i_0])));
        var_20 = ((!(!814678039)));
        arr_4 [i_0] = ((((((var_16 && 4294967289) >> (var_6 - 191)))) && (((var_16 && var_10) && (arr_1 [i_0])))));
        arr_5 [i_0] = 4294967289;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_9 [i_0] [i_0] [i_1] = (max((((((min(var_8, var_4)))) ^ (var_5 / 2))), (-var_6 / 52501)));
            var_21 = ((56354 ? var_1 : ((((~var_15) > (arr_7 [10]))))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = 67108863;
        arr_12 [i_2] [i_2] = 11753257335317260854;
    }
    var_23 = (~var_18);
    #pragma endscop
}
