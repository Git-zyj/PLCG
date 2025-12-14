/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(-var_9, (!var_0)))) ? (~var_0) : (--280925220896768)));
    var_19 += var_15;
    var_20 = var_15;
    var_21 = var_11;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_22 = max((((52980 ? ((1 * (arr_1 [i_0]))) : (arr_1 [i_0 + 2])))), 6925397788314249498);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_23 = ((((-(arr_0 [i_0 - 2]))) * ((-(arr_0 [i_0 + 2])))));
            var_24 = (max((((arr_3 [i_0 - 1]) + (arr_1 [i_0 - 2]))), (max(((var_1 ? 48304 : var_10)), ((108 ? (arr_2 [i_0]) : (arr_3 [i_0 - 2])))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_25 = (max(var_25, (((12547 ? 110 : (((arr_5 [i_0 - 2] [i_0] [i_0 + 2]) ? 6 : (max(var_9, (arr_5 [8] [i_2] [7]))))))))));
            var_26 = ((2490718670 != (((((arr_3 [i_0 + 1]) && ((!(arr_6 [i_0] [i_2])))))))));
            var_27 *= (((-(~-7068629425636212819))) != (((((((arr_0 [i_2]) ? (arr_7 [22] [i_2]) : -2082))) ? var_2 : (max(3547960534, (arr_2 [i_2])))))));
        }
    }
    #pragma endscop
}
