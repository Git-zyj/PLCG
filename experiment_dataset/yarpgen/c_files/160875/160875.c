/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 - 2] [i_0] = var_8;
                    var_13 += (max((((arr_4 [i_1 - 4] [i_1] [i_2 + 1]) ? var_2 : (arr_4 [i_1 - 4] [13] [i_2 + 1]))), (!var_11)));
                    var_14 = (((((arr_2 [i_2 + 1]) * 2579169022))) ? (((max((arr_2 [i_2 - 2]), var_6)))) : (((arr_3 [i_2 - 1] [i_2 - 1] [i_1 + 2]) & (arr_2 [i_2 + 2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_15 += (max((((var_5 >= (arr_0 [i_3 - 1])))), ((2579169028 ? (arr_10 [i_3 + 1]) : (arr_8 [i_3 + 1])))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((var_7 >> (arr_18 [i_6] [8] [i_5 + 2] [i_5 - 1])))) ? (max(2579169022, (arr_18 [i_6] [i_5 + 3] [i_5 + 2] [i_5 + 2]))) : (((min(var_5, (arr_18 [i_6] [0] [i_5 + 1] [i_5 + 1])))))))));
                            var_17 ^= var_11;
                            arr_21 [i_5] [i_5] = min(var_0, (((((1715798287 ? var_3 : 1))) ? ((1715798259 ? var_9 : (arr_5 [5] [i_4] [i_5]))) : 285274951)));
                        }
                    }
                }
                var_18 = (max(var_18, ((min(((((min((arr_1 [i_3]), var_5))) ? (arr_11 [0]) : ((2579169028 ? var_5 : var_4)))), (min((arr_15 [1] [i_4] [i_4]), ((var_10 * (arr_5 [i_3 + 1] [i_4] [i_4]))))))))));
            }
        }
    }
    #pragma endscop
}
