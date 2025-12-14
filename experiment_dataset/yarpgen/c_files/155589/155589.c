/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((-939057147 ? ((var_6 ? var_4 : var_2)) : ((min((((arr_3 [i_0] [i_1]) ? 4236455133 : var_10)), var_10)))));
                var_12 = (((((((1 ? var_0 : 4236455133)) + (max(var_5, (arr_0 [i_0] [i_1 - 3])))))) ? (~-89634950) : ((var_7 ? 2295 : (1 || var_6)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                var_13 = (max(var_13, ((((((1 ? var_0 : var_3))) ? (((arr_4 [i_2] [i_3 + 4]) ? (arr_4 [i_3 + 1] [i_2]) : (arr_4 [i_2 - 2] [i_3 + 2]))) : ((~(arr_4 [i_2] [i_3 + 4]))))))));

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_14 = ((((((arr_6 [i_2 + 1]) ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 + 1])))) ? (max((((!(arr_10 [i_2] [i_3] [i_4 + 1])))), ((var_2 ? var_2 : (arr_4 [i_4] [i_3]))))) : 10));
                    arr_12 [i_2] = (((!-3195) ? 7206887334215482906 : (((3195 ? 0 : 1)))));
                }
                var_15 = ((~(min((arr_8 [i_3] [i_3] [i_2]), 3195))));
            }
        }
    }
    #pragma endscop
}
