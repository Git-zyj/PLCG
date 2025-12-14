/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -1264806904));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 &= ((min(-4542, -4145)));
                var_18 = (min(var_18, (((((min(var_8, -22))) ^ 0)))));
                var_19 = ((-(((((65527 ? -1264806904 : var_4)) >= ((6773645060771443245 ? var_1 : 6)))))));
            }
        }
    }
    #pragma endscop
}
