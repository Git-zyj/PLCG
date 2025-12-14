/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (!-518201582);
                arr_4 [16] |= (((((var_14 >> ((((-(arr_0 [i_1]))) + 94))))) ? (max((arr_0 [i_0]), (((518201582 > (arr_3 [i_0] [i_1])))))) : (((arr_0 [i_0 - 1]) ? -var_2 : ((-(arr_3 [i_0] [i_1])))))));
                var_18 = (max(var_18, (arr_1 [i_1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        arr_7 [2] &= (~(arr_0 [i_2]));
        var_19 &= (((((arr_5 [i_2]) ? (arr_2 [1] [i_2] [i_2]) : 2573216684)) < (arr_6 [12] [14])));
        var_20 |= ((-(arr_5 [i_2 + 3])));
        arr_8 [i_2] [6] &= (((arr_6 [i_2] [1]) ? ((-518201582 ? (arr_3 [i_2] [i_2]) : (arr_2 [0] [0] [i_2]))) : (arr_3 [i_2 - 1] [i_2 + 2])));
    }
    #pragma endscop
}
