/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 = (((arr_2 [i_0] [i_0]) * (((((max((arr_2 [i_0] [0]), (arr_2 [i_0] [i_0])))) > ((~(arr_1 [i_0]))))))));
        var_12 = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = (((arr_3 [i_0] [i_0 - 1]) - (arr_2 [i_0] [i_0])));
        arr_5 [i_0] = ((((!((!(arr_1 [i_0]))))) ? (~-373473476) : (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_13 *= (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_14 = ((!(((((arr_9 [i_1] [i_1]) && (arr_7 [i_1]))) && ((!(arr_10 [i_1] [i_3])))))));
                    var_15 = (max(((-(arr_11 [8] [i_3 - 1] [i_1]))), (((arr_11 [i_3] [i_3 - 2] [i_1]) - (arr_11 [i_3] [i_3 - 1] [i_1])))));
                }
            }
        }
        var_16 -= ((arr_0 [i_1]) ? (arr_7 [6]) : (arr_6 [i_1]));
    }
    var_17 -= ((((var_1 < (~var_5))) ? (((max(-56, 26440)))) : var_4));
    #pragma endscop
}
