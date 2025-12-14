/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 *= (((((((max((-127 - 1), -1))) ? (max((arr_3 [i_4] [i_2] [9]), (arr_1 [i_0] [i_0]))) : (~var_11)))) ? ((min((max((arr_7 [14] [7]), (arr_5 [i_0] [i_4] [i_0]))), -1))) : ((((((arr_2 [i_0] [i_0]) ? 16368 : 14783242136905493402))) ? (~698927236) : ((2326590521 ? var_11 : (arr_0 [i_2])))))));
                                arr_11 [0] [i_0] [i_4] = ((~(~3582390410)));
                                arr_12 [i_0] [i_2] [i_0] = ((((min((((var_16 ? (arr_10 [16] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) : var_5))), (min((arr_1 [i_0] [i_1 - 1]), (arr_8 [i_1] [i_3] [i_4])))))) ? (max(4294967286, 67)) : (((-(((!(arr_0 [11])))))))));
                            }
                        }
                    }
                    var_20 |= ((((!(((var_2 ? 0 : (arr_8 [5] [14] [1])))))) ? ((((min((arr_9 [i_0] [i_0] [1]), var_16))) ? (max(2883363312, 10)) : (max((arr_4 [i_0] [4] [i_1] [i_2]), var_12)))) : ((((~(arr_10 [i_0] [i_2] [1] [i_2] [i_0] [1] [i_0])))))));
                }
            }
        }
    }
    var_21 = ((((!((max(var_1, var_3))))) ? ((max(((max(0, 1302))), (max(0, var_8))))) : ((((max(-59, var_18))) ? (max(var_14, 7027688406461942911)) : (((var_5 ? var_2 : var_5)))))));
    var_22 *= ((((1 ? 42 : 853505941))));
    var_23 = ((!(+-1)));
    #pragma endscop
}
