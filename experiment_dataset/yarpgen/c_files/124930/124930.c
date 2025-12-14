/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max((max(var_10, var_13)), (max((246 + var_2), ((70368677068800 ? -570888249 : var_9)))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 *= ((((min((((arr_1 [i_0]) ? (arr_1 [4]) : -1325)), ((min(57, var_13)))))) ? (min((((arr_1 [i_0]) ? var_12 : (arr_1 [i_0]))), var_0)) : (((min(677, 116))))));
        var_17 = ((27371 ? (((((((arr_0 [i_0]) ? -50 : (arr_1 [i_0])))) && (((var_14 ? var_4 : var_7)))))) : -686));
        var_18 = (arr_1 [i_0]);
        var_19 = ((((!(arr_0 [i_0]))) ? 8028927412690946 : ((138 ? (((677 ? (arr_1 [i_0]) : 32944))) : ((var_7 ? (arr_1 [i_0]) : 1947342955575679467))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_20 *= (((arr_3 [11] [i_1 - 1]) || (arr_3 [i_1] [i_1 - 2])));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_21 = var_13;
                var_22 = (arr_0 [i_1 - 2]);
                var_23 = (((arr_1 [i_0]) ? (arr_1 [i_2 - 1]) : 1328));
                arr_7 [i_0] [i_0] [i_2] = ((!(arr_3 [i_0] [i_2 - 1])));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_24 = -1328;
                var_25 = (!(((70368677068790 & (arr_6 [i_0] [i_3])))));
                var_26 = (arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 2]);
                var_27 += (((arr_6 [i_1 - 1] [i_1 + 1]) ? var_2 : (arr_6 [i_1 - 2] [i_1 + 1])));
                var_28 &= ((-121 ? (arr_2 [i_0] [i_1 - 2] [i_3]) : (((arr_3 [i_0] [7]) ? var_14 : (arr_3 [i_0] [i_0])))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [i_0] [i_0] [i_1] [i_0] = ((70368677068790 > ((((arr_3 [i_1] [i_1]) ? 45246 : 120)))));
                var_29 += (((arr_10 [i_1 + 1] [i_1 - 1]) ? var_9 : (-9223372036854775807 - 1)));
            }
        }
    }
    var_30 = var_9;
    var_31 = ((((min((((var_12 ? var_2 : 57))), ((var_3 ? -1325 : var_9))))) ? (min(var_9, -32)) : -var_13));
    #pragma endscop
}
