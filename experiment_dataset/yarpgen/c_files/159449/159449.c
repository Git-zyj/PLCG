/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? (((~65533) & (~var_12))) : ((var_13 ? (-118 ^ var_1) : -8471))));
    var_20 = var_8;
    var_21 = -157;
    var_22 = (min(var_22, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_23 = (~-4026531840);
                        var_24 = (((arr_5 [i_2] [i_3 - 2] [10] [i_3]) >= (arr_5 [i_0] [i_3 + 1] [i_3] [i_0])));
                        arr_10 [i_0] [i_2] [i_3] = (!var_13);
                        var_25 = (arr_2 [i_0] [i_1] [i_0]);
                    }
                }
            }
        }
        var_26 = ((8306335436246543148 ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (((min(var_13, ((min((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), var_18))))) << (((max(33, -2628082110931942378)) - 15818661962777609213))));
        var_27 = var_17;
        arr_14 [i_4] = ((-(((arr_12 [i_4] [i_4]) + var_18))));
    }
    #pragma endscop
}
