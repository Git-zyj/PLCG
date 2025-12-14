/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = (max(18036, 157));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = (arr_3 [i_1]);
                }
            }
        }
    }
    var_20 -= var_3;
    #pragma endscop
}
