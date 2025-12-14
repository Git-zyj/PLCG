/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 -= var_18;
        arr_2 [i_0] = (max(0, 1524051036));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = ((((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) ? (arr_4 [i_1]) : 1846891468));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = max(1951873180, (max((max((arr_7 [i_1] [i_1]), 2147483647)), 1)));
            var_22 = (((((~(max((arr_3 [i_2] [16]), var_5))))) ? ((~(arr_4 [i_1]))) : (((var_10 << (min(31457280, var_7)))))));
            var_23 = (((arr_4 [i_1]) ? var_13 : -var_0));
        }
        var_24 &= ((((((!(arr_7 [i_1] [1]))) ? (arr_8 [i_1] [i_1]) : ((var_9 ? var_7 : (arr_8 [i_1] [i_1]))))) <= (((0 << (31457308 - 31457293))))));
        var_25 |= ((-1951873180 ? 2924 : ((~((-1951873187 ? 2924 : 31457280))))));
        var_26 = (min(var_26, ((min(2701253877844362998, 1)))));
    }
    var_27 = (((~var_16) > var_2));
    #pragma endscop
}
