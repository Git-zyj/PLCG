/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_7, var_17))) ? var_4 : (min(((min(814589069, 111))), -var_0))));
    var_19 = var_8;
    var_20 = (max(var_20, (!var_9)));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (min(((var_0 ? 1850385621367437149 : (2902 || 28))), (((!(((arr_2 [i_0 - 1]) && var_9)))))));
        var_21 = (max(var_21, var_0));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_22 = (~-1850385621367437150);
                            arr_16 [i_1] [i_2] [i_3] [i_1] [i_5] = var_9;
                            var_23 = (max(var_23, (((((var_16 ? var_5 : (arr_10 [i_1 + 1] [i_1 + 1]))))))));
                            var_24 = (((((~(var_7 | var_15)))) ? (arr_4 [i_4] [i_4]) : ((var_11 ? (min(1850385621367437136, (arr_13 [i_1] [i_2] [i_1]))) : 268434944))));
                            arr_17 [16] [i_1] [i_2] [21] [5] [i_5] = ((((((arr_14 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 2]) + (arr_14 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1])))) ? (arr_14 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 1]) : ((max((arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]), (arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2]))))));
                        }
                    }
                }
                var_25 = ((~((var_3 | (((arr_9 [i_1] [i_3] [i_3]) ? var_10 : (arr_13 [i_1] [i_1] [i_3])))))));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_26 = (max((((((arr_4 [i_6] [9]) ? (arr_22 [i_1 + 1] [1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_18 [i_1 - 2] [i_2] [i_1 - 2] [i_7]))))), -var_14));
                            var_27 = (min(var_10, (((((min(var_1, var_3))) ? (arr_9 [i_1 + 1] [i_1] [i_2 + 1]) : (~-1850385621367437150))))));
                        }
                    }
                }
                var_28 = ((~(max(-1850385621367437150, 30514))));
                var_29 = ((-((-(((arr_19 [12] [12] [12]) ? var_13 : (arr_9 [i_1] [i_1] [i_1])))))));
            }
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                var_30 = (((((((max(var_14, 1327372373))) * (min((arr_12 [i_1] [i_9] [i_2 - 1] [i_2 - 1] [i_2] [i_1]), var_0))))) ? ((54070 ? ((var_3 ? (arr_5 [i_1]) : (arr_9 [i_1 - 1] [i_1] [i_1 - 1]))) : (arr_26 [i_1 - 1]))) : (arr_6 [i_1])));
                var_31 = (11465 ? (arr_22 [i_1 + 2] [i_9] [i_9 + 1] [6] [i_9 + 1]) : 86717994);
            }
            arr_27 [12] [1] &= ((!((!(arr_15 [i_1 - 1] [i_2 - 3] [i_1 - 1])))));
            arr_28 [i_1] = (max(((0 ? 1850385621367437150 : -1850385621367437151)), (arr_15 [i_1] [6] [i_1])));
            var_32 = 65535;
            arr_29 [i_1] = (((((arr_25 [i_1] [i_1] [i_1] [i_1]) ? (!var_0) : 12969))) ? ((var_17 ? var_12 : ((max(52567, 128))))) : var_16);
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_33 ^= var_0;
                    var_34 -= ((var_11 ? (arr_15 [18] [i_1 + 2] [i_1 - 1]) : ((var_0 ? (arr_15 [i_1] [i_1 - 1] [i_1 - 2]) : var_1))));
                    var_35 &= ((min(var_1, (arr_6 [i_10]))));

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_36 = (~var_0);
                        var_37 &= 12969;
                        arr_40 [7] [i_1] [i_1] = var_3;
                        var_38 = (max(var_38, (arr_8 [i_1 - 1])));
                    }
                }
            }
        }
    }
    var_39 = (min((min(((-26 ? var_14 : var_15)), var_1)), var_13));
    #pragma endscop
}
