/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((2074 ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((4294967290 >> (1280247407 - 1280247396))))));
                var_20 = ((-(-2147483647 - 1)));
            }
        }
    }
    #pragma endscop
}
