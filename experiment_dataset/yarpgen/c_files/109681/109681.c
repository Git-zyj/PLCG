/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((min(var_0, (((((~(arr_4 [i_0] [8] [i_1])))) ? ((~(arr_1 [i_1]))) : 2031616)))))));
                var_11 = (arr_0 [i_0] [i_0 - 2]);
            }
        }
    }
    var_12 ^= ((((~50) + 2147483647)) >> ((((((min(var_1, var_4))) ? ((var_7 ? 7936796690687554086 : var_9)) : var_3)) - 7936796690687554071)));
    var_13 = 1;
    #pragma endscop
}
