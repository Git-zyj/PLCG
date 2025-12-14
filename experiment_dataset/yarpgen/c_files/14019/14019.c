/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 17558801788517322883;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_2 [1]) < ((max(-1698729731, var_6))))) ? (~206) : ((var_4 % (min(var_14, (arr_2 [i_0])))))));
        var_18 = (~var_16);
        var_19 = (min((max(49, 113)), 202));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_6 [i_1]) == var_11));
        var_20 *= var_2;
        var_21 *= ((var_2 ? var_14 : (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 = (((~-13177823054319945173) == ((max(51, (((arr_4 [i_2] [i_2]) ? (arr_7 [i_2]) : 1)))))));
        arr_13 [i_2] = 187;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] = (arr_14 [i_3]);
        var_23 ^= (+-25184);
    }
    var_24 = var_1;
    #pragma endscop
}
