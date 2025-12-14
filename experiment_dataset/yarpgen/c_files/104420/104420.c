/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~var_16) + (max(var_17, (min(var_0, var_8))))))));
    var_20 = ((((((((var_9 ? 65532 : var_5))) ? ((var_12 ? var_8 : var_17)) : -var_8))) ? (min((max(var_4, 18446744073709551598)), ((var_14 ? var_9 : var_3)))) : (((((var_1 <= var_1) >= ((var_8 ? var_9 : var_16))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 &= ((((arr_3 [i_0 + 2]) % (arr_3 [i_0 - 1]))));
                var_22 += ((((min((4372 + -15), (arr_0 [12])))) ? (((arr_1 [10]) ? (arr_1 [10]) : var_5)) : (((((min((arr_5 [14] [i_0] [14]), var_11))) >= (var_4 || var_15))))));
                var_23 = ((max(var_8, (((!(arr_0 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
