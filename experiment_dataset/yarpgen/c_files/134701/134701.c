/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 -= ((((min(var_10, ((((arr_0 [i_0] [i_0]) > 12281)))))) ? (max((arr_3 [i_0]), ((max((arr_2 [i_1]), (arr_2 [i_1])))))) : var_5));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 = (((max((arr_4 [i_2] [i_2] [i_0] [i_0]), ((var_6 << (var_9 - 4940))))) << (var_7 + 1885086261)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = ((((arr_6 [i_0] [i_1] [i_4] [i_4 - 2]) - (arr_6 [i_0] [i_4] [i_1] [i_4 + 3]))));
                                var_20 = arr_1 [i_0];
                                var_21 = (((((((var_15 + 2147483647) << (((var_7 + 1885086218) - 2))))) ? (!32761) : (((arr_2 [i_3]) ? var_8 : 0)))));
                            }
                        }
                    }
                    var_22 = ((max(-17375, 7)));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_23 *= (!-17);
                    arr_13 [i_0] [15] [i_5] = (arr_10 [i_5] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_14 [i_0] [i_0] [i_1] [i_5] = (arr_6 [i_0] [i_1] [i_1] [13]);
                }
                var_24 |= ((~(((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
