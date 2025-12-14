/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((var_3 >= ((var_19 / (~var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 *= ((2147483636 - (min((arr_6 [i_0] [i_1] [i_2] [i_1]), (arr_5 [i_1] [i_2])))));
                    var_23 = (min(50, (((var_17 > (((arr_4 [i_0] [i_1]) * var_6)))))));
                    arr_9 [i_0] [i_1] [i_2] = (((max(-2147483637, 14))));
                }
            }
        }
    }
    #pragma endscop
}
