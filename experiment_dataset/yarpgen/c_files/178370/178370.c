/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (((((((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (~12046436343360798953))) * (12046436343360798953 | 7)));
        arr_2 [i_0] [i_0] = (max(((((min((arr_0 [i_0]), var_7))) ? ((((arr_0 [i_0]) >= var_5))) : (((!(arr_0 [i_0])))))), (((max((arr_1 [i_0]), (arr_1 [i_0]))) << (!var_12)))));
        var_16 = (((((12046436343360798953 ? 6400307730348752663 : 832862511))) ? ((6400307730348752662 ? (-2147483647 - 1) : 214)) : ((-1 ? (0 ^ 227) : (-2147483647 - 1)))));
        var_17 = (((min(((((arr_0 [i_0]) << (((arr_1 [i_0]) - 786076560))))), (min((arr_1 [i_0]), var_9))))) ? (arr_1 [i_0]) : (((var_12 - var_11) ? (!var_1) : ((var_8 / (arr_1 [13]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1 - 3] [i_1 - 3]) > ((((arr_0 [i_1]) < (arr_3 [i_1]))))));
        var_18 -= (((arr_3 [6]) && (arr_3 [12])));
        arr_6 [i_1] = (((arr_0 [i_1 - 2]) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : var_0)) : ((((arr_1 [i_1 - 2]) ^ (arr_0 [i_1]))))));
    }
    var_19 = (max(var_19, ((((((((var_13 + 2147483647) << (var_12 - 14483684335756515309))) > var_10)) || (((-(var_1 <= var_7)))))))));
    #pragma endscop
}
