/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (min((7 | -var_12), (((+((max((arr_3 [i_1]), 249))))))));
                    var_14 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_15 = (!8656057744531612323);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            {
                var_16 = (max(var_16, (!249)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_4] [i_3] [i_6] [i_6] = (arr_1 [i_3 - 1]);
                            var_17 = (max(((((((var_3 ? var_5 : var_11))) ? (arr_17 [i_3 + 1]) : 6))), ((~(arr_0 [i_3])))));
                            var_18 = (arr_6 [1] [1] [1]);
                            arr_21 [i_3] [i_6 - 1] = 12852;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_19 = var_12;
                                arr_33 [i_3 + 1] [i_4] [i_3] [i_8] = ((+(max((arr_26 [i_3] [i_4]), ((var_11 ? (arr_2 [i_3] [i_9]) : 12852))))));
                                var_20 = (min(((((((1 ? (arr_10 [i_4] [0]) : (arr_14 [2] [i_7] [i_8])))) && (((arr_22 [i_8]) && -17828))))), ((~(arr_17 [i_3 + 1])))));
                                var_21 = ((!((max(((max(12852, 63))), 17)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
