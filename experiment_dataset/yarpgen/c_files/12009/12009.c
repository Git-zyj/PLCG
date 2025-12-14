/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(var_6, var_0))) ? ((min(32726, var_13))) : ((max(var_5, var_2)))))) ? ((max(74, ((var_8 ? 1539247973 : var_11))))) : ((2226728576076707534 ? ((var_6 ? -2226728576076707547 : (-9223372036854775807 - 1))) : (max(var_9, var_3))))));
    var_15 = min(32763, var_12);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] |= (min(1, (((2095555302 ? 65 : (arr_0 [i_0]))))));
        arr_5 [20] |= -3911711314180867329;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (((arr_6 [i_1] [i_1]) ? ((((((2199411993 ? (arr_3 [i_1]) : -9223372036854775798))) ? (((arr_6 [i_1] [i_1]) ? 1504502382 : (arr_0 [9]))) : ((max((arr_6 [i_1] [1]), (arr_0 [i_1]))))))) : (((arr_8 [14]) ? (arr_7 [i_1]) : -8597695135771985704))));
        arr_10 [i_1] = (max(((max((arr_2 [i_1]), (max((arr_3 [i_1]), 14))))), (min((min(-7012493515023097466, 8597695135771985720)), 3297146474))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 ^= (min((arr_3 [i_2]), 3079758118));
            arr_13 [i_1] [i_2] = ((((((arr_1 [i_1] [i_1]) ? -101 : (arr_12 [i_1])))) ? (max(2150430496123042757, 2594164921126358766)) : (arr_0 [i_1])));
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_17 = (min(((max(47066, 165))), 15739));
        var_18 ^= ((((max((arr_2 [7]), 26946))) ? (max(((max((arr_0 [3]), 1))), (max(11252490632279672708, 1)))) : (arr_15 [3])));
        arr_17 [i_3] = (arr_1 [i_3] [i_3]);
    }
    var_19 = var_13;
    #pragma endscop
}
