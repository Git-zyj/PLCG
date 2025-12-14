/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 + var_15);
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (+(((arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2]) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]) : -25419)));
                                var_19 += (((!((min((arr_4 [1] [i_1] [2] [i_3]), (arr_2 [i_0] [i_0] [i_0])))))));
                                var_20 -= ((((-(((arr_8 [1] [0] [1] [3]) ? 124 : (arr_5 [i_3]))))) != 1));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_21 = ((((min(12, (((var_12 + 2147483647) >> var_13))))) ? (((((!(arr_3 [i_1] [i_5 + 2])))))) : ((((max(-6457, 1))) ? (max(1, (arr_2 [8] [i_1] [i_5]))) : var_10))));
                    var_22 = (!(((((arr_5 [i_1]) ? 1 : var_0)) < ((min(var_4, -105))))));
                }
                var_23 = min(1, (1142135995 ^ 1));
            }
        }
    }
    #pragma endscop
}
