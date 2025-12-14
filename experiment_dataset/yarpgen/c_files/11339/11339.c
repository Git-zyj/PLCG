/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3444895751;
    var_21 = (max(var_21, (((var_11 > (10166809818116164264 / var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 -= ((((max(3829429277, (var_16 | var_11)))) ? (arr_3 [i_0] [1]) : var_19));
                var_23 = ((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? ((min((arr_5 [i_1 + 3]), (arr_5 [i_1 + 2])))) : (((!(arr_5 [i_0 + 1]))))));
                var_24 = (max(var_24, (arr_4 [i_0 - 2] [i_1 + 2])));
            }
        }
    }
    #pragma endscop
}
