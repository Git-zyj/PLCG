/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((var_8 * ((max((arr_1 [i_0 - 1]), (arr_1 [i_0])))))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = (max(var_17, ((min((-22295 > 127), (max((-26 < 1), (min((arr_0 [i_0]), 1)))))))));
                    var_18 = (min((arr_4 [i_0 - 1] [i_1]), ((2147483647 ? ((1 ? 3982645093 : (arr_4 [i_0] [i_1]))) : (((max((arr_4 [1] [i_0 - 1]), var_9))))))));
                    var_19 = (((var_4 <= 958964655) & (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                }
                arr_8 [i_0] [i_0 - 1] [i_0] = -124;
                var_20 = ((((max(var_15, (arr_2 [i_0 - 1])))) <= ((max((arr_4 [i_1] [i_0 - 1]), (min((arr_4 [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_21 = (arr_6 [i_4 + 1] [i_5 + 3] [i_6]);
                        var_22 = (min((((1715084819979702528 | 849862948) ? (arr_6 [i_3] [i_4 - 1] [i_5 - 1]) : 195)), 1304301807));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_23 = max(-1304301807, 8);
                        var_24 -= (max((((max(-1757, (arr_15 [i_4]))))), (((arr_18 [i_3] [i_3] [i_5] [i_5]) ? (arr_18 [i_3] [i_3] [i_3] [i_3]) : (arr_6 [i_3] [i_3] [i_3])))));
                        arr_21 [i_3] [i_4 - 2] [i_5] [i_5] = var_6;
                        var_25 = 1;
                        var_26 = ((~((max((arr_2 [i_5 + 3]), (arr_2 [i_3]))))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_27 = ((1 ? 6 : -24976));
                        var_28 -= 1964070157;
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_29 = (max((min(61, (arr_4 [i_5 + 3] [i_4 - 2]))), -1757));
                        var_30 = ((var_13 ? (((((((var_10 <= (arr_6 [i_3] [i_3] [i_3])))) == (arr_22 [i_4 - 2] [i_5] [i_5] [i_5 + 2] [i_4 - 2] [i_5]))))) : ((((((arr_12 [i_9]) | 2724172064))) ? (~2147483643) : (arr_16 [i_4 + 1] [i_4 + 1] [i_5 + 3] [i_5 - 2])))));
                        var_31 = (((((arr_5 [i_5 + 2] [12] [i_4 - 1]) ? (arr_5 [i_5 - 2] [i_4] [i_4 - 1]) : (arr_5 [i_5 - 1] [11] [i_4 - 1])))) ? (arr_2 [i_4]) : var_12);
                        var_32 = ((((max((arr_27 [i_4 - 2] [i_3] [i_5] [i_3] [i_5 + 1]), (arr_27 [i_4 + 1] [i_3] [i_4 + 1] [i_5 - 2] [i_5 - 2])))) ? (min(((1987070357 ? 0 : (arr_5 [i_9] [i_3] [i_3]))), var_9)) : var_7));
                        var_33 = (max(var_33, (arr_25 [i_3] [i_3] [i_3] [i_3])));
                    }
                    var_34 = ((~(1 <= 13275929935791140958)));
                }
            }
        }
    }
    #pragma endscop
}
