/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, 32767));
        var_15 = var_6;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_16 ^= (((arr_3 [24]) ? (arr_3 [18]) : (arr_4 [2])));
        arr_5 [i_1] [i_1] = var_2;
        var_17 = (i_1 % 2 == zero) ? (((((arr_3 [i_1]) ? ((((var_13 + 2147483647) << (arr_3 [i_1])))) : (max(314353348, var_2)))) >> ((((111 ? 6840801205262473652 : (arr_4 [i_1]))) - 6840801205262473631)))) : (((((arr_3 [i_1]) ? ((((var_13 + 2147483647) << (((arr_3 [i_1]) - 1))))) : (max(314353348, var_2)))) >> ((((111 ? 6840801205262473652 : (arr_4 [i_1]))) - 6840801205262473631))));
    }
    var_18 = var_11;
    var_19 -= ((26723 ? (144 / var_7) : var_0));
    #pragma endscop
}
