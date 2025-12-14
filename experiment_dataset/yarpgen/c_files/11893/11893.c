/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~(min(var_0, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((~((~(arr_6 [i_0] [i_1])))));
                var_16 -= ((+(min((arr_3 [i_1]), ((~(arr_4 [10] [1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    var_17 = ((~(max((((~(arr_15 [i_4] [0] [i_4])))), (arr_9 [i_2] [i_3])))));
                    arr_16 [1] [i_2 - 1] &= ((~((((min((arr_8 [i_2]), (arr_14 [2] [i_3] [i_4] [i_3])))) ? (((arr_15 [14] [i_3] [i_3]) ? (arr_9 [3] [3]) : (arr_13 [4] [4] [8]))) : (((min((arr_8 [i_2]), (arr_12 [i_2] [i_2])))))))));
                    arr_17 [i_4] [i_3] [i_4 - 2] = (-(((-(arr_10 [i_3])))));
                    var_18 = ((~((((!(arr_11 [i_2] [i_2 + 2]))) ? (((!(arr_11 [i_2] [10])))) : (((!(arr_15 [i_4] [i_4] [i_4]))))))));
                    arr_18 [i_2] [i_3] [i_3] [i_4] = ((!(arr_14 [i_4] [i_3] [i_4] [12])));
                }
            }
        }
    }
    #pragma endscop
}
