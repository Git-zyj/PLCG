/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((+((max((arr_0 [i_0] [i_0]), 223)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = 0;
            arr_5 [i_0] = ((~((((var_2 ? -6772657037310716652 : 6001791311845436600)) << ((((var_1 ? (arr_0 [10] [10]) : 61702)) - 18407433518642870224))))));
        }
        arr_6 [i_0] = (((arr_4 [i_0] [i_0]) ? (1 <= 5397) : ((max(32, -117)))));
        var_18 = (((((~((116 ? 223 : 1))))) ? (min((!23), (max(var_5, (arr_0 [i_0] [i_0]))))) : (((5985328265294041346 ? (((!(arr_3 [i_0] [i_0] [i_0])))) : (~var_14))))));
        arr_7 [i_0] [i_0] = (max(2609419435, (max(var_10, -6772657037310716652))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_19 = (min((min(223, ((223 % (arr_9 [i_2]))))), ((min((arr_9 [i_2]), (arr_10 [i_2]))))));
        var_20 += 1;
        arr_11 [i_2] [i_2] &= max((max((~1), var_13)), ((((-221933979 * var_8) ? -40 : var_1))));
        var_21 = (min(var_21, ((((arr_3 [i_2] [1] [i_2]) * (arr_3 [i_2] [i_2] [i_2]))))));
    }
    var_22 = var_10;
    var_23 = var_4;
    #pragma endscop
}
