/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_4;
    var_21 *= var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_22 &= (arr_1 [i_0] [10]);
        var_23 = (arr_2 [i_0]);
        var_24 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [9] [9] = var_17;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_25 = (max(var_25, ((min(((536870911 - (arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 1]))), (((arr_7 [i_2 + 1] [i_2 - 1]) + -536870889)))))));
                    var_26 = (min(var_26, ((min((((min((arr_10 [4] [i_1]), (arr_5 [i_1]))) / (arr_7 [i_2] [i_3 + 1]))), ((((arr_3 [4] [6]) == (4974 != -1454145223)))))))));
                    arr_13 [i_1] [4] [i_3] = (min((((arr_6 [i_1]) ^ 57697)), ((min(238, var_3)))));
                    var_27 = (((((arr_0 [i_1]) + 2147483647)) << (((((arr_0 [i_2]) + 266182464)) - 2))));
                    arr_14 [2] &= (-536870912 % 20980);
                }
            }
        }
        arr_15 [8] = -52386;
    }
    var_28 = (max(var_28, var_5));
    #pragma endscop
}
