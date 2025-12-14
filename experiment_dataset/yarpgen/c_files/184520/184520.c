/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_12 [1] [i_3] = var_17;
                            var_20 = (((max(var_6, 201737167515748868)) ^ ((((1023 <= (((arr_9 [i_0] [i_1] [i_1] [i_3] [i_4]) ? (arr_7 [i_4] [5] [11] [i_0]) : (arr_0 [i_0])))))))));
                            var_21 = 65535;
                        }
                        arr_13 [5] = ((+((max((arr_9 [i_0 - 2] [i_3] [i_3] [13] [i_3]), (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [1] [i_2]))))));
                    }
                    var_22 = (((min((arr_4 [i_0 - 2]), (arr_4 [i_0 - 2]))) < (((arr_7 [i_0] [i_0] [i_0] [i_0]) & -2142828122261689941))));
                    var_23 -= (min((min(((var_18 & (arr_4 [i_2]))), 63)), (((1 | var_19) ? (max((arr_4 [i_1]), 78)) : var_12))));
                    var_24 = ((((((((-(arr_1 [5] [i_1])))) ? 7 : (arr_7 [11] [13] [i_1] [i_0])))) ? ((((arr_11 [i_0 - 2]) ? (63 > 65535) : ((-(arr_5 [i_1])))))) : (((arr_6 [i_0 + 1] [7]) ? var_9 : (arr_9 [i_0] [i_0 - 1] [i_0] [17] [16])))));
                    arr_14 [i_2] [1] [i_0] = (arr_2 [i_0 - 2] [5]);
                }
            }
        }
        var_25 = (((max((arr_8 [5] [i_0] [5] [i_0 - 2]), var_0)) <= (((((min(16352, var_1))) | var_5)))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_26 = -65510;
        var_27 = (max(255, (((arr_7 [i_5 - 2] [i_5] [i_5 + 1] [i_5 + 1]) ? (arr_7 [i_5] [i_5] [i_5] [i_5 + 1]) : var_13))));
    }
    var_28 ^= ((((((min(65534, var_11))) * ((max(var_19, var_8)))))) ? ((min((((-28964 + 2147483647) >> (var_5 - 110))), var_16))) : var_9);
    #pragma endscop
}
