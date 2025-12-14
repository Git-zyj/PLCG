/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [0] |= ((((((((arr_3 [i_0] [i_0]) + 9223372036854775807)) >> (((min((arr_0 [i_2]), (arr_7 [i_0] [i_0] [i_0] [i_0]))) + 249829538))))) && ((((arr_6 [i_1] [i_1] [i_2 - 2] [i_1]) ? (((-(arr_7 [1] [1] [1] [i_2])))) : (min((arr_2 [2]), (arr_5 [10] [10]))))))));
                    arr_9 [i_0] = ((((!((((arr_7 [i_0] [i_0] [i_2 - 1] [i_2 - 1]) & (arr_6 [i_0] [5] [1] [i_2 - 1])))))) ? ((max((!-10957), (((arr_2 [i_0]) & (arr_4 [i_2])))))) : (arr_5 [i_0] [i_2 - 3])));
                    var_16 = ((((!(arr_5 [i_0] [1]))) ? ((-(arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]))) : (!1)));
                    var_17 = (max(var_17, (((arr_1 [i_1]) ? (arr_4 [i_1]) : (arr_5 [10] [8])))));
                    arr_10 [i_0] [i_0] [i_2 - 1] = (arr_3 [i_0] [i_1]);
                }
            }
        }
    }
    var_18 = ((((((max(var_7, var_9))) ? var_8 : var_13)) < ((min(var_13, (max(var_11, var_0)))))));
    #pragma endscop
}
