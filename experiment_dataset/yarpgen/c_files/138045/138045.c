/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = 27550;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((((max(var_16, var_6))) ? (((arr_2 [i_1] [i_1]) % (max((arr_3 [i_0]), (arr_1 [3] [i_2]))))) : ((((max((arr_3 [i_1]), (arr_0 [i_0]))))))));
                    arr_6 [i_0] = (((var_15 / (((59 ? var_9 : (arr_3 [i_1])))))));
                    var_21 = (((arr_1 [i_0] [i_1 - 2]) | ((~(arr_1 [i_2] [i_1 - 2])))));
                    arr_7 [i_0] [6] [i_0] [i_0] = (arr_1 [i_1 - 2] [i_1 - 1]);
                }
            }
        }
        arr_8 [2] |= 37986;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_0] [i_4 + 3] = ((((((arr_11 [i_0] [i_3]) ? (arr_4 [i_3] [i_4 - 1] [i_0] [i_4]) : (arr_10 [i_4 + 4])))) && ((max((arr_2 [i_3 + 1] [i_4 - 1]), var_4)))));
                    arr_15 [i_4] [i_0] [i_4] [i_0] = ((~(((arr_13 [i_0] [i_0] [i_0] [i_0]) & (((~(arr_3 [i_4]))))))));
                }
            }
        }
        var_22 = (max((arr_11 [1] [i_0]), (arr_9 [i_0] [i_0] [16])));
    }
    var_23 = -27550;
    #pragma endscop
}
