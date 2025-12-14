/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((var_6 ? (~var_3) : var_18))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = (max(var_20, (((+((var_0 ? (287948901175001088 > 287948901175001088) : ((var_15 ? (arr_0 [i_0] [i_1]) : 65535)))))))));
            arr_4 [i_1] [i_1] = ((2939126482 > (((-4 / (((var_16 < (arr_3 [i_1])))))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = ((2939126482 ? (((~(arr_0 [i_0 + 1] [i_0 - 1])))) : ((16777215 ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_7 [i_0 - 2])))));
            var_21 = (var_16 && 47);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_11 [i_3] [i_3] [i_3] = (((arr_5 [i_0 - 1]) ? 10699310438636261435 : var_17));
                var_22 = (4294967295 ? (arr_1 [i_0 - 2]) : 3666291741851905460);
            }
            var_23 ^= (((((!(arr_6 [i_2] [7]))) ? -48 : -2948)));
        }
        arr_12 [i_0] = var_13;
        var_24 -= ((var_13 ? (max((arr_7 [i_0 + 1]), 1355840814)) : ((((arr_7 [i_0 - 1]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1]))))));
    }
    #pragma endscop
}
