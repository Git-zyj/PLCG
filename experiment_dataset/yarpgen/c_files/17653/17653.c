/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_1 ? 19221 : var_2)) * (1 == 3572675190)))) ? 722292093 : ((((4294967273 ? var_10 : 722292095)) + 417)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = var_12;
                var_15 &= (((((var_10 | (arr_2 [i_0 + 3])))) ? (((var_4 ? ((var_11 ? 249 : var_8)) : 187))) : (((~var_4) ? (((arr_2 [0]) ? (arr_3 [i_0] [2]) : 3572675185)) : (((min(var_8, var_12))))))));
            }
        }
    }
    var_16 += ((((min(((min(-11578, -26423))), (1 / 1)))) * ((10766 ? (max(var_7, var_10)) : (((var_1 ? var_10 : 39957)))))));
    var_17 ^= var_7;
    #pragma endscop
}
