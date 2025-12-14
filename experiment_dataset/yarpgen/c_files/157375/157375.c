/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_11 > var_11) ? (((var_3 + 2147483647) >> (var_9 + 11953))) : ((var_11 ? var_0 : var_10))))) ? var_3 : (min((min(var_4, var_12)), (max(var_12, var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (arr_0 [0]);
        var_15 -= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [0])))) ? (arr_0 [i_0]) : (((3952960214 ? 1792 : 27643)))));
        var_16 += (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 *= (((((((((-27643 ? 27643 : (-32767 - 1)))) > (arr_4 [i_1 - 1]))))) < (min((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))), (arr_3 [i_1 - 2])))));
        var_18 *= (min(((8180056537040512033 << (4281659810930417084 - 4281659810930417026))), (min((((arr_3 [i_1]) / (arr_4 [i_1]))), (arr_4 [i_1 - 1])))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        var_19 = ((17650921437220344750 ? 27643 : 28083));
        var_20 = ((arr_2 [i_2 + 2] [i_2 - 1]) > ((1039371258433213897 ? -32764 : 0)));
    }
    var_21 = ((((max((((0 ? 55 : 0))), (max(var_1, var_11))))) >= (min(((min(var_0, var_10))), (min(var_2, var_6))))));
    #pragma endscop
}
