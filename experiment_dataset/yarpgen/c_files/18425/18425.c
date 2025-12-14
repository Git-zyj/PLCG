/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_18 += -78950849;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_19 = (max(var_19, (((arr_15 [11]) % ((min((arr_7 [i_1]), 245)))))));
                                var_20 &= (min(var_15, (min((arr_8 [i_1 + 2] [i_1]), 0))));
                                var_21 = (max(-1, ((255 ? (arr_9 [i_0]) : 83))));
                                var_22 = var_7;
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                var_23 = (max(var_23, (((!(((var_17 / ((78950848 ? 1 : 150))))))))));
                                var_24 = (max(var_24, ((-550357216 ? 125725215 : ((max((arr_16 [i_2] [i_2] [i_1 + 3]), (arr_19 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 2] [i_1] [i_1 - 3] [i_1 + 2]))))))));
                                var_25 = 1;
                                var_26 = (((arr_18 [10] [i_1] [i_1] [i_3 + 2]) || (((18 ? (arr_12 [9] [11] [i_0] [i_3 - 2] [i_0]) : 150)))));
                                arr_20 [i_2] [i_1] [i_2] [i_2] [i_2] = (((arr_18 [i_0] [12] [12] [12]) ? 239 : (!-119)));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                var_27 = arr_12 [i_1 - 2] [i_1] [i_1 + 1] [3] [i_1];
                                var_28 = (max(var_28, (min((max((((!(arr_6 [i_1] [i_1])))), var_1)), (((!((max((arr_6 [i_0] [i_0]), -1929517851))))))))));
                                arr_23 [8] [i_2] [i_2] [8] [8] = (arr_10 [i_0]);
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_29 = (max(var_29, ((min(248, ((((min((arr_3 [i_1]), (arr_18 [11] [i_2] [i_3 + 2] [i_7])))) ? (!-125) : (((170 < (arr_0 [i_7])))))))))));
                                arr_27 [i_2] = arr_25 [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                            var_30 = (max(var_30, (((~(max((arr_17 [i_3] [i_3] [11] [i_1] [i_3 - 1]), (min((arr_25 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_1]), (arr_17 [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_0]))))))))));
                            var_31 = (max(var_31, 127));
                            var_32 = (max(var_32, ((min((((((239 ? 233 : var_12)) < (max(240, 1642745271))))), -32)))));
                        }
                    }
                }
                var_33 = (min(var_33, ((min((arr_17 [i_0] [i_0] [i_1] [3] [8]), (max((arr_2 [i_0]), (arr_11 [i_1] [i_1] [i_0] [i_0]))))))));
            }
        }
    }
    var_34 = var_14;
    #pragma endscop
}
