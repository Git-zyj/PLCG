/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_1 [i_1] [i_1])));
                    var_16 = (var_9 ? (arr_4 [14] [13] [0]) : (((((((arr_3 [i_0 + 1] [i_1] [i_0 + 1]) || (arr_5 [i_0] [i_1] [i_1] [12]))) || var_1)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_17 = max((((!(arr_12 [i_3] [15] [i_3])))), (((arr_12 [i_3] [18] [i_3]) ? (arr_11 [i_3] [i_3] [15]) : var_0)));
                var_18 = (max(((((arr_8 [i_4]) <= var_6))), (max((((-97 && (arr_10 [i_3] [10])))), (arr_9 [i_3])))));
            }
        }
    }
    #pragma endscop
}
