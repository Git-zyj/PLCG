/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [6] |= (((min(var_9, (arr_0 [16]))) + (((var_7 + (max(var_12, var_9)))))));
        var_14 = var_10;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_15 = (arr_4 [i_1]);
        arr_6 [i_1] [i_1] = 2059923345736888087;
        arr_7 [i_1] = ((((((arr_4 [i_1]) & (1 >> 1)))) ? ((var_13 & ((((-9223372036854775807 - 1) ? 1 : var_6))))) : (((((arr_5 [i_1]) < (-20 < 1)))))));
        arr_8 [i_1] = (((!19) < 1));
    }
    var_16 += (((((4 ? 4276166697 : 30))) ? (((var_1 ? (19 / 65535) : 61594))) : (min((var_3 / var_2), (((var_5 ? var_7 : var_10)))))));

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 |= 6941;
        var_18 = var_11;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_19 = (min(((((var_3 + var_7) < (((var_8 ? var_1 : var_6)))))), ((65535 % (((arr_12 [i_3]) ? var_11 : -1))))));
        var_20 |= (min((max(((5306191394534351081 & (arr_11 [i_3]))), (58713 == var_5))), var_4));
        var_21 = (arr_11 [i_3]);
    }
    #pragma endscop
}
