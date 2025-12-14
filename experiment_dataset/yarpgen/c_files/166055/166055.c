/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = var_1;
        var_11 = ((((max(0, 0))) ? 255 : ((((0 ? 112 : 23987)) >> (!3274399432263068943)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = 96;
            var_12 = (((arr_7 [i_1] [i_2] [1]) ? (arr_5 [i_1] [i_1] [i_2]) : ((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_6 [i_1]))))));
            var_13 = ((!(arr_4 [i_1])));
            var_14 = (var_4 != 7186187381837391444);
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] = (((arr_3 [i_1] [i_1]) * (arr_4 [i_1])));
            arr_12 [i_1] [1] [i_1] = (var_3 | var_7);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] [i_4] = (arr_13 [i_1]);
            arr_16 [i_1] [i_1] = ((((arr_7 [i_1] [14] [i_4]) < var_5)));
        }
        var_15 |= (((arr_5 [i_1] [i_1] [i_1]) & var_0));
    }
    var_16 = ((((var_5 * (var_7 + var_7)))) ? var_5 : (min(var_6, (var_3 * var_7))));
    var_17 = (max(var_17, var_5));
    var_18 = (-(((!var_6) ? var_6 : ((2365679403 ? var_7 : var_6)))));
    #pragma endscop
}
