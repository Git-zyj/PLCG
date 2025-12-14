/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_9 ? 56 : var_5)) - (((max((var_6 == var_7), (min(var_6, var_6))))))));
    var_13 = (((var_7 * 9685) - -10293));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 += (arr_1 [i_0] [i_0]);
        var_15 = (var_4 + (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_16 = (arr_14 [i_4] [i_3] [i_1] [i_1]);
                                var_17 = (min(var_17, ((max(((max((min((arr_15 [i_1] [i_1] [15] [i_5]), var_1)), (min(var_1, var_9))))), (max(var_9, var_2)))))));
                                arr_18 [i_3] = (min((((arr_16 [i_3 + 3] [i_3 - 3] [i_3 - 1] [i_3 - 2] [i_3 - 1]) << (var_1 - 57223))), ((var_5 ? var_5 : var_4))));
                            }
                        }
                    }
                    var_18 = (((min((max((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_3 [i_3]))), (arr_11 [i_2])))) ? var_2 : ((((var_8 != (arr_9 [i_1] [i_2] [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_19 = (max((max(8963637870428545516, 22)), (((((min((arr_14 [i_1] [i_1] [i_1] [i_6]), (arr_24 [i_7] [i_6] [i_3] [i_2] [i_7])))) && (arr_23 [i_3 - 3] [i_3 - 1] [i_7]))))));
                                var_20 = (arr_15 [i_1] [i_3] [i_6] [i_6]);
                                arr_25 [i_1] [i_2] [i_2] [i_2] [i_7] [i_7 + 1] = (min(((min((arr_15 [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]), (arr_15 [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 3])))), (min((arr_6 [i_3] [i_3 - 3] [i_3]), var_3))));
                            }
                        }
                    }
                    arr_26 [i_1] [i_1] = (arr_24 [14] [i_3 - 3] [i_3] [0] [i_3 - 3]);
                    var_21 += ((max((arr_17 [i_1] [i_3 + 3] [i_1] [i_3 - 1] [i_1] [i_2] [i_3 + 2]), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [8]))));
                }
            }
        }
        arr_27 [i_1] [i_1] = ((max((min(10401013705494734794, 1666876023)), 59)));
        var_22 = (min(520895234595478257, var_6));
        var_23 *= (max((((max((arr_6 [i_1] [i_1] [i_1]), var_9)) - (((min((arr_24 [18] [i_1] [i_1] [i_1] [i_1]), var_7)))))), var_0));
    }
    var_24 = -1666876023;
    #pragma endscop
}
