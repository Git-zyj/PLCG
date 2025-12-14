/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~((~(-2147483647 - 1))))));
    var_13 = (((26 != var_7) | ((((!var_6) != (var_4 & var_2))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 2] = (arr_1 [i_0]);
        var_14 = ((~(((arr_0 [i_0 - 3]) ? ((~(arr_0 [i_0]))) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = ((26 <= (arr_4 [i_1])));
        var_15 = (max(var_15, -27));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_16 ^= (arr_4 [10]);

        /* vectorizable */
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            var_17 &= -54;
            var_18 += (((9 != (arr_8 [12]))));
            var_19 = (((arr_6 [i_2] [i_2]) ? (((arr_3 [i_2]) ? 43386 : 22149)) : ((-(arr_7 [i_2] [i_2])))));
        }
    }
    #pragma endscop
}
