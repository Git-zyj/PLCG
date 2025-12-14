/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = 3197476791796624904;
    var_19 = ((((7 >> (59 - 47))) + (--7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 ^= (~var_2);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0] [i_1] [0] [i_2]) - (((arr_1 [i_0]) / (arr_4 [i_0] [i_0])))));
                    var_21 |= (min((arr_5 [i_1] [i_1] [i_0]), var_13));
                }
            }
        }
    }
    var_22 += ((~((max(101, var_2)))));
    #pragma endscop
}
