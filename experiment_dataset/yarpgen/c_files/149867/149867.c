/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (((arr_0 [i_0 - 1]) && (arr_0 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = ((-25932 ? (((arr_2 [i_0 + 3] [i_0 + 2] [i_0 + 3]) ? var_5 : 39603)) : (((var_17 - 29222) ? 1168459304908330567 : (arr_1 [i_0])))));
            var_21 = (max(var_21, (((((((arr_0 [i_0 + 2]) ? var_13 : (arr_3 [i_0 + 2] [i_0 + 1])))) ? (arr_3 [i_0 + 2] [i_0 + 1]) : (arr_2 [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
            var_22 = (((arr_3 [i_0] [i_0]) ? (arr_1 [i_0]) : (((((arr_0 [i_0 + 3]) != ((max((arr_2 [i_1] [i_1] [i_1]), (-32767 - 1))))))))));
            arr_5 [i_0] [i_1] [i_0] = (min(39613, (arr_0 [i_0 + 2])));
            var_23 = (((((-var_7 ? (arr_0 [i_0 - 1]) : ((min(30924, var_16)))))) ? var_16 : (((arr_2 [i_0] [i_1] [i_1]) ? (arr_1 [i_0]) : ((255 ? (arr_3 [i_1] [i_0]) : var_12))))));
        }
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_24 = var_9;
            var_25 = (max(var_25, (arr_2 [i_2 + 2] [i_2 + 2] [i_0 - 1])));
        }
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (arr_6 [20])));
        var_27 = (((((var_19 ? (arr_10 [i_3 + 3] [i_3]) : (arr_10 [i_3 + 3] [i_3])))) - (((arr_10 [i_3 + 3] [i_3]) ? 0 : 30280))));
    }
    var_28 = var_18;
    #pragma endscop
}
