/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(var_10, 67);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((-107 ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((max((((arr_6 [i_3 - 1] [i_1] [10] [i_3 - 1]) && (arr_8 [i_1] [i_1] [i_1] [i_1]))), (min((arr_8 [i_1] [i_1] [i_2] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_2]))))))));
                            var_21 = (min(var_21, ((min(15, 6)))));
                        }
                    }
                }
                arr_9 [11] [i_0] [i_1] = (max((max(((-(arr_7 [i_0] [i_1]))), 1676224235)), (max((arr_7 [i_0] [i_0]), var_4))));
                arr_10 [i_0] [i_0] = ((((((arr_2 [3]) * (arr_8 [i_0] [i_0] [i_1] [i_1])))) / (arr_1 [i_0] [i_0])));
                arr_11 [i_0] = ((!(((+(min((arr_6 [i_0] [i_1] [i_0] [i_1]), 18)))))));
            }
        }
    }
    #pragma endscop
}
