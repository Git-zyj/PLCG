/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 ^= (((-338293089 | (((arr_0 [i_0] [i_0]) ? var_10 : (arr_3 [i_0]))))));
        var_21 ^= (max(-8005868643982425085, (((!(arr_3 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (max(((65535 - (arr_4 [i_1 - 1] [i_1 - 1]))), (((arr_4 [i_1 - 1] [i_1 + 2]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 + 1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 ^= (!9223367638808264704);
            arr_9 [17] [i_2] [i_1] = ((((((arr_5 [i_1]) ? 62089 : (arr_4 [i_1] [i_1])))) != 6694464203505601476));
        }
        var_23 = (~-34887038);
        var_24 += (max((((~(arr_5 [6])))), ((((arr_4 [i_1] [i_1]) ? (arr_5 [0]) : (arr_7 [6] [i_1 - 1] [6]))))));
    }
    var_25 = (~var_14);
    var_26 = ((max(var_15, var_9)));
    #pragma endscop
}
