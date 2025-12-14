/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(236, (222 + 20)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 ^= ((!(((((var_13 <= (arr_1 [i_1]))) ? var_11 : ((var_14 ? 34542 : var_7)))))));
                var_20 = (min(var_20, var_0));
                arr_8 [i_0] [i_0] [1] = ((~(((((max(var_10, (arr_6 [i_0] [i_0] [i_0])))) >= ((var_17 ? var_6 : var_10)))))));
            }
        }
    }
    var_21 = var_16;
    var_22 = ((((!(~19))) ? (var_5 < var_12) : (min((!171), (max(var_13, var_17))))));
    var_23 = (max((max(var_10, ((var_10 ? 1 : 1)))), ((var_12 ? ((var_16 ? var_10 : var_6)) : var_1))));
    #pragma endscop
}
