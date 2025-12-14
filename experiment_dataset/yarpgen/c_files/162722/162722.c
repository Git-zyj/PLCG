/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((!(((-(min((arr_2 [i_0 + 1]), var_7)))))));
                var_18 = var_15;
                var_19 = (max(((~(arr_1 [i_0 - 2] [i_1]))), (arr_1 [i_0 - 1] [i_1])));
                var_20 &= (max((arr_3 [i_0 - 2]), (((!(arr_0 [i_0 - 2]))))));
                var_21 = (!(((~(arr_2 [i_0 - 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((-((((-(arr_5 [i_2 - 1] [i_3])))))))));
                            var_23 += var_4;
                            arr_13 [i_2] [i_4] [i_2 - 1] [i_4] = (arr_6 [10] [i_5]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_24 = ((max((arr_6 [i_7 - 2] [i_8 - 1]), (arr_19 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1]))));
                                var_25 = var_8;
                                arr_22 [i_6] [21] [i_6] [i_6] [i_6] [13] = (arr_2 [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_14;
    var_27 = var_4;
    var_28 = var_4;
    #pragma endscop
}
