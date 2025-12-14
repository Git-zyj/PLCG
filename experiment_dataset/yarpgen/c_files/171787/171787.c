/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((((-(max(var_4, 24970))))), (467016908 <= var_3))))));
    var_17 -= ((((+(max((-9223372036854775807 - 1), 28694)))) != (!var_3)));
    var_18 -= ((((max((~var_4), (var_2 < var_11)))) ? ((var_9 + (~var_8))) : var_4));
    var_19 = (max(var_19, (((((max(36842, 28694))) <= (!var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (min(((((var_10 ^ 28694) >> (((-41 % 14015875290351030712) - 4430868783358520846))))), ((var_7 ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 1])))));
                var_21 = (((((((arr_1 [3]) >= 40)))) ? (min(((0 ? (arr_1 [i_1 + 2]) : var_6)), (min((arr_2 [i_1 + 3]), 9388713483847353950)))) : (max(1, ((4007491396410610726 ? var_15 : (arr_0 [i_0])))))));
                var_22 -= ((((600527029 ? 65535 : -21324))) ? (arr_1 [i_0 + 3]) : var_9);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_6 [i_2] [15] [i_2] = ((-((var_10 ? var_1 : (arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 1])))));
                    var_23 = -41;
                    arr_7 [i_0 + 1] [i_1] [i_2] = (((((58109 & (arr_4 [i_2] [i_2] [i_2])))) ? ((var_2 ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 + 3]))) : -12));
                    var_24 = (min(var_24, (min((!18446744073709551615), ((!(((~(arr_2 [i_0]))))))))));
                    arr_8 [i_2] [i_2] [i_2] = ((((!(arr_3 [i_2]))) ? (((((39 ? var_14 : var_11)) != var_10))) : ((((min(var_8, (arr_4 [i_0] [i_1] [16]))) >= (21309 / var_3))))));
                }
                var_25 = (min((arr_3 [i_1 + 3]), ((-((4294967295 ? (arr_3 [i_0 - 2]) : 4430868783358520904))))));
            }
        }
    }
    #pragma endscop
}
