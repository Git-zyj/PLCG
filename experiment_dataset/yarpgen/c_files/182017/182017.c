/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_3 [i_0] [i_0] [i_1]);
                arr_7 [i_0] = ((((max(-16400, (arr_3 [i_0] [i_1] [i_1])))) != ((((-1663751331 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1]))) >> (((min(14774112036449839518, (arr_0 [i_0] [i_1]))) - 26768))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_13 += (arr_9 [i_2]);
                var_14 = (((((arr_12 [i_2] [i_3]) ? (arr_12 [i_3] [i_2]) : (arr_12 [i_2] [i_3]))) == ((min(var_5, (arr_12 [i_2] [i_3]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_15 = (((min((arr_19 [i_5]), (arr_19 [i_5]))) - (((arr_19 [i_5]) & (arr_19 [i_5])))));
                    var_16 += (((arr_14 [i_6 + 1] [i_6 + 2] [i_6]) ? (((((arr_14 [i_6 + 1] [i_6 + 1] [i_4]) > (arr_3 [i_6 + 3] [i_6 + 3] [i_5]))))) : ((-16400 ? 65535 : 13319712532380703455))));
                }
            }
        }
    }
    #pragma endscop
}
