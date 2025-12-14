/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 87;
    var_12 = var_7;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((((!((max(124, (arr_2 [13])))))))) ^ var_3));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 = (min((arr_8 [9] [i_1 - 2] [15] [15]), ((-(min(5524252454934944355, 3332917402438792851))))));
                    var_15 ^= (min(((((((-10364 ? var_10 : var_8))) ? (arr_7 [i_0] [i_1 + 2] [6] [i_2]) : var_6))), (((arr_3 [6] [6] [6]) ? ((25106 ? (-9223372036854775807 - 1) : var_5)) : ((((!(arr_3 [i_0] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = var_1;
                                arr_14 [i_2] = 2135049442;
                                var_17 = (max(var_17, (arr_12 [7] [i_1] [i_2] [i_2] [i_3] [i_3])));
                                arr_15 [17] [17] [i_2] [i_3] [i_4] = (arr_13 [i_3 + 1] [i_3 + 1] [i_3] [i_2] [i_3 + 1]);
                            }
                        }
                    }
                    var_18 = (6420038088016004120 || -6420038088016004121);
                }
            }
        }
    }
    var_19 *= var_1;
    #pragma endscop
}
