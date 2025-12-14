/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min((((((max(1, var_8))) <= 127))), (((arr_1 [i_0]) ? ((1 ? -71 : 1)) : 3))));
                    var_21 *= ((((((-2881707862641394445 ? 1916940294456250621 : 1)) & 0)) <= 127));
                    var_22 = 1;
                    var_23 = ((((((((arr_3 [i_2 + 1]) ? 1 : 127)) & ((min((arr_1 [i_1]), (arr_3 [i_1]))))))) % ((var_12 ? (arr_5 [i_0] [i_0 - 1] [i_1 + 3] [i_2 + 2]) : (((arr_3 [i_2]) ? (arr_4 [i_2] [i_1 + 2]) : 1))))));
                    arr_6 [i_2] [i_2] [i_2] = max(((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))), (((arr_1 [i_0 - 1]) & (arr_1 [i_0 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
