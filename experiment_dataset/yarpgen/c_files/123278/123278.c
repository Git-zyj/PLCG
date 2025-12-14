/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [8] [i_1] = ((((((-2147483647 - 1) ? -4551236962810918755 : (16 * 1200199738)))) ? ((~(126 & 1287964134))) : ((((!(((arr_3 [i_1 - 1] [1] [i_0]) != var_1))))))));
                arr_6 [i_1] [i_0] = 0;
            }
        }
    }
    var_14 = (-((((min(1, var_5))) & (min(var_9, 10)))));
    var_15 = var_5;
    #pragma endscop
}
