/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 ^= ((778239783 ? (((((232 ? 12139688866540038231 : 778239790))) ? ((var_6 ? 6307055207169513379 : -26554)) : -26558)) : ((((((-26528 ? 12139688866540038219 : 778239808))) ? ((((arr_1 [i_0]) == 0))) : (-778239784 * var_0))))));
                arr_7 [i_0] [i_1] [i_1] = 1;
                arr_8 [2] [i_1] = (min((-1 | var_1), ((((!(arr_5 [i_0]))) ? ((26553 ? var_3 : var_10)) : (((arr_1 [i_0 + 1]) ? (arr_6 [i_0] [i_0] [i_1]) : var_10))))));
            }
        }
    }
    var_14 = (5002494469507199985 <= 1);
    var_15 ^= (((((((max(var_7, var_5))) ? ((var_5 ? 3348680244 : var_3)) : (((var_1 ? var_2 : var_2)))))) | ((var_5 ? (min(12139688866540038231, var_10)) : (max(-1691342911, 12139688866540038237))))));
    #pragma endscop
}
