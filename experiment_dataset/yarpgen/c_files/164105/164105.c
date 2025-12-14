/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 ? var_5 : (((var_1 / var_4) | var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (arr_0 [i_0 + 1]);
                var_19 *= (arr_2 [i_0 - 1] [i_1 - 1] [i_1 - 1]);
                arr_6 [i_1] [i_1] = (((((((min(var_0, (arr_2 [i_0] [12] [i_0 - 1])))) ? (max((arr_1 [i_0]), var_6)) : var_2))) ? (((((0 % (arr_0 [i_0]))) != -1))) : (arr_1 [i_0 + 1])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = ((((min((min((arr_12 [i_0] [5] [i_2 - 1] [i_3] [i_4] [i_4]), var_3)), (arr_8 [i_0 - 2])))) ? (max(0, (min(var_4, var_7)))) : (((((var_6 < (arr_8 [i_0]))))))));
                                arr_14 [i_1] = (((var_2 >> (var_6 - 3613243476130815591))));
                                var_21 = (max(var_21, ((max((min((min(var_8, 955367583)), var_5)), (((var_2 ? (arr_3 [i_2 - 2] [i_2] [i_4]) : (arr_3 [i_2 - 1] [i_4] [18])))))))));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = (arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((((-955367583 ? -71 : 1))))) <= ((var_8 * (~var_3)))));
    var_23 = var_3;
    var_24 = var_3;
    #pragma endscop
}
