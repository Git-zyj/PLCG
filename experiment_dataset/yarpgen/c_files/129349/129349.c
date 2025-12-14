/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (((-9223372036854775803 > 1) >> (((~-28493) - 28463))));
        var_16 = (-(((arr_2 [i_0]) ^ -114)));
        var_17 = (arr_1 [i_0]);
        var_18 = var_5;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_3 [i_1]) ? (((var_3 || var_9) * (!1))) : 65525));
        var_20 = (max(var_20, (((-((min(164, -45))))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((min(var_12, (max((!1), (max((arr_5 [i_2]), var_3)))))))));
        var_22 = ((-107 != ((-(var_5 <= 48364)))));
    }
    #pragma endscop
}
