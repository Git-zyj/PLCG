/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_3 [i_0] [i_0])));
                arr_6 [i_0] [i_0] = (((min((arr_2 [i_0]), (arr_4 [i_0 + 1] [i_0 - 1]))) + ((-(arr_0 [i_0])))));
            }
        }
    }
    var_20 = (((((-var_12 ? var_6 : -var_1))) ? (var_17 <= var_16) : var_13));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = (arr_8 [8] [i_2]);
        var_21 += var_4;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_22 = (max(var_22, (((var_2 ? (arr_12 [i_3]) : (arr_12 [i_3]))))));
        var_23 = ((var_6 - (arr_12 [i_3 + 1])));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_24 = ((var_16 <= ((((arr_11 [i_4]) > (arr_11 [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_22 [i_6] [i_5] [i_6] [i_4] [i_5] = (max((((arr_11 [i_5 - 1]) + (arr_11 [i_5 - 1]))), ((var_5 ? (arr_11 [i_5 - 1]) : (arr_11 [i_5 - 1])))));
                        arr_23 [i_7] [i_7] [i_7 + 1] [i_5] = ((!((((((arr_21 [i_4] [i_4] [i_6] [i_4] [i_5] [i_6]) < var_6))) == ((min((arr_21 [i_4] [i_4] [i_4] [i_6] [i_5] [i_5]), (arr_11 [i_5]))))))));
                    }
                }
            }
        }
        arr_24 [i_4] [i_4] = var_3;
    }
    #pragma endscop
}
