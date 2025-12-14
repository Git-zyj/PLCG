/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= -1;
    var_13 = var_4;
    var_14 ^= (min((max((~var_11), 14211733095882216457)), (~48)));
    var_15 = ((((max(((var_3 ? 0 : 1)), 1))) ? var_3 : var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 ^= ((((max(((3929 ? 1 : 8857128420701493938)), (arr_0 [i_0])))) ? ((-((min(var_4, 1))))) : ((min((min(29893, 112)), -7099)))));
        arr_2 [i_0] = ((var_9 | (((((arr_1 [i_0] [1]) || var_7)) ? ((max(1, var_9))) : ((max(var_2, var_8)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 = 3268869705846882131;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [4] [1] &= (!((min((min(-22654, 0)), (arr_8 [1] [i_1 + 2] [i_1 + 4] [1])))));
                        arr_12 [i_1] [i_1] = ((!((((var_5 * (arr_8 [i_0] [i_0] [i_0] [i_1])))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_18 = (min(var_18, (((var_7 | (arr_7 [i_0] [i_4] [i_0]))))));
            arr_15 [i_4] [i_4] = ((var_5 ? (arr_8 [i_0] [10] [i_4] [8]) : (arr_4 [i_0])));
            var_19 = (min(var_19, ((((arr_4 [i_4]) ? var_9 : (arr_0 [i_0]))))));
            var_20 -= -1;
            var_21 += (((arr_5 [i_0] [i_4] [0]) ? var_8 : (arr_5 [i_0] [i_4] [9])));
        }
        arr_16 [i_0] = ((((min(((20491 ? (arr_4 [i_0]) : (arr_5 [3] [3] [i_0]))), ((0 | (arr_1 [i_0] [i_0])))))) ? (min((arr_14 [i_0] [i_0] [i_0]), 3268869705846882131)) : (arr_10 [i_0] [2] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 ^= var_4;
        arr_19 [i_5] = (((!var_8) / ((var_7 ? ((max((arr_17 [i_5] [i_5]), (arr_18 [22] [22])))) : ((var_3 ? 1 : (arr_17 [i_5] [i_5])))))));
    }
    #pragma endscop
}
