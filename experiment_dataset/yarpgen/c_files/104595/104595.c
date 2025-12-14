/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(var_2, (var_5 & var_2))), (((!((max(-12, 7))))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_11 = (max((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_0 [21] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 1]))), ((((((5843 ? 0 : 127))) || ((var_7 >= (arr_0 [i_0 + 1] [i_0 - 1]))))))));
        var_12 = ((((((-14569 ? -18013 : 27604))) ? 9223372036854775803 : var_3)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_13 = (max(var_13, -18013));
        var_14 = ((((var_3 ? 103 : var_1)) != ((~(arr_2 [i_1] [i_1 - 1])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_6 [i_2] [i_2] = 3584;
        var_15 = ((-9223372036854775804 ? 1 : 7053234344990980318));
        var_16 = (max(var_16, (arr_1 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_17 = max(((-7053234344990980319 ? 1 : (((min((arr_3 [i_3] [i_3]), 0)))))), -7053234344990980306);
        var_18 = 9223372036854775803;
    }
    #pragma endscop
}
