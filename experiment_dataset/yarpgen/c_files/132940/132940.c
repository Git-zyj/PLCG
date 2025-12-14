/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_4));
    var_16 = (((var_4 != var_0) & var_8));
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 = (((935747870 > 930) > -12));
                arr_6 [i_1] = (((max((arr_1 [i_0] [i_0]), var_0)) <= 1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (max(var_19, ((min((min((arr_8 [i_0] [i_1 + 1] [16]), var_12)), ((((arr_8 [i_0 + 2] [15] [i_0 - 1]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (!(arr_10 [i_0] [i_1] [i_2] [i_4]));
                                var_21 = (arr_10 [i_4] [i_3] [i_0] [i_0]);
                                arr_15 [i_1] [13] [i_1] [i_1] [i_1] [i_0] [i_1] = (max(((((arr_11 [i_0] [i_0] [i_0] [i_3]) <= (min(var_13, (arr_4 [i_1])))))), var_2));
                            }
                        }
                    }
                }
                arr_16 [i_1] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((((((min(2574298558, (arr_22 [i_6] [i_5] [i_1] [i_0] [i_0])))) % (max((arr_20 [i_1]), 12287499202543668555)))) * (((arr_11 [i_6] [i_5] [i_0 - 2] [i_0 - 2]) ? 18252461075432600723 : (arr_11 [i_0 - 1] [i_0] [i_0] [i_0]))))))));
                            var_23 = var_1;
                            var_24 = (max(var_24, 20));
                            var_25 = 42177;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
