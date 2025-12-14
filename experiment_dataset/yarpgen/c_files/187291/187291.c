/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((((max((((arr_1 [5]) ? (arr_10 [i_1] [i_0] [8] [i_0] [i_4] [8] [i_4]) : var_7)), ((32767 ? (arr_3 [i_2] [i_3] [i_4]) : (arr_2 [i_0] [i_0] [i_0])))))) && (((0 ? (arr_11 [i_0] [i_1] [8] [12] [i_4]) : (arr_3 [i_0] [i_2] [7])))))))));
                                var_12 = 14;
                            }
                        }
                    }
                    var_13 = (min(var_13, 32767));
                    var_14 = 31;
                }
            }
        }
    }
    #pragma endscop
}
