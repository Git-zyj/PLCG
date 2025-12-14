/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_13;
    var_15 = 23;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [12] &= ((-(min(var_10, 0))));
        var_16 = var_12;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_1] &= 9570980561411613452;
            var_17 = var_6;
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_18 -= (((arr_0 [i_0] [i_0]) >= (((arr_2 [i_2]) % var_10))));
            var_19 -= ((((min((max(233, (arr_1 [i_2]))), ((max((arr_5 [i_0] [i_0] [i_0]), (arr_2 [i_2]))))))) - 829185426));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_20 = (max(var_20, var_2));
                arr_16 [4] [i_0] [i_4] [i_3] = (((arr_7 [i_3]) || (arr_6 [i_0])));

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_3] = (max((-100 < 47382), var_4));
                    arr_22 [i_0] [i_0] = ((max((((var_2 & (arr_5 [i_0] [i_3] [i_3])))), (arr_6 [i_0]))));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [i_0] [i_6] [i_4] = var_0;
                    var_21 &= ((1 | ((((arr_6 [i_6]) != (arr_15 [i_6] [i_0]))))));
                }
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    arr_29 [i_0] = (((((-((min(var_9, (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (min(var_7, (arr_17 [i_7] [i_0] [i_4] [i_3] [i_0]))) : 233));
                    var_22 = (min(var_22, ((max((arr_18 [20] [16] [10] [i_7 - 2] [12] [i_7 - 3]), (min(829185426, 3594859627144589477)))))));
                    arr_30 [8] [0] [i_4] [0] &= 0;
                    var_23 = (min(0, (((min(var_10, (arr_27 [i_4] [i_4] [i_0] [i_7] [i_0] [0])))))));
                    var_24 = var_9;
                }
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_25 &= (-(((((15284 ? 0 : -511948908))) ? ((max((arr_15 [i_3] [i_8]), var_2))) : ((-511948908 ? 0 : 28114)))));
                arr_33 [i_0] [i_0] [i_0] = (((0 / 233) || (((arr_19 [i_0] [i_0]) && (arr_19 [i_0] [i_8])))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_36 [i_0] [i_0] [i_9] = (((min(var_10, 23409))));
                var_26 = var_4;
            }
            var_27 = (var_9 + var_8);
        }
    }
    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        arr_39 [i_10] = ((max((arr_9 [i_10 + 1] [i_10 + 2]), 231)));
        var_28 += (23427 * 1607553952655527818);
        var_29 = (max(var_29, (((!(((108 ? var_12 : var_5))))))));
        var_30 += (1870076947 / var_9);

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_42 [i_10] [i_11] = (((arr_35 [i_10] [i_10] [6]) ? (((arr_20 [i_10] [i_11] [i_10] [i_10] [i_10 + 1] [i_10 - 2]) ? (arr_20 [i_11] [i_11] [i_10] [10] [10] [i_10 - 2]) : (arr_20 [i_10] [i_11] [i_11] [i_11] [i_10] [i_10 + 3]))) : 67));
            var_31 = 90;
        }
    }
    #pragma endscop
}
