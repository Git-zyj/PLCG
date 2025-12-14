/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 = (max((((arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 3]) ? (arr_5 [i_2] [i_2 + 2] [i_2]) : (arr_3 [i_0 + 2] [i_2 - 3] [i_2 - 2]))), (!6112058989463596105)));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_16 = (((((((arr_12 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1] [i_3]) : (arr_10 [i_0] [i_1] [i_3] [i_4])))) ? -6038565871607710318 : -6588795051893340556)));
                                var_17 &= (min((arr_0 [i_3]), (arr_3 [23] [23] [i_3])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_5 + 2] [i_0] [i_6] [i_7] = -1351489519866307689;
                                var_18 = -9223372036854775798;
                                var_19 = ((((~(arr_14 [i_0] [i_7])))) >> (((~3177513367) - 1117453920)));
                            }
                        }
                    }
                }
                arr_23 [i_0] = 1351489519866307698;
                var_20 = arr_6 [i_0];
            }
        }
    }
    var_21 = (~218776552);
    var_22 = 1351489519866307689;
    var_23 = 5855095042087211366;
    var_24 = (max(var_24, var_9));
    #pragma endscop
}
