/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((625814896 && var_4) == var_2))) | (max(var_7, (var_7 / var_14)))));
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((~((((arr_3 [i_1]) >= (max(3669152414, 3669152425)))))));
                var_20 = ((((((((var_3 ? 625814893 : 47654))) ? ((((arr_0 [i_0]) ? (arr_2 [i_1] [i_0]) : 7))) : (((arr_5 [12] [i_0]) / (arr_1 [i_1])))))) ? (max((arr_3 [i_1]), 8637967124280072897)) : (max(3669152416, (min(12700574090719784931, (arr_2 [0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
