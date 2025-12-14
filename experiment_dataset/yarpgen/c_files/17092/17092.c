/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+(max((!var_12), var_11))));
    var_19 = (min(var_7, (((var_8 & var_11) ? (((max(var_7, 15268)))) : ((var_8 ? var_8 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((((!(arr_0 [i_0] [i_0]))) ? (min((arr_2 [i_0]), var_11)) : var_7));
                var_21 ^= (-(arr_2 [i_1]));
            }
        }
    }
    #pragma endscop
}
