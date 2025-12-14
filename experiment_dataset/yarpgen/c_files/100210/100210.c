/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = -95;
                    var_12 = (max(var_12, (((((min((var_6 <= 1569616458858885321), var_2))) ? (((-(~var_4)))) : (((min(var_8, var_8)) / (var_5 <= var_7))))))));
                }
            }
        }
        var_13 = (max(var_13, ((min(((max(var_1, ((((arr_1 [0] [i_0]) && (arr_0 [i_0]))))))), (max(-var_8, ((max(var_3, var_4))))))))));
        var_14 -= ((((((arr_0 [9]) ? (var_1 && 48191) : 48191))) && ((((var_4 <= 18446744073709551615) ? (min((arr_5 [i_0] [21]), (arr_3 [17]))) : (17361 && var_6))))));
        var_15 *= (min(((var_7 ? var_5 : (arr_5 [i_0] [2]))), (((var_2 ? 17356 : var_6)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = (((((((var_2 ? var_5 : (arr_7 [i_3] [2] [i_3])))) ? var_0 : 1569616458858885305)) <= (1 == var_6)));
        var_17 = (((var_1 <= -1291168608) && (((min(48205, 1146184859))))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_18 = ((((!17356) ? 48205 : 18446744073709551615)));
        var_19 = (arr_6 [9]);
    }
    var_20 = (~var_10);
    var_21 = (max(16777215, var_8));
    var_22 = min((((var_6 ? var_6 : ((var_6 ? var_4 : var_0))))), (min((((var_6 ? var_2 : var_7))), -3476236979442708625)));
    #pragma endscop
}
