/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_5 ? var_11 : (!var_0)))));
    var_16 = (min(var_16, ((((-22209 ? (((var_12 ? var_11 : 195)) : ((var_13 ? var_4 : var_12)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = 26;
                var_18 = (max(((!(var_6 && 16928))), (arr_4 [i_0] [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = ((((((var_8 ? var_1 : var_14)) ? (arr_3 [i_2 + 1] [i_2 + 1] [i_2]) : (~16928)))));
                            var_20 = var_0;
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~((((-22209 ? 48608 : var_7)) | (((min(var_9, 48599))))))));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_22 ^= (min(((min((arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 1]), var_9))), ((var_2 ? var_10 : 48624))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_23 = ((((max(((var_4 ? 48607 : 22208)), 106))) ? var_14 : (max(((1185741201 ? var_10 : (arr_15 [3] [i_6] [i_6] [9]))), (arr_15 [i_5] [i_6] [i_7] [i_8])))));
                                var_24 = (max(var_11, ((((255 | (arr_18 [i_4 + 1] [i_5] [i_6] [i_4 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
