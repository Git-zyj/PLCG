/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 -= (min(((~(!0))), var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = var_1;
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = ((((!(((220 & (arr_2 [i_1]))))))));
        var_16 = ((((((arr_1 [i_1]) ? 36 : (arr_1 [i_1])))) ? (arr_0 [i_1] [10]) : (((((-(arr_0 [i_1] [i_1])))) ? 46098 : (arr_0 [i_1] [0])))));
        var_17 = (max(((~((var_10 | (arr_1 [i_1]))))), (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_2]);
        var_19 = (((min((arr_1 [i_2]), (arr_6 [i_2] [i_2]))) - 127));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_20 = (arr_7 [i_3]);
        var_21 = ((-(((-var_8 && ((((arr_6 [i_3] [i_3]) ? (arr_5 [i_3]) : 14))))))));
        var_22 = 2889724340059075260;
    }
    var_23 = ((var_3 ? (((var_9 != ((var_10 ? var_6 : var_1))))) : (((~var_7) / var_6))));
    var_24 = var_5;
    #pragma endscop
}
