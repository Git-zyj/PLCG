/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 += (max((!1073709056), (((arr_3 [i_0] [i_1] [i_0]) ? (((arr_2 [4] [i_0] [i_0]) ? 17944029765304320 : (arr_2 [14] [16] [14]))) : (((((arr_0 [i_0]) > (arr_1 [i_0])))))))));
                var_13 -= (max(((((((arr_1 [i_0]) ? var_0 : (arr_3 [i_0] [i_1] [6])))) ? (min((arr_0 [i_1]), 63)) : (arr_3 [i_0] [i_0] [i_0]))), ((((((-(arr_3 [i_0] [i_0] [i_0])))) ? ((max((arr_3 [i_0] [i_1] [i_0]), (arr_2 [0] [i_0] [i_1])))) : (arr_2 [4] [4] [i_0]))))));
                var_14 = (max(var_14, ((max((var_11 || var_7), (!-var_11))))));
                var_15 = (~65531);
                var_16 += (((-(max((arr_0 [i_0]), -1621314052)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            {
                var_17 = (max(var_17, (((var_4 ? -457122630 : var_5)))));
                var_18 = 32767;
            }
        }
    }
    #pragma endscop
}
