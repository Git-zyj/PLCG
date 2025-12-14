/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 ^= (arr_1 [i_1]);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((var_4 ? ((((((arr_6 [i_1] [i_1] [i_1]) ? var_0 : (arr_1 [i_0])))) ? (arr_8 [i_0] [i_1] [i_1]) : var_0)) : (((!(arr_6 [i_1] [i_1] [i_2]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_13 = (arr_11 [i_3]);
        var_14 = (+((var_10 ? (arr_11 [i_3]) : var_4)));
        var_15 = (((((((((arr_10 [i_3] [i_3]) ? var_4 : (arr_11 [i_3])))) ? (var_1 >= var_1) : (arr_12 [i_3])))) ? ((var_0 ? (arr_10 [i_3] [i_3]) : (arr_10 [i_3] [i_3]))) : (((arr_10 [i_3] [i_3]) ? var_11 : (arr_10 [i_3] [i_3])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_4 + 1] = ((((~((min((arr_15 [i_4 + 1]), (arr_13 [21]))))))) ? (((((((arr_14 [i_4 - 1]) ? var_2 : (arr_15 [i_5])))) ? (((arr_16 [i_4] [i_4]) ? (arr_13 [i_4 - 4]) : (arr_13 [i_5]))) : var_1))) : (((arr_16 [i_4 + 1] [i_4 - 3]) | (arr_14 [i_4 - 4]))));
                var_16 = ((((max(((-(arr_14 [i_4 - 1]))), (((arr_15 [i_5]) ? var_6 : var_3))))) ? (((((var_8 ? (arr_14 [i_4]) : var_0)) < (((arr_15 [i_4 + 1]) ? var_6 : (arr_13 [i_4])))))) : var_3));
            }
        }
    }
    var_17 -= ((var_7 ? (((((var_6 ? var_11 : var_10))) ? ((var_5 ? var_1 : var_7)) : var_9)) : (((!(((var_4 ? var_7 : var_1))))))));
    #pragma endscop
}
