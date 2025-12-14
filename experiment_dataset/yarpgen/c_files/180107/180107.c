/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-4294967295 < 8949);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = (((min((arr_2 [i_2 + 1] [i_1 + 2]), (arr_7 [i_1] [i_2] [i_2] [i_1 + 2]))) >> (((max((max((arr_0 [i_0]), 1002448375)), (((56587 && (arr_2 [i_2] [i_2])))))) - 4294957092))));
                    arr_9 [i_0] [i_2] [i_2] = ((((((((arr_4 [i_2] [i_0] [i_0]) >= (arr_1 [i_1]))) ? var_2 : ((8975 ? (arr_6 [i_0] [i_1 + 2] [i_2] [i_2]) : var_10))))) ? (((~var_10) + (((arr_5 [7] [i_1] [i_2]) ? (arr_3 [i_1]) : var_12)))) : (arr_0 [i_1 + 4])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_14 += (arr_7 [i_4] [i_4] [i_4] [i_0]);
                    arr_15 [i_3] [i_0] = (arr_7 [i_0] [i_0] [i_4] [i_4]);
                }
            }
        }
        var_15 = ((var_10 ? ((((min(78, var_0)) != (!var_6)))) : (8949 + 56587)));
    }
    var_16 = var_7;
    #pragma endscop
}
