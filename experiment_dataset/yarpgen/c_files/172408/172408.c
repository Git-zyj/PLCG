/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((var_8 && (arr_0 [i_1])))) - var_17)))));
                arr_4 [i_0] = 18446744073709551615;
            }
        }
    }
    var_20 = max((max(var_13, -var_7)), var_16);
    var_21 = ((((min(var_14, (var_12 == var_12)))) ? (((((var_12 ? var_14 : var_18))) ? (!var_10) : -var_15)) : var_17));
    var_22 = var_17;
    #pragma endscop
}
