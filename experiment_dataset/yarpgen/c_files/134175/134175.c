/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((((((var_8 ? var_15 : var_3))) ? ((var_3 ? var_11 : var_7)) : (((-26037 ? -26031 : var_4)))))) ? (((((var_4 ? 26037 : var_6))) ? ((var_15 ? var_11 : -4105748202901596850)) : (((255 ? var_4 : var_11))))) : (((((26014 ? -70 : 16026))) ? ((var_10 ? var_7 : 49508)) : ((var_1 ? var_11 : 262143))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (max(var_17, (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5))) ? (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_12)) : (((var_8 ? 30962 : var_9))))))));
        var_18 = ((((((arr_1 [i_0]) ? 244 : var_3))) ? (((arr_2 [i_0]) ? 1239646299 : var_3)) : ((68 ? 17979214137393152 : -106))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_19 = ((((((arr_8 [i_1] [i_1] [i_1] [i_1]) ? 26031 : (arr_7 [i_1] [i_1] [i_3])))) ? ((((arr_6 [i_3] [i_2] [i_1]) ? 1 : (arr_6 [i_1] [i_3 - 1] [i_3 - 1])))) : (((arr_1 [i_2]) ? var_9 : var_10))));
                    arr_9 [i_2] |= (((((var_9 ? var_5 : 1))) ? ((var_2 ? var_14 : (arr_4 [i_1]))) : (((arr_5 [i_2] [i_3]) ? 122 : var_14))));
                    var_20 = (((((1 ? (arr_6 [i_1] [i_1] [i_1]) : -29277))) ? (((arr_4 [i_2]) ? var_14 : 0)) : ((35 ? 34585 : 1353035133))));
                }
            }
        }
        var_21 = (min(var_21, ((((((var_1 ? (arr_3 [i_1] [i_1]) : (arr_7 [i_1] [i_1] [i_1])))) ? (((arr_0 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (((arr_4 [i_1]) ? -26057 : var_13)))))));
    }
    var_22 = ((((((((var_9 ? var_8 : 18446744073709551614))) ? ((var_11 ? -5988693686352071411 : var_9)) : (((var_6 ? 62 : var_2)))))) ? (((((34584 ? var_12 : var_2))) ? ((-27252 ? var_8 : 18446744073709551608)) : ((877834193409555156 ? var_15 : var_12)))) : (((((5988693686352071411 ? 46 : 18428764859572158443))) ? (((var_11 ? 9223372036854775798 : var_8))) : ((-26037 ? 9223372036854775804 : 18446744073709551590))))));
    var_23 = (max(var_23, (((((((((var_12 ? var_5 : -26029))) ? ((7754 ? var_10 : var_9)) : ((var_12 ? var_7 : var_13))))) ? ((((((var_5 ? var_9 : 1353035125))) ? ((var_5 ? var_8 : var_4)) : ((var_5 ? var_13 : var_5))))) : (((((var_15 ? var_13 : 1153))) ? (((-5171556955770994055 ? 0 : var_13))) : ((5988693686352071410 ? 65534 : var_2)))))))));
    #pragma endscop
}
