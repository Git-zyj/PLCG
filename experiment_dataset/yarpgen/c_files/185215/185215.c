/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((-(((arr_6 [i_2] [i_0]) ? 108 : 2574462710))));
                    arr_8 [i_0] [i_0] [i_0] = ((!(((1 | var_11) != (((!(arr_6 [i_0] [i_2]))))))));
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = var_4;
    var_22 = ((!((var_4 < (var_3 > var_0)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_23 = (max(var_23, ((min(1, 21)))));
                    arr_16 [i_5] [i_4] [i_5] = (((((arr_11 [i_4]) ? 1 : (arr_2 [1] [1]))) < (min(((((arr_13 [i_3] [0] [i_5]) < (arr_1 [i_3])))), (((arr_12 [i_3] [i_5]) >> 1))))));
                    arr_17 [i_5] = ((((((arr_14 [i_3] [i_4] [i_5] [i_5]) ^ ((1 ? (arr_9 [i_5]) : 1))))) ? ((-((var_6 ? (arr_4 [i_3] [i_4]) : var_5)))) : (((min((arr_13 [i_3] [i_3] [i_3]), 1))))));
                    var_24 -= (min((arr_14 [i_3] [i_4] [i_4] [i_5]), (min(((var_12 ? var_10 : 1)), (min(21, (arr_9 [i_5])))))));
                }
            }
        }
    }
    #pragma endscop
}
