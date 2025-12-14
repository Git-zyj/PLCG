/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 -= (((arr_1 [i_0]) + (max((((~(arr_0 [i_0])))), var_0))));
        var_20 = (min(var_20, (((((((arr_2 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 242))) ? ((max(234, 0))) : ((((((arr_1 [i_0]) << (25742 - 25724)))) ? (-127 - 1) : 18446744073709551599)))))));
        var_21 ^= (arr_1 [i_0]);
        arr_3 [i_0] = (68227908 != 65519);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((max((arr_6 [i_1]), (arr_0 [i_1])))) ? ((562949953421311 | (arr_0 [i_1]))) : ((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1]))))));
        var_22 = ((((min((37744 & var_12), 126))) ? (arr_4 [i_1]) : (((arr_4 [i_1]) ? ((-8286363645599625432 ? var_3 : 11)) : (arr_2 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_23 = ((+(((arr_2 [i_2]) >> (204 - 185)))));
        var_24 ^= (((((arr_2 [i_2]) >> (var_8 - 12410775786790784608))) >> (-3923859421512933091 + 3923859421512933095)));
        var_25 = (max(var_25, ((((((((max((arr_6 [i_2]), 816047074981683464))) ? ((-(arr_9 [2]))) : (((var_15 ? 233 : (arr_8 [i_2]))))))) ? (arr_1 [i_2]) : ((((arr_1 [i_2]) && (var_4 + 15)))))))));
    }
    var_26 = ((var_0 ? ((((var_3 >> (var_7 - 14362941200333563190))))) : ((-(min(var_13, var_1))))));
    #pragma endscop
}
