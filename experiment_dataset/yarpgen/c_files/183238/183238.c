/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((-var_11 / (max(var_8, 12371)))), var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] = ((!(arr_10 [i_0])));
                                arr_15 [i_0] [i_2] [i_2] = (max((arr_9 [i_4] [i_4] [i_4] [i_4]), ((-19900 ? 229864350 : 229864350))));
                                var_19 = ((((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_0]), -3935))) ? ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))) : ((((var_9 < (max(var_4, (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_5] [i_2] [i_1] [i_2] = ((((max((arr_17 [i_6] [i_0] [i_5] [i_2] [i_6]), (arr_17 [i_0] [i_0] [i_0] [i_2] [1])))) ? (max(108, 229864350)) : (((229864350 ? 255 : 1)))));
                                var_20 = ((((min((arr_13 [i_0] [i_1] [i_1] [i_6] [i_6]), (arr_13 [i_6] [i_5] [i_2] [i_1] [i_0])))) * ((((0 <= 229864350) == (arr_18 [5] [5] [i_0] [12] [i_0] [i_0]))))));
                                var_21 = (((((!122) <= (arr_16 [i_0] [i_0] [i_0] [i_2]))) ? ((((arr_4 [i_2] [i_5] [i_6]) ? ((min((arr_0 [i_6]), var_7))) : ((var_13 ? 178 : (arr_0 [i_2])))))) : 229864350));
                                var_22 = (min(((((arr_21 [9] [1] [1] [i_5] [i_5] [1] [i_5]) > var_0))), ((416845207492029290 ? (arr_0 [i_2]) : (arr_0 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
