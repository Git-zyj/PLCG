/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((!(var_11 >> 1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((~((var_6 | (arr_3 [i_0 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((var_3 ? (arr_1 [i_0]) : (arr_1 [i_0]))) & ((((arr_1 [i_0]) ? var_3 : (arr_3 [i_2 + 3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_20 = (((arr_6 [i_3] [i_4] [i_3] [i_4]) ? (min(((183 ? (arr_3 [i_4]) : 31)), (arr_4 [i_3] [i_3] [i_3]))) : var_4));
                var_21 = (var_13 | 24);
                var_22 += (arr_13 [i_3]);
            }
        }
    }
    #pragma endscop
}
