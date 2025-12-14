/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (~((((min((arr_1 [i_0] [5]), -120))) ? (max(-1, 1380463462)) : ((116 ^ (arr_0 [11]))))));
        var_14 = (-1 | -121);
        var_15 ^= (((!18446744073709551615) ? (~119) : (((~5) + (((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = var_12;
        var_17 = -120;
        var_18 = (((min((arr_5 [i_1]), ((1567265060 ? (arr_5 [i_1]) : 118)))) == (min((arr_5 [i_1]), (arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_19 = (min((((17315428224871549829 != ((((arr_7 [i_2]) % var_7)))))), -24692));

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = 3625436946;
            var_20 = (min(var_20, (((var_13 ? ((min((((var_5 || (arr_6 [i_3])))), var_7))) : (min((((-120 && (-2147483647 - 1)))), ((1572659938 ? 120 : -120)))))))));
            var_21 |= (min((min((((-32767 - 1) * -32755)), (arr_9 [i_2] [i_2]))), ((var_8 ? (-32767 - 1) : (((!(arr_11 [14] [i_3 + 3]))))))));
        }
        var_22 ^= (32 * ((min(var_8, var_1))));
    }
    var_23 = ((!((((var_5 + var_11) ? 1572659938 : (var_9 / var_13))))));
    #pragma endscop
}
