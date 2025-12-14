/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((!var_12) && (var_13 && var_1)))), var_14));
    var_19 += (!var_17);

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = ((var_6 ? ((((arr_1 [i_0] [i_0]) / ((-(arr_1 [i_0] [i_0])))))) : var_3));
        arr_2 [i_0] = ((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_21 = (((!0) ? (!var_12) : (~var_3)));
        var_22 ^= ((+((((arr_4 [i_1]) > 2366826882)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_23 = ((((2139095040 ? 17091678151227621210 : -12)) >= var_9));
            var_24 = ((arr_4 [i_2]) ? (arr_6 [i_1]) : (arr_3 [i_1] [i_2]));
            var_25 = (((!196) & (arr_3 [i_1] [i_2])));
            arr_7 [i_1] [i_2] [i_2] = (((var_5 & var_12) ? -7360328285000573985 : (arr_5 [i_2] [i_1] [i_1])));
        }

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_26 = ((var_1 ? 2155872276 : (arr_0 [i_3])));
            var_27 = (~548537892);
            var_28 = (max(var_28, 166));
        }
    }
    #pragma endscop
}
