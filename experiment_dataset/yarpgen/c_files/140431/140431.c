/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((min(-2, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 -= 21;
                arr_6 [i_0] = ((((((arr_4 [i_0]) ? ((((arr_0 [i_0]) ^ (arr_2 [i_0])))) : (arr_3 [i_0])))) ? (arr_3 [i_0]) : (max((237 < 503301740), ((-(arr_3 [i_0])))))));
                arr_7 [i_0] [i_0 + 1] [i_0] = (min((arr_5 [i_0] [i_0] [2]), (min(((((arr_1 [i_1] [i_1]) || (arr_2 [i_1])))), (arr_0 [i_0])))));
                arr_8 [i_0] [i_0] = (max(((max((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1])))), (min(var_5, (arr_4 [i_0 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_19 [i_4] [i_4] [i_4] [i_4] [11] [i_4] [i_0] = -3;
                                var_14 = (max(var_14, (((var_6 ? (max((arr_15 [i_0] [i_0] [i_2] [i_2] [14]), (((arr_15 [14] [0] [14] [i_3] [i_4]) + var_7)))) : ((((min(10527, (arr_5 [20] [i_4] [i_4 - 2])))) | (arr_10 [i_0 - 1] [i_3 - 1] [i_4 + 2] [i_4 + 2]))))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_11 [i_4 - 2] [i_0 - 2]), (arr_11 [i_4 + 3] [i_0 + 1])))) ? (arr_3 [i_0]) : ((((arr_13 [i_3 + 1]) ? var_9 : var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_1 && (((var_6 ? var_8 : 1534605447))));
    #pragma endscop
}
