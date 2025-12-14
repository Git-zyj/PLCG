/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~var_8) ? (min(var_3, 3907049667)) : (var_1 < 3907049639))) << ((((-((min(var_6, var_9))))) + 50)));
    var_12 = (min((~238), var_2));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = ((~(((181 >= (((!(arr_1 [i_0])))))))));
        var_14 = (((((var_4 ? (min((arr_0 [i_0 - 1] [i_0]), var_4)) : (min(var_0, var_4))))) ? (((max(67, 0)))) : ((max(var_7, (((!(arr_1 [i_0])))))))));
        var_15 *= (20 < var_4);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_3 [i_1 - 2] [i_1]);
        var_17 = ((((((!(arr_1 [i_1 + 3]))))) + (((arr_1 [i_1 + 1]) << (((arr_1 [i_1 - 2]) - 2298929923))))));
    }
    #pragma endscop
}
