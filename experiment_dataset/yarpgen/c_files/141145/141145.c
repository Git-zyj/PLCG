/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0]) ? 103 : (((arr_0 [i_0]) + (arr_3 [i_0]))))) + (((104 ? 18 : 116)))));
        var_17 = ((~(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = (((arr_1 [i_1 - 1]) ? ((((arr_4 [i_1 + 1] [i_1 - 1]) < (arr_1 [i_1 - 1])))) : (((arr_1 [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 - 1])))));
            var_18 = ((((((arr_4 [i_1 + 1] [i_1 - 1]) <= (arr_4 [i_1 + 1] [i_1 - 1])))) * (((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : 36))));
            var_19 = ((~(arr_4 [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_20 = ((((max(((((arr_5 [i_0]) == -53))), (arr_8 [i_0] [i_2 - 1])))) >= (((arr_8 [i_2 + 1] [i_2 + 1]) / ((max((arr_3 [i_0]), -56)))))));
            var_21 = ((104 ? ((max(-114, -105))) : (!8)));
            var_22 = arr_9 [i_2];
            arr_10 [i_0] [i_2] = (((arr_8 [i_2 - 1] [i_2 - 1]) >= (53 << 8)));
            arr_11 [i_0] &= arr_3 [i_0];
        }
        var_23 = (max((((arr_2 [i_0]) % (arr_2 [i_0]))), (arr_2 [i_0])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_16 [i_3] = ((!((((~(arr_15 [i_3])))))));
        arr_17 [2] [i_3] = -5;
        var_24 = (max(var_24, ((((arr_12 [i_3]) < ((min((arr_14 [i_3]), (arr_14 [i_3])))))))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_25 ^= ((((((arr_18 [i_4]) < (arr_18 [i_4])))) & ((min((arr_18 [i_4]), (arr_18 [i_4]))))));
        arr_20 [i_4] = (((-5 != -104) ? ((((arr_19 [i_4] [i_4]) != (arr_13 [i_4] [i_4])))) : ((((((arr_15 [i_4]) ? (arr_4 [i_4] [i_4]) : -67)) <= ((((arr_1 [i_4]) >= (arr_15 [i_4])))))))));
    }
    var_26 = -86;
    #pragma endscop
}
