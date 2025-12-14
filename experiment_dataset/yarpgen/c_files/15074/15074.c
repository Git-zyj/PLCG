/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (18446744073709551607 + -var_6);
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((max(1343704748, (var_4 > 21))));
                arr_5 [i_0] = (arr_2 [i_0 + 1] [i_1] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
