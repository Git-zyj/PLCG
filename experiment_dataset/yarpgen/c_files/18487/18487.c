/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((min(((min(var_14, 0)), (min(6723351749957690406, var_5))))));
                    arr_6 [i_0] [i_1] = (((((arr_2 [i_0 + 3]) ? var_6 : var_10)) < (!-6723351749957690407)));
                    var_20 -= (min(((min(9, var_6))), (((arr_2 [i_0 + 3]) ? var_13 : (arr_2 [i_0 + 4])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [9] [9] [i_2] [4] [i_4] = ((+((var_9 ? 281474976710655 : ((max((arr_9 [0] [1] [5] [i_3] [i_4]), -574899559917530271)))))));
                                var_21 -= -1;
                                var_22 = ((((min((arr_5 [i_0 + 1] [i_2] [i_4]), (((arr_1 [i_1] [i_4]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_2])))))) <= ((107 ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])))));
                                var_23 *= (min((arr_9 [i_0] [i_1] [i_2] [i_0 + 3] [1]), (arr_5 [3] [3] [3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, 25));
    #pragma endscop
}
