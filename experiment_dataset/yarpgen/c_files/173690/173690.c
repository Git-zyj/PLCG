/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_21 &= (min(2285096367, 2285096382));

                            for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
                            {
                                arr_15 [11] [11] [i_0] [i_3] [i_4] = ((((((!(arr_4 [i_4]))))) / (((((var_0 ? (arr_3 [i_2] [4]) : (arr_12 [i_0] [5] [i_2] [9] [i_3] [i_4])))) ? ((((arr_12 [i_0] [i_1] [i_2] [i_2] [7] [i_2]) | 1668684563))) : (max((arr_3 [i_0] [i_0]), (arr_10 [6] [6] [i_2])))))));
                                var_22 = var_4;
                            }
                            for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
                            {
                                var_23 = (min(((-(((arr_0 [i_0]) ? 14675384585177779513 : (arr_12 [i_0] [i_1] [0] [8] [i_3] [i_5]))))), (((((arr_6 [i_0] [4] [i_0]) ? var_18 : 4294967295))))));
                                var_24 = (min(var_24, (((~(((!(arr_1 [i_5 - 1])))))))));
                            }
                        }
                    }
                }
                var_25 &= ((~((var_19 ? 1675426608 : (arr_11 [i_0])))));
                var_26 = (((((31 >> ((((var_0 ? 8788519744585151323 : (arr_2 [11] [i_1]))) - 8788519744585151306))))) ? (max(121, (max((arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]), 25022)))) : (((-(arr_7 [i_0] [i_1]))))));
                arr_19 [i_1] = (max((((~((((arr_9 [6] [i_0] [i_1] [1]) <= (arr_2 [10] [4]))))))), (((arr_2 [i_1] [i_0]) ? (arr_2 [i_1] [i_0]) : var_16))));
            }
        }
    }
    var_27 = (~var_18);
    #pragma endscop
}
