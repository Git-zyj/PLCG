/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 127;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = 16256;
                    arr_9 [i_0] [i_1] = (max(18903, (max(46466, 4096))));
                }
            }
        }
    }
    var_21 = 49152;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_22 = 123;
                var_23 = min(50306, (min(41621, (min(-2296112741941233425, 61440)))));
            }
        }
    }
    var_24 = 36999;
    #pragma endscop
}
