/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_8));
                var_20 = (((((0 ? ((((arr_3 [i_1 + 2]) - (arr_5 [i_1] [i_0] [i_0])))) : (9 * 13189731354084277503)))) ? var_13 : ((((!(((0 >> (var_5 + 1089092407))))))))));
            }
        }
    }
    #pragma endscop
}
