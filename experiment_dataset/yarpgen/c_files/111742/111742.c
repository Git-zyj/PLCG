/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_7 ? ((min(32256, 106))) : var_5)) | (var_2 > var_8)));
    var_18 = ((~((var_10 ? (!var_7) : ((var_13 ? var_1 : var_2))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] = ((-((var_15 ? var_11 : var_6))));
            var_19 = ((((((-9223372036854775807 - 1) ? 11952639340437472835 : 1))) ? (max(var_8, var_6)) : (((var_6 ? var_10 : var_3)))));
            var_20 += ((~(((var_14 >= var_6) + ((var_2 ? var_5 : var_16))))));
            arr_6 [i_1] [i_1 - 1] = (max((var_13 + var_14), ((-((1 ? 1 : 1303213669))))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_21 = (min(var_21, (((((var_2 ? var_12 : var_9))) ? (var_6 - var_8) : ((min((var_4 / var_6), (var_1 / var_4))))))));
            var_22 = min((!var_5), (min(var_7, var_12)));
            var_23 = (((((!var_8) ? var_4 : ((var_11 ? var_6 : var_8)))) > ((var_3 ? var_8 : (!var_0)))));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_14 [i_0 - 1] [i_3 + 4] = (((((((max(55278, 10257))) ? 133 : 18403457672638747019))) ? ((var_5 ? (!1) : 10240)) : 0));
            var_24 -= var_6;
        }
        var_25 = (max(var_25, var_13));
        arr_15 [i_0 + 1] = min(((2097148 ? 2515709044 : 1)), (min(var_1, var_16)));
        arr_16 [i_0 + 1] [i_0 - 1] = (max((~var_4), (~var_13)));
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        var_26 = (((((5 ? 6 : 1))) ? ((21727 ? (-9223372036854775807 - 1) : -3167665936891933414)) : 78));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_27 = (min(var_27, (((var_12 ? ((var_10 ? var_7 : var_15)) : (var_3 + var_1))))));
            arr_23 [i_4] [i_5 + 1] = (!var_11);
            var_28 = (min((((((var_2 ? var_1 : var_10)) >= ((var_11 ? var_5 : var_14))))), ((var_12 ? (var_7 % var_7) : (!var_15)))));
            arr_24 [i_4] [i_5] = ((((min(var_6, var_16))) ? ((var_15 ? ((var_13 ? var_7 : var_3)) : (-29 * 1))) : (var_13 / var_2)));
        }

        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
            {
                var_29 ^= (min((max(var_2, ((var_11 ? var_4 : var_8)))), ((min(((var_16 ? var_3 : var_11)), -52672)))));
                var_30 = (((((~((var_15 ? var_7 : var_14))))) ? ((min(123, 904400236))) : (min((var_16 & var_13), (((var_2 ? var_6 : var_9)))))));
                var_31 = ((var_9 ? var_13 : ((((max(var_0, var_16)) <= var_4)))));
            }
            for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_32 = ((~var_11) ? ((var_7 ? var_12 : var_13)) : ((min(var_9, var_1))));
                var_33 = (min(var_16, (((((var_7 ? var_6 : var_3))) ? var_8 : var_9))));
            }
            var_34 = ((max((((var_11 ? var_4 : var_11)), var_7))));
        }
    }
    #pragma endscop
}
