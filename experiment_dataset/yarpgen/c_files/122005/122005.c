/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_15 = ((~(arr_0 [i_0])));
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = 18446744073709551595;
            var_18 ^= (arr_3 [0] [i_1]);
            arr_6 [i_1] = -26513;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_9 [i_3] [i_1] = (((-(((arr_0 [i_3]) - 1)))));
            var_19 = (min((min(-26488, 2074965041)), ((((65526 - var_12) - 4)))));
            var_20 = (max((((arr_7 [i_3] [i_1]) ? 13356447899240744131 : (arr_5 [i_3] [i_1]))), ((min(((255 ? -26270 : 2220002255)), (arr_0 [i_1]))))));
            var_21 = 8239793763899506132;
        }
        arr_10 [i_1] [1] = ((((min(2147483647, 14))) ? ((-26488 % (arr_3 [i_1] [i_1]))) : (((((arr_8 [i_1] [i_1]) / (arr_8 [i_1] [i_1]))) * (arr_8 [i_1] [i_1])))));
        var_22 = (((arr_2 [i_1]) ? (min((arr_5 [i_1] [i_1]), ((9 ? 1 : -1)))) : (min(var_10, (arr_8 [i_1] [i_1])))));
        var_23 = (min((arr_5 [i_1] [i_1]), 0));
    }
    var_24 = -26492;
    var_25 = (max((((((max(var_9, var_4))) ? ((-2273979524695252603 ? var_8 : var_10)) : var_12))), var_0));
    #pragma endscop
}
