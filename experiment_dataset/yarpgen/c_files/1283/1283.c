/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((min(2097151, 0))) ^ ((((max(var_7, var_5))) ? var_9 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((255 / ((~(min(0, (arr_0 [20] [i_0]))))))))));
                var_15 = -2097152;
            }
        }
    }
    #pragma endscop
}
