/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+((var_6 ? (var_16 + var_5) : -var_17))));
    var_20 = (!var_6);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 ^= ((var_18 + ((var_15 ? (arr_1 [i_0]) : var_11))));
        var_22 += (((arr_1 [i_0]) ? ((80 ? var_16 : (arr_0 [i_0]))) : var_12));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (min(32767, var_12));
        var_24 = (max(((var_9 ? (~var_1) : (arr_0 [i_1]))), 219));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_25 ^= ((min(var_8, 6662)));
            var_26 = var_6;
            arr_7 [i_1] = ((~(((-var_12 != (((-2051611889 / (arr_2 [i_1] [i_1])))))))));
            var_27 -= var_4;

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                arr_11 [i_1] = ((((min(var_6, ((((arr_8 [i_1] [i_2] [i_1] [i_3]) > (arr_2 [i_1] [i_1]))))))) ? (max(242171102, ((var_15 ? var_12 : 32764)))) : (((+(((arr_3 [i_1]) ? (arr_8 [i_1] [i_2] [i_1] [i_3]) : var_9)))))));
                var_28 = (max(var_6, (var_9 - var_17)));
                var_29 = var_11;

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_30 = -6662;
                        arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] = (min((((-32767 - 1) ? ((var_7 ? 418601575 : 4614)) : 107)), ((((min((arr_16 [i_1] [1] [i_4] [5]), (arr_14 [7] [i_2] [i_2]))) != (((var_17 ? -32745 : var_10))))))));
                        arr_20 [i_1] [i_4] [i_2] [i_2] [i_1] = (((max(var_17, (max(var_12, var_3)))) + (((~(arr_8 [3] [5] [i_1] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_3 - 1] [i_4] [i_6] = (max(((var_10 ? var_3 : ((var_4 ? (arr_18 [i_1] [i_3 - 2] [i_1] [i_6]) : var_12)))), ((max(148, var_4)))));
                        var_31 = (((((arr_16 [i_1] [i_4] [i_1] [5]) ? (arr_4 [i_1] [i_2]) : var_14))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_32 = (((((arr_6 [i_2] [i_3 - 1] [i_1]) ? (arr_6 [9] [i_3 - 2] [i_1]) : (arr_6 [i_3] [i_3 - 2] [i_1])))) ? ((max((arr_6 [i_2] [i_3 - 2] [i_1]), (arr_6 [1] [i_3 - 1] [i_1])))) : (arr_6 [i_3] [i_3 - 2] [i_1]));
                        arr_27 [i_1] = ((var_2 ? (arr_9 [i_1] [i_4]) : (((var_0 ? var_11 : var_0)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_32 [1] [i_2] [i_3] [i_1] [i_8] = ((((1 ? 9 : 0)) | (28737 ^ 2351863733284141184)));
                        var_33 = (arr_26 [i_1]);
                    }
                    arr_33 [6] [i_2] [i_2] [i_2] [i_1] = var_4;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_34 += ((!(((41449 ? -10 : -32746)))));
                    arr_36 [i_1] [i_9] [i_9] = var_16;
                    arr_37 [i_9] [i_1] [i_1] [i_1] = min(((51340 ? ((max((arr_21 [i_1] [i_9]), -33))) : ((var_12 ? 32757 : -32750)))), ((max(44942, (arr_6 [4] [3] [i_1])))));
                    var_35 = var_8;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_36 = ((!((!(!var_0)))));
        var_37 *= (max((((37 & (arr_39 [16] [16])))), (!30)));
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    {
                        arr_53 [i_11] [i_14] = var_9;
                        arr_54 [i_11] [i_12] [i_11] [i_14] = (((((-2351863733284141184 ? 4625 : 4294967295))) ? ((max((arr_52 [i_14 + 1]), 4614))) : (var_9 == var_16)));
                    }
                }
            }
        }
        var_38 = (((((((~(arr_51 [i_11] [i_11] [i_11] [i_11])))) ? ((-30295 ? (arr_50 [i_11] [i_11] [9] [i_11]) : var_3)) : (~var_4))) & (((var_18 ? -var_0 : ((((arr_48 [i_11] [10]) > (arr_38 [i_11] [i_11])))))))));
        var_39 &= (arr_46 [i_11] [i_11] [i_11]);
        var_40 *= (((min(var_12, (((32761 ? (arr_48 [i_11] [i_11]) : 4614))))) <= ((min(((var_1 ? var_13 : (arr_40 [i_11]))), 34)))));
    }
    var_41 = var_13;
    #pragma endscop
}
