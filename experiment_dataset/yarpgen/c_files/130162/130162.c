/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 |= (arr_0 [i_0]);
                var_17 = var_12;
                var_18 = var_8;
                arr_5 [i_0] [i_1] = (((((87 ? ((12348210957332780921 ? var_0 : var_3)) : (((-54 ? -102 : var_1)))))) ? (((111 ? (arr_0 [i_1]) : -88))) : ((min((max(68, 1454164142)), var_14)))));
                arr_6 [i_0 - 1] = (min(((var_0 ? var_2 : var_5)), var_4));
            }
        }
    }
    var_19 = (max(var_19, 68));
    var_20 *= 1951921108;
    #pragma endscop
}
