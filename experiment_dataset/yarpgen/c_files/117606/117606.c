/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((max(20289, 3915506671870817010)), ((max(127, -15450))))), ((max(((max(var_16, var_3))), (max(20289, var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (max(-1, 2760471912));
                    var_22 = max((max((max(var_9, (arr_3 [i_1 + 3] [i_1 + 3] [6]))), (min(var_10, 15041)))), ((max(((max((arr_5 [10]), 16383))), (max(var_4, var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
