/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_2 [23])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, ((max((var_9 || var_10), var_10)))));
                        var_22 = (max((max(954413423430735139, 70368744112128)), (((min((arr_4 [i_0] [i_0]), var_13)) / (arr_6 [i_2] [i_1] [i_1] [i_1])))));
                    }
                }
            }
        }
    }
    var_23 = var_19;
    var_24 = (max(var_24, ((((((!70368744112130) ? (1 - 54599) : var_10)) >> ((((var_8 ? (~var_14) : (var_13 - var_2))) - 4171154359)))))));
    var_25 = var_4;
    #pragma endscop
}
