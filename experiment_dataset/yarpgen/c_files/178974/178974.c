/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, (((3200 / (((-110 && (min(1, 1))))))))));
        var_13 = (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])));
        var_14 = (min(var_14, ((min((max(((min(1, (arr_1 [i_0])))), (var_3 - 0))), ((9356 - ((13 ? 1 : 1)))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [0] = (min((((((arr_3 [i_1]) + 2147483647)) >> (3484679997733867075 - 3484679997733867069))), 1));
        var_15 = (max((max((((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1]))), ((max(var_8, var_8))))), ((~(arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_16 = (min(var_16, 65535));
        arr_10 [i_2] = ((((254 <= (arr_8 [i_2] [i_2]))) ? var_9 : (((((arr_8 [8] [i_2]) >= ((var_9 ? var_4 : (arr_7 [i_2 - 1])))))))));
        arr_11 [8] [i_2] &= var_6;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_17 *= (min(((var_5 ? (arr_1 [i_3]) : ((min(var_1, (arr_7 [i_3])))))), (arr_1 [15])));
        var_18 *= ((((!((min(29060, 4294967294))))) ? (arr_8 [i_3] [i_3]) : ((min(1, (arr_12 [i_3]))))));
        arr_14 [i_3] = (max((((0 ? 1 : 3))), (((arr_0 [i_3]) ? 1771558622 : (arr_2 [i_3])))));
    }
    var_19 = (max(var_19, var_3));
    var_20 *= min(1, ((((max(111, 2129567851))) ? var_1 : var_4)));
    #pragma endscop
}
