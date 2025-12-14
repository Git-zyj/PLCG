/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, ((-(min((arr_2 [i_0]), 1032192))))));
        var_18 = (max(var_18, ((((arr_1 [i_0]) ? (arr_0 [i_0]) : 27631)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
        arr_6 [i_1] = ((((arr_3 [i_1] [i_1]) < (arr_3 [i_1] [i_1]))) ? (((((arr_3 [i_1] [i_1]) > 7383927706691887691)))) : (min(536870880, (arr_3 [i_1] [i_1]))));
        var_19 = (max(var_19, var_14));
    }
    var_20 = var_2;
    var_21 = var_3;
    var_22 = (min(((max((((1 ? var_9 : var_12))), ((var_2 ? 1 : 536870880))))), (~var_4)));

    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = var_7;
        var_23 = (min(var_23, 25689));
        var_24 *= ((!((((arr_2 [i_2]) << ((((536870880 ? 4294967295 : var_1)) - 4294967273)))))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_25 = (max(var_25, (arr_8 [i_2])));
            arr_13 [i_2] = var_15;
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_26 = ((var_2 || ((max((max(49610782264379014, 11062816367017663925)), (((18051 != (arr_7 [2])))))))));
        arr_17 [i_4] = ((~(((((arr_12 [i_4] [i_4]) ? 55369 : 12837660619887873390)) * (((var_16 / (arr_0 [i_4]))))))));
        var_27 = (min(var_27, 7383927706691887690));
        var_28 = (arr_2 [i_4]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_29 = 7383927706691887691;
        arr_20 [i_5] = (((((-(arr_3 [i_5] [i_5])))) ? -10166 : ((-var_3 ? ((-(arr_4 [i_5] [i_5]))) : var_9))));
    }
    #pragma endscop
}
