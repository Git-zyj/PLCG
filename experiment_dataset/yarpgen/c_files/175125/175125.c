/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max((((((((arr_1 [i_0] [i_0 - 2]) / var_5))) ? (arr_2 [i_0] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 - 2])))), (((arr_3 [i_0 - 1] [i_0 - 1]) | (arr_3 [i_0 - 2] [i_1])))));
                arr_5 [i_0] = ((((max(((((arr_0 [i_0]) | (arr_0 [i_0])))), (max((arr_2 [i_0] [i_1]), (arr_3 [i_0] [i_1])))))) ? (max((arr_3 [i_0 - 2] [i_0 - 2]), (arr_3 [i_0 - 2] [i_0]))) : (((!(arr_2 [i_0] [i_1]))))));
                arr_6 [i_0] [i_1] [i_1] = (max(((max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))), ((-(arr_0 [i_0 - 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                var_12 = (arr_3 [i_3 - 1] [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_13 = ((!(arr_0 [i_2 + 2])));
                                var_14 |= (arr_7 [i_3 - 1] [i_6]);
                            }
                            var_15 = (max(var_15, (((-((max(var_0, (arr_13 [i_3] [i_4])))))))));
                            var_16 = (max(12084, 53464));
                        }
                    }
                }
                var_17 = ((((min((arr_2 [i_2] [i_2]), 250))) ? ((((!(arr_4 [i_2] [i_3]))))) : (arr_13 [i_2] [i_3])));
                var_18 |= (((arr_3 [i_2] [i_3]) && ((!(arr_9 [i_3])))));
                var_19 = (arr_9 [i_2]);
            }
        }
    }
    var_20 *= 0;
    var_21 = ((((6474054361816790323 && (var_7 >= var_5))) ? var_2 : ((var_3 ? (16563 / var_0) : ((max(var_7, 1)))))));
    #pragma endscop
}
