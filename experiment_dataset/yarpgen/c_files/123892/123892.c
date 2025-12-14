/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, (((-((var_7 * (arr_0 [i_0]))))))));
        var_18 = (max(var_18, ((((var_7 ? var_14 : 63))))));
        var_19 &= var_1;
        arr_2 [i_0] [i_0] = -var_15;
        var_20 = var_12;
    }
    var_21 ^= ((((max(var_10, var_10))) ^ ((((((var_1 ? var_6 : var_16))) ? var_3 : var_2)))));
    var_22 = (max(var_22, var_10));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 = ((((((0 ? 1 : 33554431)) > (0 < 0))) ? ((min(((4497150137406873796 ? -178593625 : 6650222825830880276)), 4497150137406873819))) : 4723917641454821711));
        arr_7 [i_1] [i_1] = ((var_4 ^ (((max((max((arr_6 [i_1] [10]), (arr_3 [i_1]))), -23))))));
        var_24 = (((arr_4 [i_1]) * 0));
        arr_8 [i_1] [i_1] = (max(var_2, ((var_0 && ((min(var_15, var_5)))))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] [20] = ((((max(var_1, ((((arr_4 [i_2]) ? var_16 : var_7)))))) && ((max((min(var_0, var_14)), 327134960)))));
        arr_13 [i_2] = ((var_13 ? (((arr_5 [i_2 + 4] [i_2 + 1]) ? (arr_6 [i_2 + 4] [i_2]) : (arr_6 [i_2 + 4] [i_2]))) : (((var_4 < (arr_11 [i_2 - 2] [i_2]))))));
        var_25 = (min(var_25, (arr_4 [7])));
        var_26 = (max(var_26, (((min((arr_4 [17]), 587862198))))));
        var_27 = ((-(-127 - 1)));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = var_9;

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_28 = (min(var_28, var_2));
                arr_22 [i_3] |= ((arr_3 [i_3 - 1]) ? var_8 : -587862193);
                var_29 = (arr_9 [i_3]);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_30 = (arr_3 [7]);
                var_31 = (arr_3 [i_3 + 2]);
            }
        }
        for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_32 -= ((((min(var_10, (arr_3 [i_3 + 2])))) ? (((arr_3 [i_3 - 2]) ? 113 : (arr_3 [i_3 - 2]))) : (arr_3 [i_3 + 1])));
            var_33 = ((+((((var_5 || 65535) != (15860213742562056283 / var_3))))));
            var_34 *= ((var_7 ? (max((max(var_6, (arr_11 [i_3] [i_3]))), (min(var_8, 59)))) : var_14));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_31 [i_8] = (var_11 == 4294967285);
            arr_32 [5] [i_8] [4] = max(((var_12 ? var_8 : (arr_29 [i_3 + 1]))), ((((arr_28 [i_3 + 2] [i_8]) < var_2))));
        }
        arr_33 [i_3 - 2] [i_3 - 2] = (((((var_13 ? (arr_15 [i_3 + 2] [i_3 - 1]) : (arr_29 [i_3 + 1])))) ? ((min(18, 15575))) : var_10));
    }
    #pragma endscop
}
