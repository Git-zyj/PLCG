/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_13 ? var_10 : (((var_14 >= (((1 << (9223372036854775791 - 9223372036854775763))))))))))));
    var_18 = var_13;
    var_19 = (var_9 / var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = -4626541823031178970;
                var_20 = (max(var_20, ((((((max(var_7, (arr_3 [i_0] [i_1] [i_0]))) ? ((((!(arr_1 [i_0] [i_0]))))) : ((var_5 >> (11057480186959707533 - 11057480186959707505))))))))));
                var_21 *= (max((((arr_1 [i_0] [i_1]) & (arr_1 [i_1] [i_0]))), ((max((arr_1 [i_0] [i_1]), 58901)))));
                var_22 += (((+(((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_1 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
