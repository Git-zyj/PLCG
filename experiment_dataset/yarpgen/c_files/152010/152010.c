/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((25001 * ((((max(var_13, var_6))) ? (117 || var_9) : var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_1] = (arr_7 [i_0] [12] [4] [i_0]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [12] [1] = ((((((arr_7 [i_3] [i_1] [i_1] [i_3]) ? (arr_0 [i_0]) : (arr_9 [i_0] [i_1] [i_4] [i_3] [i_4])))) * (((arr_5 [i_0] [i_1] [i_2] [i_2]) ? (arr_9 [i_4] [11] [i_2] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_2] [i_3])))));
                                var_17 = (max(var_17, ((((arr_0 [i_0]) ? ((min(var_7, (arr_6 [i_0] [i_2] [i_2])))) : ((0 ? var_10 : (arr_4 [i_0] [i_3] [i_4]))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] = (max(1, (((127 >= var_15) ? ((max(136, (arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_0])))) : ((835099122 >> (var_4 - 60)))))));
                    var_18 = (min(var_18, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    var_19 = ((~((~(arr_5 [i_0] [i_1] [i_2] [i_2])))));
                }
            }
        }
    }
    var_20 = ((((!(var_7 + var_8))) ? (~0) : var_6));
    var_21 = (max(var_21, var_1));
    var_22 += (max((~var_0), (max(var_7, var_11))));
    #pragma endscop
}
