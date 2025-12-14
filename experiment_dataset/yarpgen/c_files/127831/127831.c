/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = 14847;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((~(max(1, 2502085109))));
                    var_13 = (max(1, -8539947681892274092));
                }
            }
        }
    }
    #pragma endscop
}
