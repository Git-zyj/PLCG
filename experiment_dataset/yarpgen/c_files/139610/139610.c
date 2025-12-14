/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = (max(var_18, ((max((max(var_0, var_10)), var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((((8887152904329457320 ? (arr_0 [i_0] [i_0]) : var_6))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 = ((((8 ? var_7 : (arr_5 [i_0])))) ? ((2148778387 ? (arr_4 [i_1] [i_1] [i_0]) : (arr_1 [i_0]))) : (arr_5 [i_1]));
            arr_6 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_13));
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                var_21 *= 8887152904329457320;

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_22 = var_3;

                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = (((15 ? 980894554 : (-127 - 1))));
                        var_23 = ((!(((116 ? var_5 : 1)))));
                        arr_21 [i_6] [i_2] [i_4] [i_2] [i_2] = (arr_9 [i_4 - 2] [i_3 - 1]);
                        var_24 *= (((arr_13 [i_4] [i_3] [i_4] [i_6]) ? ((((var_1 != (arr_7 [i_4 + 2] [i_3 - 2]))))) : (((var_10 ? var_0 : var_10)))));
                    }
                    arr_22 [i_2] [i_3] = (max(((((arr_2 [i_3 + 1] [i_4 - 1]) ? ((~(arr_11 [i_2]))) : (arr_18 [i_2] [i_3] [i_4] [i_5])))), (((((~(arr_16 [i_2] [i_3] [i_4] [i_5])))) ? (((arr_10 [i_3]) ? (arr_5 [i_3 - 2]) : (arr_1 [i_2]))) : ((((!(arr_13 [i_2] [i_3] [i_4] [i_5])))))))));
                    arr_23 [i_2] [i_3 - 1] [i_4] [i_4] = (((~-var_12) ? var_1 : ((-(arr_14 [i_3 + 1] [i_3 + 1] [i_4 + 1] [i_4])))));
                    arr_24 [i_2] = ((!(arr_2 [i_4] [i_5])));
                }
                var_25 = arr_13 [i_2] [i_3] [i_4] [i_4];
                var_26 = (arr_14 [i_4 + 1] [i_3 - 2] [i_3] [i_2]);
            }
            var_27 = 18;
            var_28 = (max(var_28, (((((((!1) ? (arr_8 [i_2]) : (min((arr_13 [i_3 + 1] [i_2] [i_2] [i_2]), -8887152904329457320))))) ? ((-0 ? 10555217347597715496 : ((-(arr_1 [i_3 - 1]))))) : 8)))));
        }
        arr_25 [i_2] [i_2] = min((arr_13 [i_2] [i_2] [i_2] [i_2]), 49440);
        arr_26 [i_2] [i_2] = (min((8887152904329457322 > -1), -85));
        arr_27 [i_2] = ((((max(((min(1, var_0))), var_16))) ? ((~(((arr_0 [i_2] [i_2]) ? var_8 : var_14)))) : ((max(49440, (1 >= 67))))));
    }
    #pragma endscop
}
