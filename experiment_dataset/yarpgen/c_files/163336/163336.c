/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = ((((((min(var_10, var_0)) / (min(4, 11094630691430871183))))) || var_9));
    var_21 += var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (((((-((((arr_5 [i_1]) < var_12)))))) >= (arr_8 [i_2] [i_1] [i_0])));
                    var_23 += ((~(min((arr_0 [i_0] [i_2]), (arr_8 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
