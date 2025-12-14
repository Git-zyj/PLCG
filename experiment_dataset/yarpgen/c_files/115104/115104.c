/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(max((max(var_6, var_7)), (var_2 <= 23))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 &= (((((var_7 + ((((arr_1 [i_0]) ? 1012522326 : 5)))))) ? ((((((min((arr_1 [i_0]), -29505))) < (arr_0 [i_0]))))) : ((~((9223372036854775789 - (arr_0 [i_0])))))));
        var_16 = ((((max((((-644266043 + 2147483647) >> (var_1 - 7505063119701692212))), ((-(arr_0 [i_0])))))) ? 674100946 : ((((((arr_0 [i_0]) << (((-15 + 43) - 22))))) ? 6 : (~-4)))));
        arr_2 [2] = (!(arr_0 [i_0]));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = ((!(((((674100968 ? (arr_4 [i_1] [i_1]) : 1)) | ((min((arr_3 [i_1]), (arr_4 [i_1 + 2] [i_1 + 1])))))))));
        var_17 = (((-(arr_4 [i_1] [i_1 - 2]))));
        arr_6 [i_1] [i_1] = (min(((~(arr_4 [i_1 - 1] [i_1 + 2]))), ((((((arr_4 [i_1 - 1] [i_1 + 2]) != var_7))) >> (-2147483625 + 2147483640)))));
    }
    var_18 += (max(((!((max(var_10, var_6))))), ((!(41696 <= var_6)))));
    #pragma endscop
}
