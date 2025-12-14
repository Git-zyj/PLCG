/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [0] = (arr_4 [i_0] [i_1] [i_1]);
            var_20 = (arr_4 [i_0] [i_0] [i_1]);
        }
        var_21 = ((((max((arr_2 [i_0] [i_0]), 4645958851169716853))) && (arr_0 [i_0])));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_22 = (((-7017 + 2147483647) >> (-8780827782757487259 + 8780827782757487260)));
        var_23 = (arr_3 [10] [10] [10]);
        arr_10 [i_2] = (min(1, 12574181025034977886));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_4] = ((((min(-7012, (-2147483647 - 1)))) ? ((min(64, 231))) : ((min((arr_14 [i_4 + 3]), var_18)))));
                var_24 += 70;
                arr_18 [i_4] [i_4 + 3] = (((((~(!var_12)))) ? ((var_12 ? (arr_0 [i_3 - 2]) : -7017)) : ((((!(arr_13 [i_4])))))));
                var_25 = var_6;
            }
        }
    }
    var_26 = (max(var_26, var_12));
    var_27 = var_3;
    var_28 = (((((var_14 ? var_13 : -7020))) ? var_10 : (!1606886711)));
    #pragma endscop
}
