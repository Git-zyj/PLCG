/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (~(!-463638700));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min(((max((max(var_14, 104981894)), 208))), (min(var_6, ((~(arr_7 [i_0] [i_1] [i_2])))))));
                                var_18 = ((((((((arr_4 [i_1]) < (arr_0 [i_0]))) ? (arr_0 [i_0]) : (arr_4 [i_3])))) ? ((((arr_9 [i_2 + 2] [i_1 + 1] [i_2] [i_1 + 1]) ? (arr_5 [i_1] [i_1 - 1]) : -463638700))) : (((((min((arr_5 [i_1] [i_4]), (arr_1 [i_3]))))) ^ 17270475089559662620))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_14 [i_6] [i_6] [i_5] = ((45 ? 34585 : 463638699));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((max((arr_17 [i_6] [i_6] [i_6]), ((~(arr_16 [i_7] [i_8] [i_9])))))))));
                                var_21 = (max(var_21, -30682));
                            }
                        }
                    }
                }
                var_22 = (((((arr_15 [i_5] [i_6] [i_5]) ? (arr_20 [i_6] [i_6] [i_6] [i_5] [i_5]) : (-32767 - 1))) >= ((max(((((arr_22 [i_6]) == (arr_22 [i_5])))), 127)))));
                var_23 |= ((max((((63169 || (arr_22 [i_5])))), 63169)));
                var_24 = 50;
            }
        }
    }
    #pragma endscop
}
