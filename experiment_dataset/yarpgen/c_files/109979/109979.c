/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_2;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_11 = (var_3 | var_5);
            arr_8 [i_1] [17] [i_0] = var_6;
            arr_9 [i_1] [i_0] = (var_6 & var_2);
            arr_10 [i_0] = var_9;
            var_12 += ((-(16727036090428174340 == var_1)));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_13 = (max(var_13, 16727036090428174340));
            arr_14 [13] [i_0] [i_0] = (max(-var_9, 1719707983281377267));
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_18 [i_3] &= (((((4398046511100 ? 2147483644 : var_2))) ? var_6 : 193));
            arr_19 [i_0] [1] [1] = (((((16727036090428174348 || var_9) ? (16727036090428174353 == 1719707983281377263) : var_1))) ? (-7864272183243977150 <= 16727036090428174353) : (!var_8));
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_14 = (min(((min((var_0 > var_9), -1014763258))), (max(var_2, -1719707983281377267))));
        var_15 += (-4046711009 ? (((((var_3 ? 16727036090428174353 : var_4)) < 235))) : ((var_0 ? var_1 : -30)));
    }
    var_16 = ((!((((var_4 ? var_5 : 846111969)) <= var_3))));
    #pragma endscop
}
