/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_15);
    var_17 = 1023373158;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [5] |= -59;
                var_18 -= var_15;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = 838575457282327018;
                            arr_12 [i_0] [i_1] [i_2] [i_3] = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
