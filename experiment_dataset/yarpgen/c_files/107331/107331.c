/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = 125;
                    arr_7 [i_0] [i_1] = ((max(118, 9612992113634491196)));
                    arr_8 [i_0] [i_0] [i_0] = -111;
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((26 >= 124) % 32));
                    var_21 = 402;
                }
            }
        }
    }
    var_22 = (((((min(-126, -126))) >= ((38 ? -18 : -31288)))));
    #pragma endscop
}
