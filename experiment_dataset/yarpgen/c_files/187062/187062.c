/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((((var_12 ? var_2 : var_7)) ^ ((var_4 ? var_14 : var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((max((max((arr_3 [21] [i_1] [i_1]), var_5)), ((((arr_2 [i_1]) && (arr_4 [i_0] [i_0])))))) >> (arr_4 [i_0] [i_1])));
                var_18 = ((+((((((arr_3 [i_0] [i_0] [i_0]) ? var_2 : (arr_3 [i_1] [21] [i_1])))) ? (((arr_3 [i_0] [i_1] [i_0]) ? var_5 : var_10)) : (((min((-127 - 1), 94))))))));
                arr_6 [i_0] [i_0] = ((-((((((arr_2 [i_0]) ^ var_2))) ? (min(var_13, var_8)) : ((((arr_1 [i_0]) ? var_5 : (arr_1 [i_0]))))))));
                var_19 -= var_8;
            }
        }
    }
    var_20 = (min(((((min(var_8, var_10))) ? ((0 >> (19980 - 19957))) : (var_16 && var_2))), (min(((min(var_4, var_2))), (~var_9)))));
    #pragma endscop
}
