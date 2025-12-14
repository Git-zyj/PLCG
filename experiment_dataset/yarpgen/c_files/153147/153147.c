/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(192, var_4)))));
    var_21 = (max(var_13, var_16));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_22 = ((-((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_23 = (min(((max(1, (var_3 <= 27)))), (min(((var_11 ? var_17 : (arr_2 [i_0] [i_0]))), ((max(-21, (arr_2 [i_0] [i_0]))))))));
        var_24 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_25 = (min(34, -124));
    }
    #pragma endscop
}
