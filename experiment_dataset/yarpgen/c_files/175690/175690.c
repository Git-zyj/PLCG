/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_1] = -32761;
                arr_9 [i_0] [i_0] = 41;
                arr_10 [16] = (((arr_2 [i_0 - 2]) <= var_3));
            }
        }
    }
    var_13 = 7982;
    #pragma endscop
}
