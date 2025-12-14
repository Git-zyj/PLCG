/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((!((((min((arr_5 [i_0] [i_0]), (arr_3 [i_0] [i_1]))) / (((arr_3 [i_0] [i_0]) - (arr_2 [i_0] [i_1]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = ((4294967295 ^ (arr_4 [i_1])));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = var_17;
                }
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_3] [i_0] = (((arr_0 [i_0]) ? (((arr_4 [i_0 + 2]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1]))) : (arr_8 [11] [i_1] [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max((((var_3 <= ((min(18, (arr_14 [i_3]))))))), (max(((25804 + (arr_10 [i_0] [i_1] [i_3] [10]))), (arr_2 [i_4] [i_1]))))))));
                                arr_19 [i_4] [i_1] [i_3] [i_0] [17] [i_1] = (max(-19, ((((min((arr_17 [i_0] [2] [i_0] [i_0] [i_0]), (arr_4 [13])))) ? ((2097151 ? 91 : 127)) : (((arr_3 [i_0] [1]) ? var_15 : 4))))));
                            }
                        }
                    }
                }
                var_22 = (arr_1 [i_0]);
            }
        }
    }
    var_23 = var_15;
    #pragma endscop
}
