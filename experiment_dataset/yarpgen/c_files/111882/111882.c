/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [9] [i_0] = (max(7626870574767463107, ((((arr_1 [4]) > ((min(153, 86))))))));
        var_15 = (((((-((105 ? 154 : 101))))) ^ ((88 ? 150 : 0))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_7 [i_1]);
        arr_10 [20] = (min((max(((109 ^ (arr_8 [i_1]))), (arr_5 [i_1] [i_1]))), 162));
        var_16 = (((((arr_7 [i_1]) % (arr_7 [i_1]))) + 0));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_17 += 105;
        var_18 = (max((max(((var_8 * (arr_12 [16]))), ((65531 ? 150 : (arr_8 [i_2]))))), (((!(((153 ? (arr_6 [i_2] [i_2]) : 13))))))));
        arr_13 [i_2] = 6;
    }
    #pragma endscop
}
