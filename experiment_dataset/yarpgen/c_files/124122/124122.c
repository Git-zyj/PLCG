/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    var_13 = (min((4194048 / var_6), var_6));
    var_14 = (max((((var_9 && (~var_11)))), (2720596009474757828 <= var_11)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0]);
        var_16 ^= -var_1;
        var_17 = (min(var_17, var_7));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] = (((((0 % (arr_2 [i_1 + 1])))) && ((max((9223372036854775794 && var_3), (max((arr_2 [i_1]), (arr_0 [14] [i_1]))))))));
        var_18 = (max(var_18, 18446744073709551615));
        var_19 = (min(var_19, (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = max((min(15728640, var_3)), ((var_7 % (arr_3 [i_2]))));
        var_20 = ((((max((((arr_3 [0]) ? (arr_5 [i_2]) : (arr_6 [i_2]))), (arr_1 [i_2] [i_2])))) ? (((-((((arr_5 [i_2]) > (arr_2 [0]))))))) : (arr_2 [i_2])));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (max(var_0, (min(((((arr_6 [i_3]) || (arr_6 [i_3])))), var_7))))));
        var_22 = (arr_1 [i_3] [i_3]);
    }
    #pragma endscop
}
