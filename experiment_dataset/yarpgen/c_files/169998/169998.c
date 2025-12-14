/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = (max(16, 18446744073709551615));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = 3655663441705352030;
                var_20 = (arr_2 [i_0]);
            }
        }
    }
    var_21 ^= (-18446744073709551615 * 0);
    var_22 = 0;
    #pragma endscop
}
