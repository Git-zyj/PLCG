/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= 81;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((-((((arr_2 [i_0]) > (arr_2 [i_1])))))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (max((arr_6 [i_2] [i_0] [i_0] [i_0]), (arr_5 [i_2] [i_1])));
                    arr_8 [i_0] [i_2] [i_2] [i_2] = (((((arr_7 [i_0] [i_1] [i_2]) ? (arr_7 [i_0] [i_0] [i_2]) : (arr_7 [i_0] [i_1] [i_1]))) ^ ((max((arr_7 [i_0] [13] [i_2]), 4094)))));
                    var_19 = (arr_7 [i_1] [i_1] [i_2]);
                    arr_9 [i_0] [i_2] [i_0] = (((max(var_2, ((var_4 >> (var_9 - 88))))) | var_15));
                }
                var_20 &= (((arr_1 [i_0]) ? (((var_1 ? (((arr_2 [i_0]) ? 196 : var_4)) : 0))) : -4553347184869460443));
                var_21 -= ((((((!var_0) ? (((var_7 + 9223372036854775807) >> (var_12 - 64437))) : ((((!(arr_3 [i_0] [i_1] [i_1])))))))) ? 200 : (((!((((arr_0 [i_1] [i_0]) ? (arr_1 [i_0]) : 7430981063111163495))))))));
                var_22 -= ((var_14 == (((((arr_0 [i_0] [i_0]) & -30))))));
            }
        }
    }
    #pragma endscop
}
