/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 501950751;
    var_21 = var_11;
    var_22 = var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = (min(var_23, (((max(2871012586174543120, 501950740))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((((min((arr_0 [i_0]), (min((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0]) : ((((arr_2 [10] [10]) ? (((2 == (arr_0 [i_0])))) : (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [7] [i_0]))))))));
        var_24 = (min(-1559782340, (((((29404 ? 1340051832 : 501950751))) ? 18446744073709551615 : -36132))));
        arr_5 [i_0] = 36113;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_25 = ((((((arr_6 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_8 [i_1])))) == (arr_6 [i_1] [i_1])));
        var_26 = (((((1841700680 ? ((max((arr_2 [i_1] [i_1]), (arr_8 [6])))) : (max(44766552, (arr_2 [i_1] [i_1])))))) ? -1 : (min(-5652347541905161365, -1138643648))));
        var_27 = max((arr_2 [6] [i_1]), (((((var_12 ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))) > ((((arr_0 [i_1]) ? (arr_8 [11]) : 24375)))))));
    }
    #pragma endscop
}
