/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] &= (max(((((arr_8 [i_0] [i_3 + 1] [2]) ^ (arr_8 [i_2] [i_3 - 2] [i_2])))), ((((((arr_7 [i_0] [i_2] [14]) % (arr_5 [i_0] [i_0])))) - (max((arr_9 [i_3 - 2]), (arr_0 [i_1] [i_2])))))));
                        var_10 = (((arr_1 [i_2]) % (((arr_10 [i_1 + 2] [i_1 + 4] [i_1] [i_1 + 4] [i_1 + 3]) * (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 4])))));
                    }
                }
            }
        }
        var_11 = (max(var_11, ((min((arr_3 [1]), (((~(arr_2 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_12 = (max(var_12, (arr_13 [i_4 + 1])));
        var_13 = (((arr_7 [i_4 + 2] [i_4 + 2] [i_4 + 2]) ? (arr_5 [i_4 + 2] [i_4 + 1]) : ((((arr_3 [i_4]) < (arr_0 [i_4] [i_4]))))));
        arr_16 [i_4 + 1] = (((arr_10 [i_4] [2] [18] [i_4] [i_4 + 2]) > (arr_10 [i_4 + 1] [i_4] [0] [0] [i_4 + 2])));
    }
    var_14 = (((max(var_1, (min(var_1, var_8))))) ? (min(var_8, (var_8 != var_5))) : ((((var_0 | var_9) ? var_2 : ((var_6 ? var_1 : var_1))))));
    #pragma endscop
}
