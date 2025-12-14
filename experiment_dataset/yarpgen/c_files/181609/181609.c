/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((1593594309 ? 2062731739 : 16368)), (262121744 || -35)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_11 = (min((arr_9 [i_0] [7] [i_0]), (~var_8)));
                    var_12 = var_9;
                }
            }
        }
    }
    var_13 = (min(var_4, var_0));
    #pragma endscop
}
