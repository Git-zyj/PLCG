/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 << ((((((var_7 ? ((var_4 ? -6812 : var_1)) : var_1)) + 6841)) - 15))));
    var_11 = (max(((((2383967915909781590 ? var_0 : 2383967915909781590)))), (max((max(var_9, -107558011441058773)), var_9))));
    var_12 = (min(var_12, 36354));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 += (((((var_2 ? 123 : (((arr_4 [i_0] [i_1]) << (var_0 - 25691)))))) ? ((~(~107558011441058764))) : (((((-(arr_4 [i_0] [6])))) ? -107558011441058744 : var_2))));
                    var_14 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
