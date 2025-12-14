/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 ? (var_8 ^ var_8) : var_7));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [3] [i_0] [i_0] = (((((arr_3 [i_0] [0] [i_2]) ? (((!(arr_3 [i_2] [i_1] [2])))) : (arr_3 [i_0] [i_0] [i_2]))) | (((((arr_0 [i_1 - 1]) ^ (arr_4 [i_0])))))));
                arr_9 [i_1] = (((~(((arr_3 [i_0] [i_0] [i_2]) / var_9)))));
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_12 [i_1] [i_0] = max((((((var_0 ? (arr_1 [i_0] [12]) : (arr_6 [23] [i_1] [i_1])))) ? (((arr_3 [i_3] [i_1] [1]) ? (arr_3 [i_0] [i_0] [i_0]) : 1)) : (((arr_1 [i_0] [i_1]) ? (arr_3 [i_0] [3] [i_3]) : 6044)))), ((var_2 % (((arr_1 [i_0] [i_0]) ? (arr_0 [14]) : (arr_3 [i_0] [i_0] [i_3]))))));
                var_19 += (arr_5 [i_1 - 1] [1] [i_1] [3]);
            }
            arr_13 [i_0] [i_0] [i_0] = (((((~(((arr_11 [i_0] [i_0] [i_0] [2]) / (arr_7 [15])))))) ? (((arr_3 [i_1] [i_1 + 1] [14]) ? (arr_0 [i_1 + 1]) : -0)) : (arr_6 [i_1] [i_1] [i_0])));
            var_20 = ((((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 1])))) ? ((((arr_0 [i_1 + 1]) <= (arr_0 [i_1 + 2])))) : ((max((arr_0 [i_1 + 2]), var_10)))));
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            arr_17 [i_0] [i_0] = (var_0 * var_1);
            var_21 *= (max(var_15, ((((max(var_14, (arr_14 [i_0]))) >> (((((arr_16 [i_4] [i_0] [i_0]) ? -2100399766 : (arr_11 [i_0] [i_0] [i_0] [i_4]))) + 2100399768)))))));
            var_22 += min((((var_2 & 2100399765) ? ((var_8 ? (arr_4 [i_0]) : (arr_16 [i_0] [11] [i_4 - 2]))) : (arr_11 [i_4] [i_4 - 2] [i_4] [i_4]))), -1);
        }
        var_23 ^= var_6;
        var_24 = (min((max((arr_6 [i_0] [i_0] [i_0]), (arr_0 [i_0]))), var_13));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_25 = (min(var_25, ((((((((min(9223372036854775807, 656244996))) ? (arr_20 [i_5]) : var_5))) > (arr_19 [i_5]))))));
        var_26 = (max((min(((((arr_18 [3] [i_5]) ? (arr_19 [i_5]) : var_0))), (arr_19 [i_5]))), (arr_20 [i_5])));
        var_27 += (((((((((arr_20 [i_5]) ? -1309556198 : 0))) ? 3 : ((-1 ? var_13 : var_4))))) ? (((0 ? (arr_18 [i_5] [i_5]) : (arr_20 [i_5])))) : ((var_11 ? (((160954261 ? (arr_20 [i_5]) : var_17))) : var_7))));
    }
    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {
        var_28 = (max(var_28, (arr_18 [i_6] [i_6])));
        arr_23 [i_6 - 1] = ((((((max(var_5, var_7)) & (arr_5 [i_6] [i_6] [i_6 + 1] [i_6])))) || ((min((arr_22 [i_6 - 4]), (max((arr_7 [i_6]), (arr_6 [i_6] [i_6] [i_6 + 1]))))))));
        var_29 = (min(var_29, (((+(((arr_11 [i_6] [i_6] [i_6] [1]) ? (var_6 / -1) : ((((arr_20 [i_6 - 2]) ? (arr_15 [i_6] [i_6]) : 2100399765))))))))));
        var_30 *= var_9;
        var_31 = (((((((min((arr_2 [i_6]), (arr_7 [i_6])))) ? ((max(var_10, (arr_5 [i_6] [i_6] [i_6 + 1] [i_6])))) : (((arr_11 [i_6] [i_6] [i_6 - 4] [i_6]) ? (arr_18 [i_6] [i_6]) : (arr_6 [i_6 - 4] [i_6] [i_6 - 4])))))) ? (((((((arr_1 [i_6] [i_6]) ? var_16 : var_8))) || (((var_0 ? (arr_7 [i_6]) : var_6)))))) : (~var_5)));
    }
    #pragma endscop
}
