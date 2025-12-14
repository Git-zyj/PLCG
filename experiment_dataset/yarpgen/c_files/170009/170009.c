/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (max(var_14, ((((((~(var_1 > var_11)))) * (max(var_0, var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_0] [i_0] = (((((0 | 137) << 1))) - (min((max(13214409932878456534, 3572399013)), ((max((arr_5 [i_0]), 1))))));
                    arr_9 [i_0] [i_1] [i_2] = ((~(min((arr_4 [i_0] [i_2]), 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_0] [i_0 - 4] [i_0] = var_8;
                                var_15 = var_3;
                                arr_16 [i_4 - 2] [i_0] [i_2] [i_0] [i_1] [i_0] [i_0] = (((min((arr_14 [i_3]), ((192 ? var_0 : (arr_2 [i_2])))))) ? (arr_11 [i_0] [i_1] [i_1] [i_3]) : ((((arr_10 [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 3] [i_4 - 3]) ? (((((arr_13 [i_3] [i_1] [i_1] [i_4] [i_3]) + 2147483647)) >> (((arr_10 [i_0] [i_3] [i_0] [i_3] [i_4]) + 110)))) : 0))));
                                var_16 = ((((((var_0 ? var_5 : var_10))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((var_12 ? -78 : 1)))));
                            }
                        }
                    }
                    var_17 -= (((((((1 + (arr_14 [i_0])))) && (arr_2 [i_2]))) ? ((94 ? (((1 ? 103 : 7))) : (1990641668 / 1))) : ((((arr_14 [i_0 - 1]) ? ((var_6 >> (((arr_1 [i_0] [i_0]) - 4596836009563479742)))) : ((-(arr_5 [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_6] [i_1] [i_0 - 1] = var_8;
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = 65529;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (!var_3);
    #pragma endscop
}
