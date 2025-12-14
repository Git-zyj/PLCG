/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((-(-9 <= 16818350952610079311))), var_6));
    var_12 = (((-var_6 ^ -var_9) | (var_4 > -1647123169)));
    var_13 = ((((-1 | (-2147483647 - 1))) / var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-((var_5 ^ (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_1] = 16074;
                        arr_10 [i_1] [i_1] [i_1] = ((-((((arr_8 [i_1] [i_1] [i_2] [i_3 + 1]) <= var_2)))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_14 = -2147483647;
                        arr_15 [i_1] [i_1] [i_1] [1] [i_1] = ((-((1 << (arr_13 [i_0] [i_0] [i_0] [13])))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_15 = var_3;
                        var_16 |= (max((((-2147483647 - 1) < (var_8 >= 41))), (((9223372036854775807 | var_0) <= (-2961823738049046870 + var_2)))));
                    }
                    var_17 = ((((-(arr_5 [i_1]))) >> ((((-(min(255, var_2)))) - 18446744073709551311))));
                }
            }
        }
        var_18 = (max(var_18, (((-var_0 >> (var_6 >= var_3))))));
    }
    #pragma endscop
}
