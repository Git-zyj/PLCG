/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = (((max(var_4, (arr_6 [i_0] [i_1] [i_2]))) * var_2));
                    var_17 = (!17440211096318734453);
                    arr_8 [i_0] [17] [17] = ((82 ? 273304950374026546 : -273304950374026536));
                }
            }
        }
    }
    var_18 = (max(var_18, var_1));
    #pragma endscop
}
