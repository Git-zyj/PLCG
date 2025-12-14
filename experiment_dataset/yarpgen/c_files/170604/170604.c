/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_12 + var_2);
    var_15 = ((182 ? (max(var_13, (0 + var_13))) : 182));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [7] = (arr_2 [i_0]);

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_16 = ((((((((arr_1 [13]) * (arr_1 [i_0]))) - (((arr_4 [9] [i_1]) / -189))))) ? (max((arr_1 [i_0]), (205 & var_3))) : ((~(arr_0 [i_1] [i_1])))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_17 = (((3 ? ((-184 ? var_8 : (arr_0 [i_0] [i_0])) : (((arr_5 [i_1] [i_1]) ? var_8 : (arr_8 [i_0] [4] [4])))))));
                var_18 = (((((157 + -182) && (arr_6 [i_1]))) ? (((-(arr_6 [i_1])))) : ((((((arr_2 [5]) ? (arr_6 [i_1]) : (arr_0 [i_1] [i_2])))) / (var_0 | var_13)))));
            }
        }
        var_19 = ((163 ? (!223) : ((max(157, 162464683)))));
    }
    #pragma endscop
}
