/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -7;
    var_18 = -48;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = ((26824 ? 1 : (0 % 26824)));
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = -1;
                            var_20 = (((107 <= -10321) | 31093));
                        }
                    }
                }
                arr_11 [i_1] = var_16;
            }
        }
    }
    #pragma endscop
}
