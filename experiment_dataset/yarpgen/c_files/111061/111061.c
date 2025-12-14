/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_14 ? var_4 : var_1);

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = (((((((!(arr_1 [4]))))) > ((167 ? var_5 : (arr_1 [i_0]))))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_17 += (min(((-(arr_1 [i_1]))), (((102 ? 9223372036854775789 : (arr_0 [i_0 - 1]))))));
            var_18 = (max(var_18, var_2));
            arr_6 [i_0] = var_0;
            arr_7 [i_0 - 3] [i_1 - 2] = ((-((((max((arr_0 [i_1]), (arr_4 [i_1]))) <= ((((arr_5 [i_0 - 3] [i_1]) ? 206 : (arr_0 [i_1])))))))));
        }
        arr_8 [i_0 + 1] [i_0] = (((arr_5 [i_0] [2]) ? var_2 : ((-((var_2 ? var_10 : -51))))));
        var_19 ^= (((arr_3 [i_0] [3]) ? (((arr_5 [i_0 - 1] [i_0]) ? 4424327190063026197 : (arr_5 [i_0 - 1] [i_0 + 1]))) : (min((arr_1 [i_0 - 3]), (((arr_4 [i_0]) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0])))))));
        arr_9 [i_0] = (((arr_1 [i_0]) ? ((var_10 ? (arr_5 [i_0] [i_0]) : 1278949921)) : 2147483642));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_14));
        var_21 ^= (arr_0 [i_2]);
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_22 = (((((((arr_4 [i_3]) && 3898877041)) ? (arr_14 [i_3]) : (max((arr_3 [i_3] [i_3]), var_2))))) && var_12);
        var_23 ^= (((arr_12 [6]) ? (((((4167515636080769563 | (-2147483647 - 1)))) ? ((1 ? 1 : (arr_2 [i_3 + 1] [i_3]))) : (1 / 1))) : ((((min((arr_11 [i_3 - 3] [i_3 - 3]), (arr_4 [i_3]))))))));
        var_24 = var_9;
        var_25 = 4294967295;
        arr_16 [i_3] [i_3] = 18048279886754098452;
    }
    #pragma endscop
}
