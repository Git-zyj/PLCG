/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = 4629;
                    arr_7 [i_2] [1] [i_2 + 1] [i_2 + 1] = (arr_2 [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((44 / (var_10 - -59)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3] = 128;
                                arr_27 [i_3] [i_4] [i_3] = max(((1001460502 ? 799096119 : 799096119)), ((min((arr_24 [i_3 + 1]), (arr_5 [i_5 + 1] [i_5 + 1] [i_4 + 1] [i_3 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_32 [13] [i_3] [6] [i_4 + 2] [i_4 + 1] [i_3] [i_3 + 1] = (((max(1001460502, (arr_19 [i_3] [i_9])))) ^ ((3478451468 ? 255 : 799096119)));
                                arr_33 [i_3] [i_8] [i_3] [i_3] [i_3] = (((min((arr_31 [i_3 - 2] [i_3] [i_5 + 1]), ((0 ? (arr_4 [i_9]) : (arr_3 [0] [i_4 + 2] [i_5]))))) >= (((arr_13 [i_3] [i_3 + 1]) * (arr_13 [i_3] [i_3 + 1])))));
                                arr_34 [i_3 + 2] [i_8] [i_8] [i_3] [i_9] = ((((min((arr_11 [i_3] [i_3]), (min((arr_2 [4]), 3495871162))))) ? (arr_31 [i_4 + 1] [i_3] [i_8 + 1]) : var_1));
                                arr_35 [i_3] [i_3] [i_3] [3] [i_9] = (min(((-(((arr_24 [i_3]) ? 3495871192 : 65535)))), ((min(14762, 1001460502)))));
                            }
                        }
                    }
                    arr_36 [i_3 + 1] [i_4 + 1] [i_5 + 1] [i_3] = 816515828;
                }
            }
        }
    }
    #pragma endscop
}
