/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [9] = (arr_10 [i_0] [i_0] [i_2] [i_3]);
                            var_10 = var_9;
                        }
                    }
                }
                var_11 = (min(var_11, ((min((min(var_0, (arr_5 [i_0 - 1] [i_0 - 2]))), var_2)))));
            }
        }
    }
    var_12 &= (((((!(!var_4)))) & ((-((max(32751, -5)))))));
    #pragma endscop
}
