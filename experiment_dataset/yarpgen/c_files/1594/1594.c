/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = ((((max(((max(2299870573, 56728407))), (arr_0 [i_0 + 2])))) || ((max((max(var_3, var_1)), var_11)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_4] [i_4] [1] [i_2] [i_3] [i_3] [i_4] = (max((-2147483647 - 1), 28));
                            arr_15 [i_4] [i_1] [i_1] [i_3] [i_3] = ((((var_7 ? ((max((arr_6 [i_1] [i_3] [i_4]), (arr_13 [i_0 - 1] [i_0] [i_1] [i_1] [1] [i_1])))) : (((arr_12 [i_0] [i_4] [i_2] [i_2] [5] [i_4]) / 9223372036854775807)))) / var_2));
                        }
                        arr_16 [i_0] [i_0] = (((((var_3 ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]) : var_11))) ? ((var_2 ? (arr_10 [1] [i_2] [i_0]) : (arr_9 [i_0] [8] [i_0 - 1] [i_0 + 1] [i_0]))) : (min(var_1, var_12))));
                    }
                }
            }
        }
        arr_17 [i_0 - 1] [i_0] |= (min((arr_3 [i_0 + 1]), (max(((max((arr_4 [i_0] [i_0]), (arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1])))), (max((arr_7 [i_0 + 1] [i_0 - 1] [i_0]), var_10))))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_26 [15] = min(((2147483647 ? -11 : 3917705771)), -487836656);
                    arr_27 [i_5] [i_5] [i_6] [i_7] = (((arr_21 [i_5] [i_6] [i_7]) ? ((((arr_18 [i_7]) ? (arr_25 [i_5] [i_6] [i_7]) : (((arr_20 [i_5] [i_6] [i_7]) ? var_7 : var_10))))) : (min((((arr_24 [i_7] [i_6] [i_5]) ? var_2 : var_1)), ((min(128, 1)))))));
                }
            }
        }
        arr_28 [i_5] = ((((max(1, (~var_3)))) ? var_9 : ((max((((arr_25 [i_5] [i_5] [i_5]) ? (arr_21 [0] [i_5] [0]) : (arr_21 [i_5] [i_5] [i_5]))), (((arr_18 [i_5]) / (arr_21 [i_5] [i_5] [i_5]))))))));
    }
    var_13 = var_12;
    var_14 = ((65535 ? var_5 : var_7));
    #pragma endscop
}
