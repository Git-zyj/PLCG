/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((8191 - var_7) ? -1 : ((-7831982340520664679 ? 18153 : var_9)))) + 2147483647)) << ((((((-3574026301 ? var_2 : (((max(var_8, var_4)))))) + 5477936308044835173)) - 24))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 ^= -var_10;
                var_13 = var_6;
                arr_7 [i_0] = (((-var_10 | 720940994) ? (arr_6 [i_0 + 2]) : ((((((arr_0 [i_0] [11]) >= var_0)) ? 1 : var_0)))));
                var_14 = (min(var_14, (((((-var_2 == (((var_2 ? 939524096 : var_1))))))))));
                var_15 = (((((max(var_4, var_9)))) ? ((-((0 ? (arr_5 [i_0]) : (arr_4 [i_0 - 1] [i_0 - 1]))))) : (((((max((arr_1 [i_0] [18]), var_4))) ? (((min(67, var_4)))) : var_2)))));
            }
        }
    }
    var_16 = ((var_10 ? ((((1 ? var_4 : var_0)) / var_8)) : var_0));
    var_17 = 52675;
    var_18 = ((-4924853546735891953 ? (((((1 + var_5) && var_8)))) : var_7));
    #pragma endscop
}
