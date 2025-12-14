/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 += ((((((arr_3 [4]) ? (arr_2 [i_0]) : (arr_4 [1])))) ? 65535 : (((arr_6 [i_1]) ? 65531 : var_14))));
                var_20 = (max(18446744073709551606, ((-((max(25695, 18)))))));
                var_21 = ((((((var_9 <= (arr_1 [i_1]))) ? (max(var_14, (arr_0 [i_1]))) : (arr_1 [i_0]))) - var_9));
                var_22 = (((min((arr_5 [i_0] [i_0] [i_0]), 65532)) + ((((!(arr_5 [i_0] [i_1] [i_1])))))));
                var_23 = 7925594314005244481;
            }
        }
    }
    var_24 = ((max(26545, var_0)) << (var_15 - 55));
    #pragma endscop
}
