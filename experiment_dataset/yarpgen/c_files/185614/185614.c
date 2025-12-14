/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (min(((((arr_2 [i_0 - 1]) <= var_11))), (~23778)));
                var_13 -= ((514407388 || ((((arr_0 [i_0 + 3]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 - 1]))))));
            }
        }
    }
    var_14 = (min(var_14, var_6));
    var_15 = ((min(var_7, (var_1 * 648496831))));
    var_16 = (max(var_16, ((min(var_4, (230 - 849109652))))));
    var_17 = (max(var_17, var_2));
    #pragma endscop
}
