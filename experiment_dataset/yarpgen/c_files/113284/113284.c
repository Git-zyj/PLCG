/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 *= (((arr_0 [i_2]) ? (!var_2) : ((25850 ? 0 : 0))));
                var_16 -= -var_5;
                var_17 += var_3;
                var_18 = var_11;
                var_19 = (min(var_19, (((!(((2476757131 ? (arr_0 [i_2]) : var_3))))))));
            }
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    arr_14 [i_4] [i_4] [i_1] [i_3 + 2] [i_3 + 2] [i_4] = 1;

                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [2] [1] [i_4] [1] [1] = ((-(!var_5)));
                        var_20 = ((-(arr_10 [i_4] [i_4 - 1] [i_4] [i_4 - 1])));
                        var_21 = ((14411 / (arr_10 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 3])));
                        arr_18 [i_0] [i_1] [i_4] [i_4] [i_5] [i_5] = ((!(((~(arr_0 [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_22 = ((~(arr_6 [i_3 - 3] [i_4 - 1] [i_4])));
                        var_23 = (arr_12 [i_4]);
                        var_24 = (max(var_24, (((!(((var_2 ? 8740416069290294936 : 1980484143))))))));
                    }
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_25 -= ((!(~154826616)));
                    var_26 = (min(var_26, ((((((~(arr_22 [i_0] [i_0] [i_1] [i_3] [i_7] [i_3])))) ? 1 : (~1003128945294923919))))));

                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        var_27 = 14411;
                        arr_27 [i_8] [i_8] [i_3] [i_8] [i_3] = ((~(((arr_23 [i_8]) ? 890717958 : 0))));
                    }
                }
                var_28 *= ((((((-1884 + 2147483647) << (var_4 - 96409272)))) ? (!2476757131) : (arr_19 [i_3 + 2] [i_0] [i_0] [i_0])));
                var_29 = (min(var_29, (~1601684092)));
            }
            var_30 = (((arr_10 [i_0] [i_0] [i_1] [i_1]) / var_9));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_31 += (((max((min(9, var_3)), (!1)))) ? (((!((min(var_7, 749509870)))))) : -65518);
            var_32 = ((-((((var_2 ? 2974604901235981344 : 1879048192)) & (((2476757131 ? var_11 : 17)))))));
        }
        var_33 = (min(var_33, ((var_5 ? ((((arr_0 [i_0]) / (arr_0 [i_0])))) : (arr_20 [i_0] [i_0] [7] [i_0] [i_0])))));
        var_34 &= ((~var_9) < (min(((1 ? -177435232 : 1003128945294923931)), (!var_5))));
    }
    var_35 = (~var_11);
    var_36 = (min(((var_4 ? (((var_3 ? var_13 : var_5))) : var_2)), ((min(((14559440326947845420 ? 14411 : var_4)), (~var_8))))));
    #pragma endscop
}
