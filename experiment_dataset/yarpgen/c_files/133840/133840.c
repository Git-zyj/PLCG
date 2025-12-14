/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += -128839217;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [1] [i_1] [i_2] [i_0] = (!-10318);
                            var_15 = (((min(var_12, 1))) >> ((max((1 == 0), (((arr_8 [i_3 - 3] [i_1] [i_1]) == 7))))));
                        }
                    }
                }
                var_16 = 0;
                var_17 = ((-((min(6, (min((arr_4 [i_0]), -32756)))))));
            }
        }
    }
    var_18 = (min(var_18, (!194)));
    #pragma endscop
}
