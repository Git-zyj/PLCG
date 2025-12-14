/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [16] = (max(var_6, (((((var_13 ? (arr_1 [i_0] [i_1]) : var_9))) ? 1992519808 : ((min(5689, var_8)))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_17 = (((max(var_3, (~var_15)))) ? var_0 : (((!(arr_5 [i_0] [11] [i_1] [i_2])))));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (~(((var_10 / (arr_2 [i_0] [i_2] [i_3])))));
                        arr_10 [i_0] [i_0] [11] [i_3] = max(-30076, (min(var_12, var_10)));
                        var_19 = ((((max(11, (max((arr_1 [i_2] [i_2]), var_9))))) ? (max(2147483647, var_3)) : (arr_3 [i_3] [i_2])));
                        var_20 = 26008;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_13 [i_0] = (!-26009);
                        var_21 = (min(((((var_2 ? 239 : var_8)) / (max(var_10, var_4)))), var_8));
                    }
                    var_22 = (min(((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (var_7 | var_0) : (~32767)))), (min((var_15 ^ var_1), var_13))));
                    var_23 = (((((~32747) ? var_13 : var_4)) == (~-32754)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((((-(max(var_2, 32)))) != 2147483647)))));
                                var_25 += 5698;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_20 [13] [i_1] [i_7] = (-32767 - 1);
                    arr_21 [i_0] [i_0] = (-((max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), var_11))));
                }
            }
        }
    }
    #pragma endscop
}
