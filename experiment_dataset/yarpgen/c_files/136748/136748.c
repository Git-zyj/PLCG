/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~((32333 ? 0 : (arr_2 [i_1])))));
                arr_6 [i_1] = ((((!(arr_0 [i_0]))) ? (((arr_2 [i_1]) ? var_7 : (arr_2 [i_0]))) : (0 % 66)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_14 = 66;
                var_15 |= (((((~(arr_7 [i_2])))) ? ((-66 ? var_9 : 16376)) : ((((arr_9 [i_2] [i_2]) != (((4535417642034080558 ? var_10 : (arr_11 [i_2] [i_3])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_7] = arr_20 [i_4 + 1] [i_4];
                                var_16 += (!1);
                                var_17 = ((-((185 ? (arr_12 [6]) : (((var_4 < (arr_17 [i_4] [i_4]))))))));
                            }
                        }
                    }
                }
                var_18 = ((((-var_2 ? ((((arr_18 [i_5] [i_4] [i_4]) > var_9))) : (arr_2 [i_4 + 1]))) <= ((-(~66)))));
            }
        }
    }
    #pragma endscop
}
