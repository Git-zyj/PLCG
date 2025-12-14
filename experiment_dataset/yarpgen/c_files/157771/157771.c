/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_10 ? var_1 : var_10))) ? (~var_6) : var_1)) == ((max((var_2 <= var_5), ((var_2 ? var_10 : -30407)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = var_10;

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_17 -= ((((max((arr_3 [i_0] [i_1 + 1] [i_0]), (arr_2 [i_0] [i_1 + 1])))) ? (((arr_3 [0] [i_1 + 1] [i_1 + 1]) >> (((arr_3 [i_0] [i_1 - 3] [i_1]) - 4766908755530545267)))) : (min((arr_3 [i_0] [i_1 - 2] [i_1 - 2]), var_10))));
            var_18 = var_9;
            arr_5 [i_0] [i_0] [1] = (((min(var_7, (!3383138248))) <= ((-(((var_5 || (arr_4 [i_0] [i_0] [i_0]))))))));
            arr_6 [i_1] [i_1] &= (((((6387809688252646860 ? ((-(arr_4 [i_0] [i_1] [i_1]))) : (var_4 - var_8)))) || ((max(var_14, var_5)))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = ((+((((arr_2 [i_0] [i_2]) == var_6)))));
            arr_11 [i_2] = arr_3 [i_0] [i_0] [i_2];
            var_20 = ((((max((arr_1 [i_0]), (arr_1 [i_2])))) || ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_0] [i_3] = (arr_1 [i_3]);
            var_21 -= max(((~(((arr_9 [i_0] [i_0] [i_0]) ? var_2 : var_7)))), (((!((!(arr_9 [i_0] [i_0] [i_0])))))));
            var_22 = (arr_13 [9] [i_3] [14]);
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_23 = (min(((((max((arr_4 [19] [i_4] [i_4]), (arr_1 [i_4]))) < ((((var_8 || (arr_12 [i_4] [i_4])))))))), (((((arr_7 [i_4]) && (arr_10 [i_4]))) ? (!var_5) : (max((arr_1 [i_4]), (arr_9 [i_4] [i_4] [i_4])))))));
        var_24 = var_7;
        var_25 = ((!((max(((4580 ? (arr_13 [6] [i_4] [i_4]) : -7907)), ((((arr_9 [0] [i_4] [i_4]) >= var_11))))))));
        var_26 = (min((((arr_4 [i_4] [i_4] [i_4]) ? (arr_4 [i_4] [i_4] [5]) : (arr_4 [i_4] [i_4] [i_4]))), var_1));
    }
    var_27 = ((((max(var_6, var_12))) ? var_4 : ((10491743782862935683 ? -6490278726531268530 : 2673077870))));
    #pragma endscop
}
