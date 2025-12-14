/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(((min(381350119, -381350123))), (max(var_14, var_17)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((-(-381350133 | 3465361894491717659)));
        var_20 = (min(var_20, (((143 && (arr_2 [i_0]))))));
        arr_4 [i_0] |= (min(((max(31, (arr_1 [i_0] [i_0])))), (max((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))), (max(var_17, 142989288169013248))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((arr_1 [i_1 - 2] [i_1 - 3]) / -381350143)))));
        var_22 = (min(var_22, (381350131 ^ -2147483643)));
        arr_8 [i_1] = (((-2147483644 > var_1) == (arr_7 [i_1] [i_1 + 2])));
        var_23 = ((arr_2 [i_1 + 1]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 2]));
        arr_9 [i_1] [i_1 - 1] = ((~(arr_0 [i_1])));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_24 = ((var_2 || (((arr_1 [i_2] [i_2]) > (arr_11 [i_2])))));
        arr_13 [i_2] = (((((((((arr_10 [i_2]) ? 156 : 381350098))) ? (arr_12 [i_2] [i_2]) : (arr_5 [i_2 + 1])))) ? ((((!(arr_1 [i_2] [i_2]))))) : (((((max((arr_10 [i_2]), 65180))) == ((((arr_1 [i_2] [i_2]) < 14246971089852573993))))))));
    }
    #pragma endscop
}
