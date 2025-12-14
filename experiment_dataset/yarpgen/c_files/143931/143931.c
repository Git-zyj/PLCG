/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 ? var_9 : (min(511, (-32767 - 1)))))) || var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = -0;
        var_13 = ((3697933143 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] = (-8818814372876932566 % 16130509589012151118);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = ((-(arr_4 [i_1])));
        arr_7 [i_1] = (~13366);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [11] [i_2] = -1064851143305957806;
        var_15 = ((var_8 ? (((!(arr_1 [i_2])))) : (arr_1 [i_2])));
    }
    var_16 = 4034933468068792393;
    #pragma endscop
}
