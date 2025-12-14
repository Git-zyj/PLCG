/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((((((arr_1 [i_0]) ? 7 : (arr_0 [2])))) ? (arr_0 [10]) : (((32767 ? ((max(var_11, (arr_1 [i_0])))) : var_6))))))));
        arr_2 [i_0] = (((arr_1 [i_0]) * (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (max((((((arr_3 [i_0] [i_1]) ? -32765 : var_15)))), var_7));
            var_18 = (arr_0 [i_0]);
            arr_6 [17] [i_0] [17] = (min(((((((-32767 - 1) / -32758))) ? var_12 : var_1)), ((max((arr_1 [i_0]), (arr_4 [i_0]))))));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_19 = arr_7 [i_2] [i_2];
        arr_10 [i_2] = (((((-9223372036854775807 - 1) < (-9223372036854775807 - 1))) ? ((((-(arr_0 [4]))) | 1)) : (arr_0 [18])));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_20 = ((0 ? ((((!32757) >> (((arr_8 [i_3 + 1]) + 429478665))))) : (((arr_9 [1] [i_3]) ? (((var_9 ? var_0 : 127))) : (arr_0 [14])))));
        var_21 -= ((((min(var_8, ((var_13 ? var_0 : (arr_8 [i_3 - 1])))))) ? (arr_14 [i_3] [i_3 - 1]) : ((((min(4294967274, (arr_4 [i_3 - 2])))) ? (!var_13) : (((arr_4 [i_3]) + (arr_8 [i_3 - 1])))))));
        var_22 = ((((min(-32739, (33554431 | var_8)))) && (!var_9)));
        arr_15 [3] = ((+(((arr_14 [i_3 + 1] [i_3]) ? (max((arr_13 [i_3]), (arr_11 [i_3 - 2]))) : (((arr_3 [i_3] [i_3]) ? (-9223372036854775807 - 1) : 255))))));
    }
    var_23 = (min((((var_9 == (((var_14 ? 0 : var_10)))))), ((1 - ((8191 ? 6 : var_10))))));
    #pragma endscop
}
