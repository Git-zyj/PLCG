/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((min(-18, -18))), ((var_4 ? ((var_6 ? var_8 : var_7)) : ((var_4 ? var_9 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((((((arr_3 [i_0]) * (arr_5 [i_0 - 2] [i_1])))) ? (arr_0 [i_0 - 2]) : (arr_4 [i_0 + 1] [i_1 - 1])))) ? (((arr_5 [i_1 - 1] [i_0 + 2]) ? (arr_5 [i_1 - 1] [i_0 - 2]) : (arr_5 [i_1 - 1] [i_0 - 2]))) : (((min((max((arr_3 [i_0]), (arr_4 [i_0] [i_0]))), ((((arr_3 [5]) || (arr_2 [i_0]))))))))));
                var_13 = (-18 ? 25885 : 39646);
                var_14 = 0;
                var_15 *= ((((((((arr_5 [i_0] [i_0]) != (arr_1 [i_0 - 2] [i_0 - 2]))) ? (1 == 3) : (arr_0 [i_1 - 1])))) & (min((min((arr_5 [i_0] [i_0]), (arr_1 [i_0] [i_1]))), (min((arr_5 [i_0] [i_1]), (arr_1 [i_0] [i_1])))))));
            }
        }
    }
    var_16 = var_1;
    var_17 *= var_3;
    #pragma endscop
}
