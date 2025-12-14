/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 32767;
    var_11 = ((var_5 || (((var_2 ? ((min(var_6, var_4))) : var_3)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((-(227 + var_4)));
        arr_2 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = ((((((arr_4 [i_1]) == var_9))) > (arr_3 [i_1])));
        var_14 = (((arr_1 [i_1]) * var_1));
        var_15 = ((!(((92 ? (arr_5 [i_1] [i_1]) : 35786)))));
        var_16 *= (min((~25763), (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 -= (min(1792, 3375362607));
        var_18 *= (((((max((min(112, 12)), 230)))) > ((919604709 ^ (arr_5 [i_2] [i_2])))));
        var_19 = (-7834 ? 6670637420789890281 : 149);
    }
    var_20 = -26572;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_21 = ((-7122668591632962007 == (arr_9 [i_3 - 1])));
        var_22 = ((var_1 >= (arr_8 [i_3 - 1] [i_3])));
        var_23 = (((arr_8 [i_3 - 1] [i_3 - 1]) ? (arr_8 [i_3 - 1] [i_3]) : (101 * var_7)));
        arr_10 [i_3] = (((arr_8 [i_3 - 1] [i_3 - 1]) % 111));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (max((arr_8 [i_4 - 1] [i_4]), (((-((min(25763, 9))))))));
        var_24 -= (max((((-(arr_11 [i_4 + 1])))), (min((arr_11 [i_4 - 1]), var_7))));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_25 = ((-244 ? 3 : ((-(arr_8 [i_5] [i_5])))));
        arr_20 [i_5] = arr_14 [i_5];
        var_26 = (arr_19 [i_5]);
    }
    #pragma endscop
}
