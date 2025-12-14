/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((0 % ((var_9 ? -69 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((((~(~1364057967682559060)))) ? (((((var_4 ? 11606223400334496983 : 0))) ? ((18446744073709551615 ? (arr_0 [i_0] [i_0]) : 17146314752)) : (((16252928 ? var_9 : (arr_3 [i_0 - 1])))))) : ((2097151 ? ((var_4 ? (arr_0 [i_0] [i_0]) : (arr_5 [i_0 - 1] [i_0] [i_1]))) : ((-46 ? (arr_1 [i_0]) : var_10))))));
                var_13 = (max(var_13, (((-((184 ? 5202772089523275405 : 116)))))));
                var_14 -= var_9;
            }
        }
    }
    #pragma endscop
}
