/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((((((min(var_9, (arr_2 [i_0] [i_1] [i_1])))) ? (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [3]))) : 3119552750))) * var_15));
                var_19 = ((72057594004373504 ? 4294967295 : 12081114346084179894));
                var_20 += (arr_3 [2] [0] [i_1]);
                var_21 = (((max((10081445034933571957 / 4294967295), 11728344647035343588)) != var_10));
                var_22 = (max(var_22, (((min(648948161, 480512078))))));
            }
        }
    }
    var_23 = var_10;
    var_24 += min(var_11, (8386560 * var_2));
    #pragma endscop
}
