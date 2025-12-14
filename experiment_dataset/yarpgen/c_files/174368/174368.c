/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (~var_9);
                var_22 = (((((arr_3 [i_0] [i_0] [i_0]) ? 3262924005 : ((((var_5 > (arr_0 [i_1]))))))) & -32765));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_0] = 18446744073709551615;
                    var_23 = arr_4 [i_1] [i_1];
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                                var_24 = (((var_2 ? var_18 : 32767)));
                                arr_23 [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = (((arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]) ? ((var_7 ? 18446744073709551615 : (arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : -7474));
                                var_25 = ((2777478035 ? (((arr_13 [i_1] [i_3] [i_4] [i_4]) / 65535)) : -4503599627370496));
                                arr_24 [i_1] [i_1] |= (max((min(((var_4 ? var_17 : 9297074681239688777)), 1)), var_5));
                            }
                        }
                    }
                    var_26 = (-2147483647 - 1);
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_27 = arr_13 [i_0] [i_0] [i_0] [i_0];
                    var_28 += ((!(arr_19 [i_1] [i_6])));
                    var_29 = 4503599627370507;
                }
                arr_28 [i_0] [i_1] = 1032043290;
                var_30 = ((((max(-2147483641, ((var_6 ? 16389966399104858946 : var_16))))) ? (!var_6) : var_4));
            }
        }
    }
    #pragma endscop
}
