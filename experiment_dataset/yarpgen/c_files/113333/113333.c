/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (0 - var_4);
    var_11 += (0 != 268435455);
    var_12 ^= var_2;
    var_13 ^= ((((min(var_5, 75))) << (((!(((var_4 ? var_2 : 32766))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 ^= (min(((min((arr_5 [i_1]), var_5))), 65535));
                var_15 = (max(var_15, (-0 < var_0)));
            }
        }
    }
    #pragma endscop
}
