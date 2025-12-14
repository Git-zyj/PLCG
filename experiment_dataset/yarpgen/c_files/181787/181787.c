/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= 1;
    var_16 = 11807019129227220598;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((~(((2612433522 != (arr_2 [i_0] [i_1]))))));
                var_18 |= arr_1 [5];
                var_19 |= ((2684834088 >> (-1 + 8)));
            }
        }
    }
    #pragma endscop
}
