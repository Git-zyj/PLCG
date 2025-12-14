/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 |= (!(((33572 ? 1096174414 : 1))));
                var_17 -= ((!(((min((arr_6 [i_0] [i_1]), var_3)) == (((var_1 ? (arr_3 [i_0]) : var_4)))))));
                var_18 = (min(var_18, ((((((~((-(arr_2 [i_1] [i_0])))))) ? var_2 : (((arr_3 [i_1]) ? ((((arr_5 [i_0] [i_1] [i_1]) || var_11))) : (((!(arr_0 [i_0])))))))))));
            }
        }
    }
    var_19 = (max((((var_4 ? var_4 : var_0))), (((var_12 ? (((var_5 ? var_5 : var_6))) : var_9)))));
    var_20 += var_4;
    #pragma endscop
}
