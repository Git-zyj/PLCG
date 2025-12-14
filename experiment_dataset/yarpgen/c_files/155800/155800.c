/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (min(-var_4, (~var_13)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max(1, ((min(var_4, (arr_6 [7] [i_1] [4] [i_3]))))));
                                var_17 = ((!((min(2092956541409394173, (arr_3 [i_2 + 2]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_18 = -var_1;
                                var_19 = (((var_11 ? ((((24 >= (arr_8 [i_0] [i_5] [i_5] [i_7]))))) : (((arr_13 [i_5]) ? (arr_8 [i_0 + 2] [i_1] [i_5] [i_7]) : var_11)))) & (((max(13, var_6)))));
                                var_20 = (((((-(arr_6 [3] [i_6 - 2] [i_1 - 1] [i_1 - 1])))) ? (((8277285750403935809 ? (arr_11 [i_5] [i_7 - 1] [7] [i_7] [i_6 + 2] [i_5] [i_5]) : (arr_11 [i_5] [i_7 - 1] [i_7] [i_6] [i_6 + 1] [13] [i_5])))) : ((65535 ? (arr_12 [i_6] [i_6 - 2] [16] [i_1 - 2]) : (arr_17 [i_7] [i_7 + 1] [i_7] [i_7] [i_6 - 2] [i_5] [i_1 + 1])))));
                            }
                        }
                    }
                }
                var_21 = (~(min((~var_2), (arr_17 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] [i_1 - 2]))));
                var_22 = min((arr_10 [i_0] [i_1 - 1]), (((var_5 ? var_1 : (arr_12 [i_0] [i_0] [i_1 + 1] [4])))));
            }
        }
    }
    var_23 = (min(var_23, ((max(var_4, (max((var_8 < var_13), (51 % var_8))))))));
    #pragma endscop
}
