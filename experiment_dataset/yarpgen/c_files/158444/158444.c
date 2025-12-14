/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max(((max((max(128, var_12)), var_5))), 3776917168)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = (3776917189 | var_2);
                            var_18 = (max(var_18, var_4));
                            var_19 = (max((arr_3 [i_0] [i_1] [i_3 + 2]), var_3));
                            var_20 = (((arr_4 [i_0] [i_2] [i_3]) ? (arr_2 [i_0] [i_3 + 2]) : ((((0 != 0) >> 0)))));
                            arr_11 [i_3] = (((8 | 2317961646) == 1));
                        }
                    }
                }
                var_21 = (min(var_21, ((min(((((max((arr_9 [i_1] [i_0] [i_0] [i_0]), 3))) ? ((4294967295 >> (((arr_5 [17] [i_1] [i_1]) + 31118849)))) : 255)), 2000667540)))));
                arr_12 [i_0] [i_1] = 0;
                var_22 = (min(var_22, ((max((max((min(var_12, 16)), (arr_5 [i_0] [i_0] [i_0]))), (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = (min(18446744073709551615, 1));
                            var_23 *= ((((arr_13 [i_4 + 1] [i_1]) ? var_5 : (arr_13 [i_4 + 1] [i_1]))) >= (((arr_13 [i_4 + 1] [i_0]) ? (arr_13 [i_4 - 1] [i_4 - 1]) : (arr_13 [i_4 - 3] [i_5]))));
                            var_24 *= (min((1 | 518050118), (((arr_16 [i_0] [i_1] [i_4 + 1] [i_5] [i_5]) ? ((-(arr_17 [i_5] [i_4] [i_1] [i_1] [8] [8]))) : (((min(0, 103))))))));
                            arr_19 [i_0] [i_1] [i_4] [i_5] = 1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_25 = 1;
                var_26 = (max(var_26, ((max((min(((min(var_8, 3776917189))), (min(1, 10136564731625623961)))), (((((2000667544 && (arr_3 [i_6] [i_7] [i_7]))) && ((!(arr_20 [i_7])))))))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_28 [i_9] [i_6] = (arr_3 [i_8 + 1] [i_8 + 1] [i_8]);
                            arr_29 [i_6] = 0;
                        }
                    }
                }
                arr_30 [i_7] [i_6] = (((arr_8 [i_7] [i_7] [i_6] [i_7] [i_7]) & (((arr_22 [i_6] [i_7]) ? 16677215083837626237 : (((1 >> (-1276258590 + 1276258619))))))));
            }
        }
    }
    #pragma endscop
}
