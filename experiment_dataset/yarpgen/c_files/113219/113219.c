/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 += ((((min(0, (((-(arr_3 [i_0]))))))) ? 18446744073709551591 : (arr_1 [i_0])));
        arr_4 [0] = (arr_1 [i_0]);
        var_19 = (max(var_19, ((((~var_9) < (min((arr_0 [i_0 - 1] [i_0 - 2]), (arr_0 [i_0 - 1] [i_0 - 1]))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((((((arr_5 [i_0] [i_0] [i_0 - 2]) % (arr_5 [i_0] [i_0] [i_0 - 2])))) ? -28 : (arr_3 [i_1]))))));
            var_21 -= (((((((min(9168, (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (min((arr_1 [7]), var_14))))) ? (max((arr_1 [i_0 + 1]), (var_4 + var_3))) : 41124889));
            var_22 = (((((arr_6 [i_0 + 1]) || (arr_6 [i_0 + 2]))) || ((((var_2 && (arr_1 [i_0 - 2]))) && var_16))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = (arr_5 [i_0 + 1] [i_2] [i_0 - 1]);
            arr_12 [i_2] [i_2] = -4;
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 = 18446744073709551615;
        var_24 = (max(var_24, (((0 ? 4253842406 : 844224451)))));
        var_25 *= ((((var_16 && (arr_5 [i_3] [1] [i_3]))) ? ((-9 ? (-9223372036854775807 - 1) : 37)) : (((var_11 - (arr_0 [i_3] [i_3]))))));
    }
    #pragma endscop
}
