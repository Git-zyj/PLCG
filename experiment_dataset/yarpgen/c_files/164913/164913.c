/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min((((~var_18) ? ((var_3 ? 51524 : var_10)) : var_10)), (!2147483647))))));
    var_20 = (((~-var_10) && var_13));
    var_21 = ((((!var_3) ? 23 : (min(23, 2147483647)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((~(arr_1 [i_0])))) ? (arr_1 [i_0]) : ((((arr_2 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - 39155))))))))));
        var_23 += 27687;
        var_24 = (max(var_24, (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_25 &= (((((arr_2 [i_1] [8]) ^ (((arr_1 [i_1]) ? var_4 : (arr_4 [i_1 + 2]))))) < (min((arr_2 [i_1 + 2] [i_1 + 4]), var_10))));
        arr_6 [i_1 + 4] = ((3893553995 ? 2211953857743252217 : 2147483647));
        var_26 ^= (((-(min(1535679167, var_9)))));
        var_27 = (min(var_27, (((-(arr_1 [i_1]))))));
    }
    #pragma endscop
}
