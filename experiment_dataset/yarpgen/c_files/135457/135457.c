/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((4 ? ((((min(0, (arr_2 [8] [i_0])))) ? ((var_3 ? (arr_0 [i_0]) : var_1)) : ((((-3585 + 2147483647) >> 0))))) : (((-84 >= var_11) & -18446744073709551615))));
        arr_4 [4] &= ((var_6 ? (0 > 18446744073709551608) : ((var_1 ? ((((arr_0 [2]) || 14))) : -22522))));
        var_14 = var_7;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = 1023;

            /* vectorizable */
            for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
            {
                arr_12 [i_3] = (~var_1);
                var_15 = (min(var_15, (arr_10 [i_1] [i_1 - 1] [i_1])));
                var_16 -= var_10;
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
            {
                var_17 = (((((1 ? (-32767 - 1) : 5))) ^ 0));
                var_18 -= (60 / 122420746);
                var_19 = (min(var_19, ((((((~3) ? (!4294967295) : -69923485)) ^ (arr_0 [6]))))));
            }
        }
        var_20 = (max(var_20, ((min(1, (((((var_9 ? (arr_10 [i_1] [i_1] [i_1]) : 0))) / (min(242, (arr_15 [i_1 + 1] [i_1 - 1] [i_1]))))))))));

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_21 = ((-(!var_8)));
            var_22 = var_6;
            arr_19 [i_1 + 1] [i_1 + 1] [i_5] = ((((min((888135821 / var_9), (arr_7 [i_5])))) ? (14939460687241456859 * -51252) : ((min(8, 1585219999163595884)))));
        }
    }
    #pragma endscop
}
