/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((~(min(-2374154091340134018, -2374154091340134018))))) || ((((1 ? var_11 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 ^= (var_6 / 2374154091340134017);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = (((2181846057 % 1) ? ((max((var_3 <= 137), ((9094835806330713304 ? -32747 : 23129))))) : (var_8 ^ var_9)));

                            for (int i_4 = 1; i_4 < 13;i_4 += 1)
                            {
                                var_15 = (max(var_15, ((((((3975 || ((var_9 < (arr_2 [i_1])))))) & (((arr_5 [i_0] [i_2] [i_2]) ? (arr_7 [i_0] [6] [i_2] [12] [i_1] [i_1]) : (arr_7 [i_0] [i_1] [i_0] [i_3] [i_1] [10]))))))));
                                arr_13 [i_0] [8] [i_1] [i_2] [i_0] [i_0] [i_4 + 1] = (arr_2 [i_0]);
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_16 = (~var_12);
                                var_17 |= (((61556 == 2639412588) ? 9703 : ((13121680662474449194 ? 43757 : -14074))));
                                arr_16 [i_0] [i_2] = min(10636, (min(8964119653470423831, 1)));
                                arr_17 [i_0] [4] [i_0] = (min((((var_2 ? var_12 : (arr_14 [i_0] [i_5] [i_0] [6] [i_0] [i_1] [i_0])))), ((-((32768 ? 9351908267378838312 : 10636))))));
                                arr_18 [i_0] [0] [i_0] [i_3] [0] = 1389587583;
                            }
                            var_18 += var_0;
                        }
                    }
                }
                var_19 = (min(var_19, 54893));
                arr_19 [i_0] [i_1] = (arr_7 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
