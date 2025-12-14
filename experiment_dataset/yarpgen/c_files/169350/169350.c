/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_11));
                var_16 = ((((((arr_2 [i_1 + 2]) | (arr_2 [i_1])))) != (((arr_0 [i_0]) & (arr_2 [i_1 + 3])))));
                var_17 = (((!-3) || (31216 || 1939)));
            }
        }
    }
    var_18 = (var_1 > var_13);
    var_19 = 2;
    var_20 &= ((var_7 ? (((var_11 ? var_8 : 10237365953967522832))) : var_1));
    var_21 &= (min((((46049 - ((-6 ? 227 : 9881))))), var_3));
    #pragma endscop
}
