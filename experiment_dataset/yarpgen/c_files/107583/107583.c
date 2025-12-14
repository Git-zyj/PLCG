/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [0] = (((arr_1 [i_0] [i_0]) ? 127 : (arr_0 [i_0] [i_0])));
        var_19 = (min(var_19, (((44042 ? 44042 : (arr_0 [i_0] [0]))))));
        var_20 |= ((9223372036854775807 ? -1 : 94));
        arr_3 [i_0] = ((2 ? (-125 > 125) : ((~(arr_1 [i_0] [4])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_21 = (((((9223372036854775795 ? (min(-5990327307894733017, (arr_7 [i_2]))) : (-113 | 103)))) || 1161107652));
            arr_8 [i_1] [i_1] [i_2] = ((((((((-200322740 ? (arr_4 [i_1]) : 121))) ? -21490 : (((arr_4 [i_2]) ? (arr_7 [2]) : (arr_7 [i_2])))))) ? (((+((-1 ? (arr_7 [i_1]) : (arr_4 [i_1])))))) : (max(((1989041966 / (arr_5 [i_1] [i_2]))), 44057))));
            var_22 = (max(var_22, 65535));
            var_23 = (((((((-125 ? (arr_5 [i_1] [i_1]) : (arr_4 [14])))) ? (arr_7 [i_1]) : 65535)) >> (((arr_5 [i_2] [i_1]) - 73))));
        }
        var_24 = (max(var_24, ((min(0, (min((124 <= 5281883083402579707), ((569334761634007813 ? (arr_6 [17]) : 120673198)))))))));
        var_25 &= ((+(((!((max((arr_5 [i_1] [i_1]), (arr_7 [i_1])))))))));
        var_26 = (max((((arr_6 [i_1]) * (arr_5 [i_1] [i_1]))), (942622983 <= 2591776485)));
    }
    var_27 ^= (((((-120673218 & (!127)))) ? ((min((max(64923, 18535)), (!942622971)))) : ((((min(18538, 3867889753884899657))) ? -1 : var_17))));
    #pragma endscop
}
