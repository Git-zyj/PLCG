/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((25206 ? var_6 : 9226)) <= ((-(arr_1 [i_0])))))));
        var_14 = (((min((arr_0 [i_0]), (arr_0 [i_0]))) & (max(((~(arr_1 [i_0]))), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = ((var_3 ? ((max((max((arr_4 [i_1]), -77)), (arr_1 [i_1])))) : (((((~(arr_4 [i_1])))) ? var_10 : (max(var_7, (arr_1 [i_1])))))));
        arr_8 [10] = min((arr_4 [i_1]), ((~(max(var_0, 15873032874844513770)))));
    }
    var_15 = (min(var_3, 127));
    var_16 = var_2;
    #pragma endscop
}
