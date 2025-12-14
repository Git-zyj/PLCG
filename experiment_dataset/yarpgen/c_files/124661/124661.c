/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = (max((((min(var_6, var_15)))), (0 % 1)));
    var_21 = var_17;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (((((3704056531 < ((min(1, (arr_1 [i_0]))))))) >> (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_23 = (max(var_23, ((max((arr_7 [i_0] [i_1] [i_2] [i_3] [i_0]), ((2147483647 ? -2147483645 : (arr_7 [i_0] [i_1] [i_1] [i_1] [i_0]))))))));
                        var_24 = -var_16;
                    }
                }
            }
        }
        arr_11 [12] = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_14 [i_4] = ((-2147483621 ? (arr_9 [2] [2] [i_4 + 3] [i_4 + 2]) : var_12));
        arr_15 [i_4] = 0;
        var_25 -= 65529;
    }
    var_26 += (min(var_14, 4));
    #pragma endscop
}
