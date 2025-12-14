/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((-((max(0, 180))))) + 2147483647)) << (((arr_0 [i_1 - 3]) - 783216581428720870))));
                var_13 = ((163 / (arr_2 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_5] = var_2;
                                arr_21 [i_2] [i_3] [i_5] [8] [i_5] [i_6 - 2] [8] = 2766101660;
                                var_14 = (143 ? var_7 : 142);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_15 = (((((arr_24 [i_9 + 1] [i_9] [i_9 - 1] [i_3]) ? (112 < 54) : ((-7835 ? var_0 : 148)))) << (((((max(8999716954076116408, -66)))) + 85))));
                                arr_28 [0] [i_3] [0] [i_8] [i_7] [0] [i_9 + 1] = (min((arr_25 [i_7 + 1] [i_3] [i_7 + 1] [i_8] [i_9]), (max((arr_27 [i_2] [i_9 + 1] [i_7 + 1] [i_8] [i_9]), (arr_25 [i_8] [i_9 - 2] [i_7 - 1] [i_8] [i_7 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
