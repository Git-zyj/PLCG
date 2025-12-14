/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, (((((arr_0 [i_0]) | (arr_0 [i_0 + 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1 - 1] = (((((((min(-2068923358, (arr_2 [i_1])))) ? (var_12 | var_5) : ((min(var_4, var_13)))))) ? -var_1 : ((min((arr_3 [i_1] [i_1]), (arr_2 [i_1]))))));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (min(var_15, ((((min((arr_1 [i_4 - 1]), (arr_1 [i_4 - 2])))) && ((((arr_0 [i_3]) ? var_10 : (arr_0 [i_2 - 1]))))))));
                            arr_13 [i_1] [i_1] [i_2] [i_2] = (((((((-2068923358 ? (arr_2 [i_1]) : (arr_5 [i_0] [i_1 - 1] [i_1 - 1] [i_0])))) ? var_7 : (arr_7 [i_1] [i_1 - 1])))) ? (((max(var_1, var_4)))) : (max(2068923371, ((max((arr_2 [i_1]), var_0))))));
                            arr_14 [i_1] [17] [13] [i_3] [13] = ((arr_12 [i_0 + 1] [i_2 + 2] [i_3] [i_4 + 2] [16]) ? (arr_8 [i_0 + 1] [i_2 + 3] [i_3] [i_4 - 1] [i_3] [i_4]) : (((arr_3 [i_1] [i_2 + 3]) ? (arr_3 [i_1] [i_2 + 2]) : (arr_9 [i_0 - 1] [i_2 + 2] [i_0 - 1] [i_4 - 1]))));
                            var_16 = (max(var_16, (((-(max((max(1, -2068923363)), ((min(var_1, 118))))))))));
                        }
                        var_17 += (min(((((((var_3 ? var_9 : var_2))) ? ((var_13 ? (arr_2 [i_3]) : 1032192)) : (arr_3 [i_3] [i_1 - 1])))), ((max(var_3, var_7)))));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (((((1032199 ? var_11 : ((-7881327711085263421 ? var_6 : var_5)))) < ((((((2068923357 ? 47 : var_12))) ? 0 : (min(var_6, var_11))))))))));
    var_19 = (max(var_0, var_10));
    #pragma endscop
}
