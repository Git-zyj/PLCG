/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [22] = (((((968887309 ? -1204714610 : 65535))) ? (((min((arr_1 [i_0]), var_3)))) : ((~(arr_1 [i_0])))));
        arr_4 [1] = (1 <= -1265415605);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                var_15 = (-(max(((var_0 ? var_3 : var_11)), (((arr_5 [i_2]) ? var_3 : var_5)))));
                arr_9 [i_1] [i_1] [i_2] = (arr_2 [i_2]);
            }
        }
    }
    var_16 = ((var_5 ? -var_0 : (min(var_0, 65535))));
    var_17 -= (((var_1 ? (min(2147483647, 26878)) : (max(var_3, var_10)))));
    #pragma endscop
}
