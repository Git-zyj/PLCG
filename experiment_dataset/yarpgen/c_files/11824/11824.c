/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] &= (max(-8667989965537507556, 58));
                var_13 = (min(var_13, ((min((min((~var_3), ((((arr_6 [i_1]) ? var_4 : (arr_5 [i_0])))))), (((!(((var_0 ? 2540866828691647574 : var_10)))))))))));
                var_14 ^= 126;
            }
        }
    }
    var_15 = (min(var_15, var_11));
    #pragma endscop
}
