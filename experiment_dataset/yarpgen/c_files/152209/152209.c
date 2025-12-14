/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min(7, 8)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 -= ((-(((max((arr_4 [1] [i_1] [3]), var_11)) & (max(3345440064, 59))))));
                            var_15 = (((((var_11 ? -41 : var_7))) == 86));
                            arr_11 [i_3] [i_1] = ((max(var_10, ((max(-470353684488650524, 1602045603))))));
                            var_16 = ((!((((arr_4 [i_2 - 2] [i_2] [i_2 - 2]) ? (arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (arr_4 [i_2 - 1] [i_2] [i_2]))))));
                            var_17 = var_9;
                        }
                    }
                }
                var_18 = 2097151;
            }
        }
    }
    var_19 = var_4;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    arr_20 [i_6] = -var_6;
                    var_20 = ((+(((var_10 && var_8) ? (arr_16 [i_4] [i_5]) : ((max(var_2, -73)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_21 |= (max(-11, 64));
                                var_22 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
