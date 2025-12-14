/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= ((~(arr_1 [i_0 - 2])));
        var_16 = (arr_1 [i_0 - 3]);
        arr_3 [i_0 - 1] [i_0 - 3] = ((-((-(arr_1 [i_0 - 2])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (min(((((-1972488059 + 2147483647) >> (var_3 + 7829169087446801772)))), (var_15 ^ var_11)));
        var_17 = ((((min((arr_7 [i_1]), ((var_6 ? var_11 : var_10))))) || (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 = ((~(arr_4 [i_2] [i_2])));
        arr_11 [i_2] = ((((!(arr_10 [i_2])))));
        arr_12 [i_2] [i_2] = (!var_6);
    }
    var_19 = var_14;
    #pragma endscop
}
