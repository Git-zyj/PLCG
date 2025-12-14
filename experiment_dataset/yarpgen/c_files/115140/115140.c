/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (min(var_14, ((((min(var_7, var_0)) <= (-13580428387005934 == 23037))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((~(((23037 > (arr_6 [i_2] [i_2] [i_1] [i_0]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (arr_5 [i_2] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
