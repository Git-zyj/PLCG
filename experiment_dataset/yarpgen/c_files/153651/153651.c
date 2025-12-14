/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-55 & 59) ? 129 : ((63 ? var_4 : -49)))) <= ((59 ? (!55) : 51184))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((!(25 || -49)))) <= (-96 != -14137)));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 -= (arr_5 [i_0]);
                    var_15 = (arr_4 [i_1 + 1]);
                    arr_8 [i_2] = ((((-var_5 ? var_0 : ((14137 ? var_6 : (arr_6 [i_0] [i_0] [i_0] [i_0]))))) ^ ((((((arr_7 [i_0]) < var_3)) ? (var_8 <= 95) : (arr_2 [i_1 + 2] [i_1 + 1]))))));
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_16 = ((((((arr_12 [i_1 + 1]) + (arr_12 [i_1 + 2])))) ? ((18446744073709551615 ? 51184 : (arr_12 [i_1 + 1]))) : ((-75 ? 226 : 9))));
                    var_17 *= ((((-(arr_11 [i_0] [i_1 - 1] [i_3 - 1] [i_3 + 2]))) < (~65535)));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_4] [i_1] = (((var_11 & var_7) ? ((((48874 > ((max(var_1, (arr_0 [i_0] [i_1 + 2])))))))) : (min((((var_9 ? 14120 : var_5))), (min((arr_13 [i_0] [i_0] [i_0] [i_0]), var_2))))));
                    arr_16 [i_0] [i_1] = (((((var_5 ? (arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 2]) : (arr_14 [i_1 + 1] [i_1 + 2])))) ? 14137 : (arr_10 [i_1] [i_1 + 1] [i_1])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_18 = (!var_4);
                    var_19 = (((((var_0 ? (arr_7 [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0])))) ? var_5 : (((arr_5 [i_0]) ? var_9 : var_0))));
                }
                var_20 = ((((-28556 + (arr_2 [i_0] [i_1 - 1]))) - (((max(-96, (arr_14 [i_1 + 1] [i_1 - 1])))))));
                var_21 = var_1;
                var_22 = (arr_12 [i_0]);
            }
        }
    }
    #pragma endscop
}
