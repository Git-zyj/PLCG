/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((var_7 ^ var_3) >> (var_3 - 55873)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((0 + 1), (arr_1 [i_0])))) | (min((arr_0 [1]), (((arr_0 [i_0]) | (arr_1 [i_0])))))));
        var_13 *= (((!((!(arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 *= (((arr_3 [8]) << (min(1, (((arr_6 [8]) * (arr_4 [i_1])))))));
        var_15 -= ((((-(arr_4 [i_1]))) > 1));
        var_16 = (i_1 % 2 == 0) ? ((!((((((7 >> (((arr_3 [i_1]) - 2230684321))))) | ((-(arr_3 [i_1])))))))) : ((!((((((7 >> (((((arr_3 [i_1]) - 2230684321)) - 1166053259))))) | ((-(arr_3 [i_1]))))))));
    }
    #pragma endscop
}
