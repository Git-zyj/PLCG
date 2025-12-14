/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (((max(var_3, ((~(arr_1 [i_0]))))) + (((((arr_2 [i_0] [i_0]) ? var_14 : (arr_1 [i_1]))) << ((((arr_0 [i_0]) == var_16)))))));
                var_19 = ((+(((((((arr_3 [i_0]) >= (arr_3 [i_1]))))) / var_10))));
                arr_4 [i_0] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_20 = (max(var_20, ((((((var_16 / ((var_8 ? var_16 : var_12))))) ? ((((((var_1 << (var_16 - 100)))) ? ((8704275553270199829 ? -16195 : var_17)) : var_17))) : var_6)))));
    #pragma endscop
}
