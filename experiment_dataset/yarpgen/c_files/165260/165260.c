/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = ((-var_1 <= ((max(((-2256 ? 1417 : (arr_2 [10] [i_0]))), (var_6 != 1))))));
        arr_3 [4] = (arr_2 [i_0] [i_0]);
        var_21 = (min((~450036817), 1048512));
        var_22 *= ((max(-0, ((((arr_1 [i_0]) <= 3894457887))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_23 = ((((max((~3), (arr_4 [i_2] [i_3])))) ? 49263 : (((!((min((arr_9 [i_2] [4]), var_0))))))));
                    arr_12 [i_1] [i_1] [i_1] [i_2] = (arr_0 [i_3]);
                    var_24 = (min(var_24, (((((((arr_11 [i_1] [i_3 + 1] [i_1]) ? (arr_10 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_1] [i_3 + 1] [1])))) ? (max((arr_11 [8] [i_1] [i_3 + 1]), (arr_11 [i_3 + 1] [i_2] [i_3 + 1]))) : var_3)))));
                    var_25 = (~1);
                }
            }
        }
        arr_13 [i_1] = (min((-127 - 1), 7));
    }
    var_26 &= (1 ? (((~(var_10 % var_10)))) : (min(var_0, (~0))));
    #pragma endscop
}
