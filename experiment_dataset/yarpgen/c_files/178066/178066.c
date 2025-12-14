/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min((((((min(var_2, 1880088573037594764)) + 9223372036854775807)) >> (((arr_3 [i_0 - 2]) - 8254)))), ((((arr_3 [i_0 + 1]) ? (arr_2 [i_0 - 1] [i_1 - 1] [i_2 + 1]) : (arr_4 [i_1 + 2]))))));
                    var_14 += 15027961883211392292;
                    arr_9 [i_1] [i_1 - 1] = (((arr_5 [i_2] [i_1] [i_0 + 1]) == ((((max((arr_5 [i_1 + 2] [i_1] [i_2]), var_1))) & ((((arr_6 [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 1]) == (arr_1 [i_0]))))))));
                }
            }
        }
    }
    var_15 += var_3;
    #pragma endscop
}
