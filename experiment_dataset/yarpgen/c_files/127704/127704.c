/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(var_19, ((((max((arr_1 [1] [1]), var_18))) ? ((min((arr_2 [i_1]), (arr_1 [i_0] [i_1])))) : -2020894370))));
                arr_5 [i_0] = (min((((1407238969 > (arr_2 [i_1 + 1])))), var_2));
                var_20 = (((((((-2020894370 ? var_1 : var_17)) < ((min((arr_1 [i_0] [i_1]), var_7)))))) < (((var_14 - 4) ? (arr_3 [i_1 + 1] [i_1]) : (((!(arr_2 [i_0]))))))));
                var_21 = 134;
            }
        }
    }
    var_22 = var_7;
    var_23 = (((635546369630583924 ? 83 : 0)));
    var_24 = (((((85 ? 26 : -1480796104))) ? (((((max(251, var_16))) ? (0 == 251) : ((min(var_17, var_10)))))) : 11656972752336175718));
    #pragma endscop
}
