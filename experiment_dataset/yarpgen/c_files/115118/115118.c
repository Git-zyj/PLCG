/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, (((!((max((((arr_1 [2]) % (arr_2 [i_0] [i_0]))), var_7))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((0 ? ((((!(arr_6 [i_0 - 1] [12] [13] [i_2 + 2]))))) : (max(((179 ? var_14 : (arr_1 [i_0]))), ((((arr_2 [i_2] [6]) ? 162 : -2065925659)))))))));
                    arr_8 [i_2] = ((((var_11 ? (arr_4 [i_2 + 1] [i_0 + 1] [i_1 - 1]) : var_13)) < (((-(109 || var_1))))));
                    var_20 = ((((max((arr_7 [i_0 + 1] [i_1 + 1]), (arr_7 [i_0 - 2] [i_1 - 2])))) ? ((var_9 ? (arr_7 [i_0 + 1] [i_1 - 1]) : var_6)) : ((var_6 ? (arr_2 [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0 - 1])))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_11 [i_3 - 1] = ((min((min(var_10, var_14)), (var_10 | var_14))));
        var_21 ^= (max(1, ((max(var_4, 359932209)))));
        var_22 = (max(var_22, 76));
    }
    #pragma endscop
}
