/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = arr_13 [i_0] [i_1] [i_2] [i_3] [i_4];
                                arr_14 [i_4] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((min((arr_7 [i_0] [i_4]), (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]))))) & (((arr_12 [i_3]) + (!262142)))));
                                var_21 = (max((((((var_10 + (arr_8 [i_0] [i_0] [i_0] [i_0])))) + 3429954353259898580)), ((((arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 2]) - (arr_11 [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 1]))))));
                                var_22 = (max((21680 && 1), (arr_9 [i_2] [i_1 + 2] [i_1 + 1] [i_1 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = (max(((((((arr_17 [i_0]) ? (arr_11 [i_0] [i_1 + 2] [i_2] [i_5 - 4] [i_6 - 1] [i_6]) : -5231801630910292844)) > 32767))), ((146906199932806711 ? 2900262899 : 18299837873776744905))));
                                var_24 = (((arr_18 [i_0] [i_1] [i_6]) ? ((((max(-26, (arr_17 [i_0])))))) : (((((arr_12 [i_5 - 2]) | (arr_18 [i_6] [i_5 - 2] [i_6]))) & (((~(arr_5 [i_6] [i_6 + 3] [i_6]))))))));
                                var_25 += ((((((arr_0 [i_5 - 1] [i_1 + 1]) | -37))) ? (max((arr_0 [i_5 - 2] [i_1 + 2]), (arr_17 [i_1 - 1]))) : ((~(arr_0 [i_5 - 1] [i_1 - 2])))));
                            }
                        }
                    }
                    var_26 = (max(var_26, ((((18299837873776744895 % 146906199932806711) << (18299837873776744895 - 18299837873776744879))))));
                }
            }
        }
    }
    var_27 = 146906199932806711;
    #pragma endscop
}
