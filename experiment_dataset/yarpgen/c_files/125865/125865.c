/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min((var_16 / 111), 6178));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_21 = (min(var_21, (((var_14 ^ (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0 - 2]) ? var_16 : -353184818897474085)) : ((353184818897474085 ? var_3 : (arr_0 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((((((max(4, var_19))) ? (arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 2]) : (min((arr_3 [5] [9] [i_0]), (arr_1 [i_0] [i_2]))))) < (((((min(var_5, (arr_4 [i_2] [i_0] [i_0])))) % -var_8)))));
                    arr_7 [i_1] [i_1] [i_1] = (min((min(-353184818897474085, ((16777215 ? (arr_5 [i_2]) : var_18)))), (((!((((arr_4 [i_0] [i_1] [i_2]) ? (arr_1 [21] [i_1]) : var_10))))))));
                    var_22 = ((-((((1589838010 ? (arr_0 [i_0] [i_0]) : 16777215)) >> (((var_10 | var_5) - 24809))))));
                }
            }
        }
        var_23 = var_17;
        var_24 = max((arr_2 [i_0] [i_0 + 2]), (arr_4 [i_0] [i_0] [i_0]));
        var_25 = (max(var_25, (((((!4278190089) ? var_13 : 16777215))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_26 = (max(var_26, (((var_8 < ((var_17 << (((((arr_3 [i_4] [i_4] [1]) + 7862898030131572019)) - 24)))))))));
                var_27 = (min(var_27, ((max(((min(((max(var_5, var_11))), (min((arr_11 [i_4] [i_4]), (arr_11 [i_4] [i_4])))))), ((-13376 ? (arr_1 [i_3] [i_4]) : ((var_10 ? var_12 : var_10)))))))));
                arr_12 [i_3] = (((max((var_1 - var_16), (arr_9 [i_3]))) - ((max(((var_18 ? (arr_5 [i_3]) : 0)), ((4278190099 ? (arr_5 [i_4]) : 61)))))));
            }
        }
    }
    #pragma endscop
}
