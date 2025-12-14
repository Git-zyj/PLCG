/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = 27;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (max((((arr_7 [i_2 + 1] [i_2 + 1] [6]) ? (arr_2 [i_2 + 1]) : (arr_8 [9] [i_1]))), (arr_4 [i_2 - 1] [i_2 + 4] [i_2 + 1])));
                    arr_10 [i_0] [i_1] [i_0] = (max((arr_7 [i_0] [i_2 - 1] [i_2 + 1]), (22622 >= 41109)));
                    var_14 = (max((264 >= 156), ((((min(100, 0))) ? -252 : (((arr_7 [i_0] [i_0] [i_0]) - var_5))))));
                    var_15 ^= (((max((((arr_0 [i_0]) ? (arr_5 [11] [i_1] [i_1]) : (arr_3 [18] [18]))), ((max((arr_3 [i_0] [21]), 47706))))) * (arr_3 [16] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
