/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 *= (min(1976011101, -1976011101));
        var_15 = (max((((((max(22, 56603))) / (((arr_1 [i_0]) << (((-1976011093 + 1976011121) - 27))))))), (min(((min(-1976011101, (arr_0 [i_0])))), (18446744073709551612 % var_4)))));
        var_16 = (min(55, -1976011073));
        arr_2 [i_0] [i_0] = (max((max((((arr_1 [1]) & var_1)), ((min((arr_1 [i_0]), var_13))))), ((((-1976011082 > 11075481794848773489) != (min(var_4, -1976011102)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((max((min((min(114, var_10)), ((min(var_11, (arr_1 [i_1])))))), (min(((max(var_7, 1))), (max((arr_4 [10]), var_8)))))))));
        arr_6 [i_1] = ((((max((min((arr_3 [8] [i_1]), 59567)), (5969 || -1976011073)))) >> ((((var_3 >= var_5) || ((((arr_5 [i_1]) << (var_5 - 15719)))))))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 = (((max(((max((arr_3 [i_3] [i_4]), var_1))), (max(9223372036854775807, 18446744073709551612)))) / ((max(((min((arr_9 [i_1] [i_1] [14]), (arr_10 [i_1] [i_1])))), (((-9223372036854775807 - 1) / var_7)))))));
                        var_19 = (max((max(9223372036854775807, ((max(-1976011101, 59567))))), ((((max(var_11, 2868647633)) % (max((arr_12 [i_1] [i_3] [i_2] [i_1] [i_1]), var_3)))))));
                        var_20 = (((max(((max((arr_10 [i_2] [i_2]), 5969))), (max(138, var_9)))) >= (min((-2816941874751319465 | var_2), (((var_1 << (((arr_1 [i_4]) - 58027)))))))));
                        arr_14 [i_1] [i_1] [4] [i_1] = (((max(((((arr_8 [i_2]) >= 123))), (min(-5161849004675901441, var_1)))) / (max(((((arr_13 [i_1] [i_2] [9] [i_2] [9]) == (arr_9 [i_1] [i_2] [i_3 - 1])))), (198 ^ var_0)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_21 -= (29808 || 1);
                        arr_22 [i_1] [i_5] [7] [i_1] [i_1] = (min((min((((-1976011102 + 2147483647) << (17666304953132225723 - 17666304953132225723))), (max(5983, -1976011107)))), ((((max(17666304953132225720, var_5)) >= (max(var_2, (arr_11 [i_6] [i_6] [i_1] [i_7]))))))));
                    }
                }
            }
        }
    }
    var_22 = max((max((1976011110 && 70), (max(23971556, 161)))), (max((51427 >= var_2), (min(52529, 1976011101)))));
    #pragma endscop
}
