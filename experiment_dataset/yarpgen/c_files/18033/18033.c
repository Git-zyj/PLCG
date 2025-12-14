/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((min((arr_9 [i_2] [i_2]), (arr_9 [i_0] [i_0]))) != -2222340263)))));
                    var_17 *= ((((max(-797, var_8))) ? (((((1041501644 ? 29488 : var_6))) / (((arr_2 [i_0]) / var_1)))) : ((((((arr_4 [i_0] [i_1] [i_0]) % -803)) - var_11)))));
                    var_18 = ((-4294967295 / (min(var_7, (arr_10 [i_1] [i_1 + 1] [i_1])))));
                    var_19 *= (!((min(779, 3438121674839111982))));
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = (min((((var_10 || var_14) ? 0 : (((var_0 ? -3438121674839111964 : var_10))))), ((max((max(-803, 87)), 131)))));
    #pragma endscop
}
