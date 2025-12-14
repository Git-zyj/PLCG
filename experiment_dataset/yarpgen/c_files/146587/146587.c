/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = ((var_5 & (max((var_12 ^ var_3), 48))));
    var_15 ^= var_6;
    var_16 = (((((min(var_10, var_8)) + var_10)) > ((((((var_0 ? var_9 : var_2)) < 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = var_9;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 = (((arr_2 [i_1 - 3]) ^ var_1));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_19 = (arr_7 [i_1 - 2] [i_1 - 2] [i_0]);
                        var_20 = 3227328705776953721;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((0 || var_9) - 4294967295));
                        arr_13 [i_4] [i_0] [i_0] [i_0] [i_1 + 1] [i_0] = (((arr_3 [i_1 + 1]) - ((((((arr_0 [i_1]) ? var_10 : (arr_3 [i_0])))) ? (min((arr_4 [i_1] [i_1]), (arr_0 [i_0]))) : ((((arr_5 [i_4] [i_0]) ? var_12 : var_12)))))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = 4294967295;
                            var_21 += 101911044;
                        }
                    }
                    arr_17 [i_0] [i_0] [i_2] = (((arr_5 [i_1 - 3] [i_0]) ? var_1 : ((-(arr_5 [i_1 + 1] [i_0])))));
                    arr_18 [i_0] [i_1] [18] [i_0] = ((1457666959 ? 32767 : 17419));
                    arr_19 [i_0] [i_1] [i_0] [i_2] = ((min(var_1, (((arr_5 [i_0] [i_0]) ^ var_11)))));
                }
                arr_20 [i_0] [i_0] = ((var_1 > (arr_9 [17] [i_1] [i_0] [i_1 - 1])));
                arr_21 [i_0] [i_0] = ((-(((arr_3 [i_0]) & var_7))));
            }
        }
    }
    #pragma endscop
}
