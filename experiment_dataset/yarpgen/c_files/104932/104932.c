/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, (var_9 <= 1)));
        var_19 = ((-28869 ? (((-6259 > (min(28868, var_0))))) : (~28864)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = (min((~var_3), (~var_14)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [2] = ((!(var_9 | var_11)));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_21 = (((~((-28846 ? var_6 : var_4)))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [i_3] [i_4] [i_3] [i_3] [i_3] = (((min((min(var_10, 1560189024)), ((min(var_8, var_6))))) / (((max(41, var_6))))));
                        var_22 ^= (min((1 >= 5207826576596046269), (~153)));
                        var_23 = (min(-var_13, -28863));
                        var_24 = (min((min((min(580935029, var_10)), -1731186131)), (((!((max(-7161177523675080734, var_13))))))));
                    }
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        var_25 = (max(var_25, ((((((((max(45404, 0))) ? (var_9 & var_6) : (min(45404, var_4))))) ? (((var_2 | var_0) | var_10)) : ((max(-28867, ((var_11 ? var_1 : var_10))))))))));
                        var_26 = (min(var_26, ((min((max(8167, -5757228464786109314)), var_7)))));
                        var_27 = 45404;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_28 = (min(var_10, ((~(min(var_8, var_1))))));
                        var_29 = (max((min(((max(var_1, -25449))), 28864)), var_6));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_25 [1] [i_1] [i_1] [i_1] [i_1] = -var_15;
                        var_30 = (max(var_30, (~var_13)));
                        var_31 = (max(var_31, ((((((-1811904576 ? 1811904575 : var_9))) ? ((var_5 ? -2111404493 : var_15)) : (var_6 | -1226404863))))));
                    }
                    var_32 = (max(var_32, (min(28862, (var_13 << var_11)))));
                }
            }
            var_33 = min(((((max(var_1, 1))) ^ 209)), (((var_15 ? 28862 : -1238))));
        }
    }
    #pragma endscop
}
