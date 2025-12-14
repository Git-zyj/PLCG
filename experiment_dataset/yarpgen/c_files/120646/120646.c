/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((!(arr_12 [i_2] [i_2] [i_2] [i_3])));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (((min(var_3, (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))) ? ((((arr_9 [i_3] [i_2] [i_2] [i_3]) + ((64 - (arr_9 [i_0] [i_0] [i_0 - 1] [10])))))) : (((arr_8 [i_0 + 1] [i_1] [i_2] [i_2] [i_2]) - -91)));
                                arr_14 [i_2] [i_3] [9] [i_0 + 1] [i_0 - 1] [i_2] = var_6;
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] = (((((~(arr_7 [i_0] [i_0 - 1] [i_0 - 1])))) && ((((~(arr_6 [i_0] [10] [i_0] [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                arr_21 [11] [i_6] [i_5] = (arr_6 [i_5] [1] [i_5] [i_5]);
                var_21 = (max(var_21, ((+(((((arr_1 [i_5 + 1]) ? 60 : 41258))))))));
                var_22 |= (min(((((arr_5 [i_6 - 2] [8] [8] [i_5 + 1]) ? (arr_17 [i_5 + 1]) : (arr_17 [i_5 - 1])))), (((((2790633419 ? (arr_9 [i_5 + 1] [i_6] [i_5] [i_5]) : 24284))) ? (arr_9 [i_5 - 1] [i_6 - 1] [i_6 - 3] [i_6 + 2]) : var_5))));
                var_23 = 127;
            }
        }
    }
    var_24 = -12;
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    var_25 = 128;
                    var_26 = (max(var_26, (!var_19)));
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
