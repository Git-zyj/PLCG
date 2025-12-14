/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((~(min(var_9, var_13)))), (-14 ^ var_4)));
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 += (min((((-14 != var_11) | (arr_1 [i_0] [i_0]))), (((arr_0 [1]) + (~-6)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (((min(var_8, var_11)) - ((((!(arr_0 [i_0])))))));
                        arr_11 [i_0] [i_0] [6] [1] [i_0] = (max((~-24), (arr_2 [i_0])));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_21 = ((23 - (min((arr_12 [i_2 + 2] [i_4 + 1] [i_4] [i_4] [i_0]), var_12))));
                            arr_14 [i_0] [i_4] = (((((var_17 ? (arr_6 [i_2 + 2] [i_4 + 1] [i_0] [i_4 + 1]) : (arr_12 [i_2 + 4] [i_4 + 1] [i_4] [i_4 + 1] [i_0])))) ? ((((arr_3 [i_2 + 2] [i_4 + 1] [i_4]) || (arr_3 [i_2 - 1] [i_4 + 1] [17])))) : (~var_7)));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [3] = ((~(((arr_5 [i_1] [i_0] [i_4 + 1]) >> (-5472371456626869377 - 102)))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_22 = 17;
                            var_23 += (((var_17 <= var_16) < (~1)));
                            arr_18 [i_2 + 2] [i_1] [i_2] [i_0] [5] = (min(-78, (min((arr_12 [i_1] [i_2 + 1] [i_2 + 3] [i_3] [i_0]), (arr_12 [i_1] [i_2 + 1] [i_2 + 3] [i_5] [i_0])))));
                            arr_19 [i_0] [10] [i_2 + 4] [i_3] [i_3] [i_0] [i_0] = ((((max((~5472371456626869377), ((max(var_5, (arr_7 [i_1] [i_3]))))))) || 23));
                        }
                        var_24 = (max(var_24, var_14));
                    }
                }
            }
        }
    }
    #pragma endscop
}
