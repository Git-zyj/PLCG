/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~-8);
    var_20 ^= 506323465;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 *= (arr_3 [i_0] [i_1]);
                var_22 += (2288053090640114765 <= 38403);
                var_23 = max(((((arr_0 [i_0]) == (arr_0 [i_0])))), (arr_4 [i_1 - 1]));
                var_24 = (min(((((arr_2 [i_1]) | (arr_1 [i_0])))), (((-(arr_5 [i_1 + 1] [i_1]))))));
                var_25 = (min((((~(min((arr_0 [i_0]), 98))))), (((arr_3 [i_0] [i_0]) ? (((min((arr_4 [i_0]), var_13)))) : (min(var_4, 3788643830))))));
            }
        }
    }
    #pragma endscop
}
