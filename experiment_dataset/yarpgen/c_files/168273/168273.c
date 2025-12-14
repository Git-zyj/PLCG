/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] = -1623458540;
                var_19 = (max(var_19, var_16));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_11 [i_3] [i_3] [i_4] = ((min((!var_17), (-1623458540 < var_3))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 = (min(1623458539, var_7));
                                var_21 = ((-var_15 ^ (((!(arr_15 [i_2] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_6]))))));
                                var_22 = (max(var_22, ((max(-var_12, ((var_2 >> (var_9 - 10786831759394796073))))))));
                                var_23 &= (var_16 ? (((((arr_7 [i_5 + 1]) == (arr_17 [i_2] [i_4] [i_6] [i_5 + 1] [14]))))) : (min((arr_10 [i_5 - 2] [i_5] [i_5] [i_5]), var_18)));
                            }
                        }
                    }
                    var_24 -= (min(((((var_7 ? var_16 : -1623458548)))), (~var_9)));
                    arr_18 [i_3] = (arr_8 [i_2] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
