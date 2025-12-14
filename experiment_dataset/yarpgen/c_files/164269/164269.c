/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, -8183664867952394735));
        arr_2 [i_0] = ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) : 18446744073709551615));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_20 = ((13028705950480189870 < ((((((var_13 ? (arr_0 [i_1]) : (arr_4 [i_1])))) ? ((((!(arr_4 [i_1]))))) : (max(3338040558, 3338040553)))))));
        var_21 = ((!(arr_1 [i_1] [i_1])));
    }
    var_22 = ((!(((var_3 ? 3330492395 : (((var_9 ? 56 : -32356))))))));
    var_23 = ((var_10 ? (var_17 % 956926738) : ((var_17 ? 3338040553 : var_9))));
    #pragma endscop
}
