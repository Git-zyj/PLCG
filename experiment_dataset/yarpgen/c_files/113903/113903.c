/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((119 ? 40141 : -119));
    var_21 = ((((((4 / 240) ? -3277175102 : 236))) ^ (min((var_1 | var_6), (max(var_12, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = (!-374753841538925373);
                arr_7 [i_0] [i_0] [5] = (-(((arr_0 [1]) ? ((420731875627991381 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [14]))) : ((((!(arr_3 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
