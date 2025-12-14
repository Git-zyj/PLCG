/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_5 [13] = (((!0) != (max((!18), (min(0, 1))))));
            arr_6 [i_0] [i_0] = var_6;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_14 = (((arr_9 [i_0] [i_2] [i_0] [i_0]) != (arr_4 [i_0] [i_2])));
                    var_15 = (arr_9 [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_28 [i_8] [i_4] [i_6 - 1] [i_4] [i_4] = (((~17480386689518572284) <= (arr_9 [i_4 + 1] [i_4 + 1] [i_6 + 1] [i_8 + 1])));
                            var_16 *= (arr_22 [i_4] [i_5 - 4] [i_6] [i_6] [i_8]);
                        }
                    }
                }
            }
            arr_29 [i_4] = (arr_9 [i_5] [i_5] [i_4] [i_4]);
            var_17 = (((max((min(17480386689518572284, 9774034083464094672)), ((max(32760, (arr_4 [i_4] [i_4])))))) + (arr_7 [14] [19])));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_33 [i_4] = min(((min((arr_26 [i_4 + 1]), var_5))), (arr_4 [i_9] [i_4]));
            var_18 = ((((((var_6 ? 1318780440 : (arr_7 [i_4] [i_4]))))) && (((arr_17 [i_4] [i_4 + 2] [i_9] [i_9]) <= ((((0 <= (arr_32 [i_4])))))))));
        }
        arr_34 [i_4] [6] |= (arr_17 [0] [i_4] [i_4] [i_4]);
        arr_35 [i_4] [i_4] = ((!(((max(var_5, 966357384190979352)) <= (max(966357384190979332, (arr_2 [i_4])))))));
    }

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_19 = (max(var_19, 16261998872214838635));
        var_20 = ((((!(arr_0 [i_10]))) ? (max((arr_4 [i_10] [i_10]), (arr_36 [i_10] [i_10]))) : ((var_7 ? (arr_36 [i_10] [i_10]) : (arr_8 [i_10] [i_10])))));
    }
    #pragma endscop
}
