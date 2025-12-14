/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(var_4, var_12)) <= 4294967295)))) * (min((min(var_10, var_4)), (min(-2097211089801729592, 3521403641))))));
    var_19 = (min(var_19, (((((((((var_16 ? var_3 : var_3))) ? (var_6 * var_0) : ((var_10 ? var_15 : var_3))))) >= (max((max(var_13, -6050911713607941024)), (var_12 * var_13))))))));
    var_20 = (-1 < 6050911713607941024);

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (((var_14 != var_3) - var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = (arr_9 [i_4] [i_0] [i_1] [i_0]);
                                var_23 *= (((arr_3 [i_3] [i_2] [i_3]) ^ (((((arr_12 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 + 2]) <= var_2))))));
                                arr_13 [i_1] [i_1] = var_10;
                            }
                        }
                    }
                    arr_14 [i_1] [1] [i_2] = ((max(var_17, (var_12 | var_2))));
                    var_24 -= (0 - 268435440);
                    var_25 = (max(var_25, (((((min((arr_8 [i_2] [i_1] [i_2] [i_1]), ((var_14 ? var_13 : var_9))))) ? (max((max((arr_5 [i_1]), (arr_2 [i_0] [10]))), ((((arr_5 [i_0]) % var_10))))) : (arr_6 [i_2] [0] [i_1] [i_0 - 3]))))));
                }
            }
        }
        var_26 = (max(var_26, ((((min(var_11, var_4)) == ((((arr_5 [i_0 - 3]) ? (arr_5 [i_0 - 4]) : var_1))))))));
        var_27 = (max(var_27, (((120 | (((max((arr_0 [i_0]), var_14)) / (min((arr_0 [1]), (arr_3 [i_0] [i_0] [i_0 - 2]))))))))));
    }
    #pragma endscop
}
