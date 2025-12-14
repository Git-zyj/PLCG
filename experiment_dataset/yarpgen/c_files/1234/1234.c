/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-22504 ? var_12 : var_7)) / 2040));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(2040, -1));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = var_10;
            arr_5 [i_0] [i_0] = (((arr_2 [i_0] [16]) ^ (arr_3 [i_0])));
            var_16 = (min(var_16, 0));
            var_17 = (min(var_17, var_12));
            var_18 = (max(var_18, ((min(1, 2040)))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_2] = var_3;

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_19 ^= (min((arr_7 [i_0] [17] [i_0]), (1 + 0)));
                var_20 *= (1 - 56);
                arr_12 [1] [i_0] [i_3] = (max(((3433614227 ? (~1) : (arr_11 [i_0] [i_0] [i_0]))), 11216484312556825978));
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_17 [i_0] [i_2 + 1] [i_0] = ((-(max(var_10, var_6))));
                var_21 = (min(var_21, (((-(max(16574840594689106698, 524224)))))));
                var_22 += var_10;
                arr_18 [1] [i_2] [i_4] [i_4] &= (arr_14 [i_4] [i_2] [i_4] [i_4]);
                var_23 = (((~-542413304) > (((max(var_3, (arr_11 [i_0] [i_2] [i_4]))) * ((((arr_9 [i_0] [i_0] [i_0]) ^ 55488)))))));
            }
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_24 ^= (min(((min((arr_10 [8] [i_5 + 1] [i_5 - 1] [i_5 - 1]), 56))), (min((arr_0 [8] [i_5 + 1]), (((arr_4 [i_0] [12]) & var_5))))));
            arr_22 [i_0] = (--2035);
        }
    }
    var_25 = (min((~var_8), (((2040 ? var_10 : 1)))));
    #pragma endscop
}
