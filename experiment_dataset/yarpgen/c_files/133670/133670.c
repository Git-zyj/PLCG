/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 173));
    var_19 = 173;
    var_20 = (((((((170 ? var_17 : 177))) ? ((745414557 ? var_13 : -8666)) : var_4)) * (((!(((1 ? var_2 : 3409357622))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((101 ? (-10 * -119) : (((((-6453 + (arr_2 [i_0])))) ? (1 ^ 19604) : ((85 ? (arr_3 [i_0]) : 164))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = ((((((arr_2 [i_0]) * (arr_0 [10] [i_1])))) || ((min(var_9, (arr_2 [i_0]))))));
            var_22 = (min(((164 | (arr_0 [i_1] [i_0]))), (arr_0 [i_0] [i_1])));
            var_23 = 115;
            var_24 = (((((((((arr_5 [i_0] [i_1]) ? (arr_6 [i_1]) : (arr_1 [i_0])))) ? var_0 : (arr_2 [i_1])))) ? (min((var_9 - var_3), -113)) : (((2 >= var_11) ? ((min(var_12, (arr_0 [i_1] [i_0])))) : ((min(var_4, (arr_0 [i_0] [i_1]))))))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_25 = ((((min(73, (min(15, var_15))))) | (max((~101), (17216 / var_14)))));
            var_26 = (min(var_26, (((((((!((((-2 + 2147483647) >> (((arr_6 [18]) - 13237))))))))) <= (((40 * var_9) ? (min((arr_3 [i_0]), var_10)) : 11185144472280130136)))))));
            var_27 = (max(((881846062 ? (-32767 - 1) : 22870)), 9223372036854775807));
        }
        var_28 *= ((((var_4 && ((min(168, 1150998539))))) ? (-8080408391779565504 + 6) : (((min(104, (arr_0 [i_0] [i_0])))))));
        var_29 = (min((((((-20420 - (arr_1 [i_0])))) ? (arr_7 [i_0] [3] [i_0]) : (arr_5 [10] [10]))), 123));
    }
    #pragma endscop
}
