/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = arr_3 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 19;i_4 += 1)
                            {
                                var_12 = var_7;
                                arr_11 [i_2] [21] [i_2] [i_1] [i_2] = ((((-118 ? (arr_10 [i_2] [i_0] [i_4 - 3] [i_3] [12]) : (arr_10 [i_2] [i_1] [i_4 - 1] [i_0] [i_2]))) + (arr_8 [i_1] [i_2] [i_4 + 2] [i_3] [16])));
                                var_13 = (max((((max(var_2, (arr_2 [i_3] [i_2]))))), (((min(-67, -118))))));
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_2] [i_4 + 3] = (min(-104, ((min((min((arr_3 [i_3]), var_7)), (arr_4 [i_4 + 3] [i_4 - 3] [i_4 + 1] [i_2]))))));
                            }
                            var_14 = -62;
                            var_15 = var_8;
                            arr_13 [i_0] [i_0] [i_2] = arr_3 [17];
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((var_1 > ((15 / (arr_6 [i_3] [i_2] [i_1] [i_0])))));
                        }
                    }
                }
                var_16 = (((((((min((arr_6 [i_0] [i_0] [i_0] [i_1]), (arr_9 [i_0])))) > (arr_2 [i_0] [i_1])))) + (max(((-(arr_2 [i_0] [i_0]))), (arr_7 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))));
                var_17 = (((arr_8 [i_0] [0] [i_0] [i_0] [i_1]) ? ((var_0 ? var_0 : -41)) : (arr_3 [i_1])));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
