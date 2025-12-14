/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max((arr_4 [i_1] [i_0]), ((((arr_4 [i_0] [i_1]) | (arr_4 [i_0] [i_1]))))));
                var_15 = (arr_3 [i_0]);
                var_16 = (arr_2 [4]);

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_17 = (((min((1882361700819513720 & 9050), (~65530))) > (arr_0 [i_1] [i_2])));
                    arr_8 [6] [7] = ((min((arr_5 [2] [i_0] [i_1] [12]), (min((arr_5 [i_0] [i_1] [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_18 = (arr_4 [6] [i_1]);
                    arr_13 [i_0] [i_1] [7] [i_3] = ((((min((arr_11 [i_0] [i_1] [9]), (arr_6 [i_0] [i_1] [i_3] [i_3])))) ? (arr_11 [i_3] [i_1] [i_0]) : (max(255, -1533175160))));
                }
            }
        }
    }
    var_19 = var_6;
    var_20 = (!(var_13 <= var_5));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            {
                var_21 -= ((((min((((arr_6 [i_4] [i_4] [i_4] [i_4]) ? (arr_7 [i_4] [i_5]) : (arr_9 [i_4] [i_5 + 2] [i_5]))), (((arr_1 [i_5]) ? (arr_7 [i_4] [i_5]) : (arr_9 [i_4] [i_5] [i_5])))))) ? (((arr_15 [i_4]) ? (max((arr_2 [i_5]), (arr_0 [i_4] [i_5]))) : (arr_12 [8] [10] [i_4] [i_5 + 3]))) : (arr_6 [i_4] [i_4] [i_5] [i_5])));
                var_22 = (min((arr_10 [i_4]), (arr_6 [i_5] [i_5] [8] [i_4])));
            }
        }
    }
    #pragma endscop
}
