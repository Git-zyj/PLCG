/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (var_14 ^ 1);
    var_16 |= (max((max(0, 1725846274199705915)), ((((1725846274199705915 || 8753539175517727113) / 402257558)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (((((arr_2 [i_0]) ? (((min(var_13, var_12)))) : (arr_1 [12] [12])))))));
        var_18 = 2;
        var_19 = (min((min((var_4 & 8753539175517727113), var_8)), ((max((!-1725846274199705912), 1725846274199705911)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 |= 1;
        var_21 = (((arr_2 [i_1]) ? var_1 : 18));
        var_22 = ((((!(((arr_2 [i_1]) && (arr_4 [i_1] [i_1])))))) / ((((arr_0 [7]) >= (((arr_4 [i_1] [i_1]) % 4915575112515646272))))));
    }
    #pragma endscop
}
