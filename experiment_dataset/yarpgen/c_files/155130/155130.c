/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_1, (((!((min(46650, var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (max((min((arr_0 [i_0]), ((~(arr_5 [i_0]))))), (arr_4 [i_0])));
                    arr_7 [i_0] [i_0] [14] = (max((min((arr_6 [i_0] [i_2 - 1] [i_2 + 1]), ((2147483633 ? 18446744073709551615 : 2147483633)))), (((((var_2 ? 16 : (arr_4 [i_1]))) & (((!(arr_0 [i_2])))))))));
                    var_12 ^= (((arr_1 [15]) ? (((var_7 ? (((arr_2 [i_0] [i_0]) ? (arr_4 [i_1]) : (arr_4 [i_0]))) : -669653130014659220))) : (min((arr_0 [i_0]), 4515289635650328540))));
                    var_13 = var_2;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_4] = (arr_3 [i_3]);
                var_14 = ((+((min((arr_6 [i_3] [i_4] [i_4]), (arr_6 [i_3] [i_4] [i_4]))))));
            }
        }
    }
    var_15 = (min(var_15, (1 < -3001588086931529157)));
    #pragma endscop
}
