/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((-32766 < -32763), var_3));
    var_12 ^= var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 ^= (max(((min(4116921526, 7845965654344510004))), ((~(arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? 83 : (((-96 <= (arr_0 [19]))))));
        arr_3 [i_0] = (((max(7845965654344510004, 35789)) < (min(var_0, 172))));
        var_14 ^= (((((59 >> (((arr_1 [i_0] [i_0]) - 94)))) > 1605640549)));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_7 [12] |= (arr_1 [i_1] [i_1]);
        var_15 += 9223372036854775807;
        var_16 = ((~((65528 ? (((-24 & (arr_1 [i_1] [i_1])))) : 0))));
        var_17 |= (180 ? (arr_4 [i_1 - 3]) : var_7);
        arr_8 [6] |= (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = (arr_12 [i_2]);
        var_19 ^= ((~(min((((arr_1 [i_2] [i_2]) - (arr_10 [i_2]))), var_5))));
        var_20 = (arr_0 [i_2]);
    }
    #pragma endscop
}
