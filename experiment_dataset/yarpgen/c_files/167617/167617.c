/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((max((arr_3 [i_1 + 2] [i_0] [4]), var_2)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 = ((((min((((!(arr_6 [i_0] [i_1] [i_3])))), 22576))) ? (((((min((arr_10 [i_3] [i_3]), (arr_6 [i_0] [2] [21])))) & 9223372036854775807))) : (((arr_10 [i_0] [i_3]) ? ((3924675908600261475 | (arr_1 [i_4]))) : (((var_7 ^ (arr_9 [i_0]))))))));
                                var_23 = (((arr_1 [11]) ? (min(9223372036854775789, (arr_1 [i_0]))) : (min((arr_1 [i_0]), (arr_1 [i_1])))));
                                arr_11 [i_4] [i_3] [i_3] [0] [i_0] = min((min((arr_4 [8] [8] [i_4]), var_2)), 246);
                            }
                        }
                    }
                }
                arr_12 [12] [i_1] = var_13;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            {
                var_24 = (arr_2 [i_6]);
                var_25 = (((9 << (5552907252605202945 - 5552907252605202939))));
            }
        }
    }
    var_26 = (min(var_3, ((((var_4 ? 1990621202 : 233)) % 32749))));
    #pragma endscop
}
