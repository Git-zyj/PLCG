/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~17669130676666581367);
        var_19 |= ((-(arr_1 [i_0 - 2])));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_20 = 9223372036854775789;
        var_21 = (((arr_4 [i_1] [i_1 + 2]) == (((arr_4 [i_1 + 2] [i_1 - 1]) ? 4294967295 : (arr_4 [i_1] [i_1])))));
        var_22 = 1;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_23 = (min(var_23, ((((arr_7 [i_2 - 1]) << (((0 > ((((arr_6 [i_2] [i_2]) && (arr_5 [11]))))))))))));
        arr_10 [i_2] [14] = ((-(((~var_5) * ((((arr_6 [i_2 - 1] [i_2 - 1]) < var_5)))))));
        var_24 = (min(var_24, (((~((((max(var_16, 2147483647))) ? (min(15, -4285702061232627401)) : 15)))))));
        arr_11 [i_2] [i_2] = (((arr_5 [i_2 - 1]) > 7099702537713734642));
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_25 = ((((((arr_13 [i_3 - 2]) ? (arr_12 [i_3] [i_3 + 1]) : (arr_14 [i_3] [i_3])))) && (((((!(arr_14 [i_3] [i_3]))))))));
        arr_15 [23] &= ((((((var_16 ? var_6 : 0)))) < ((max((arr_12 [i_3] [i_3]), ((((arr_12 [i_3] [i_3 - 1]) >= 7099702537713734643))))))));
        var_26 = (min(var_26, (arr_14 [i_3] [i_3])));
    }
    var_27 = (max(-5220958216996257256, (((min(var_7, var_0))))));
    var_28 = (1147173374417185186 && var_6);
    #pragma endscop
}
