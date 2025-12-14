/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((((var_2 & var_2) && (var_3 == var_8))))) + ((((min(var_0, 235))) ? var_2 : ((var_6 << (var_6 - 3218847554)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((((647775209 ? 1 : 18))) ? (max(var_6, (arr_2 [i_1] [i_2]))) : (arr_2 [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [4] [i_1] [i_2] [i_3] [i_3] [i_4] = ((((max(3906, 15))) ? (((var_12 || (arr_2 [i_4] [i_1])))) : (((((((arr_7 [i_0] [i_3] [i_2] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] [2]) : 8187094716172568982))) && ((min(var_1, 8187094716172568982))))))));
                                var_15 += ((((((arr_4 [6] [i_1] [i_0]) ? ((230 ? 8341254910472463474 : (arr_4 [i_4] [4] [i_0]))) : (arr_5 [1] [i_1])))) & ((var_2 ? (arr_3 [i_2]) : (arr_3 [i_0])))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_4 [3] [i_2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 += (~1998569209);
    #pragma endscop
}
