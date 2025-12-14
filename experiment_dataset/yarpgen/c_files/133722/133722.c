/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = (min(var_13, (((-(min(((max(836200463, 4294967286))), var_7)))))));
        var_14 = (min(var_14, (var_2 - var_1)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 &= (min((max(var_4, var_2)), ((max((min(var_4, var_11)), (var_7 && var_10))))));
            var_16 = (max(var_16, ((min(((max(var_2, var_7))), -1343254862384987042)))));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_17 |= var_7;
                var_18 = ((max((max(1, 3458766833)), var_5)));
            }
            var_19 ^= (max((!var_1), ((((max(var_10, var_11))) / var_3))));
        }
        var_20 ^= ((max((var_1 >> var_8), var_12)) * (min(var_4, (max(var_12, var_2)))));
        arr_15 [i_1] = ((min(var_0, var_10)));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_21 += ((-(max(var_7, ((max(var_4, var_5)))))));
        var_22 *= (max(-326908581, 1));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_23 = (max((((max(var_0, var_12)))), (max(-var_5, (max(14380, 549621596160))))));
            var_24 = ((max(var_6, (min(var_6, var_11)))));
            arr_20 [11] [i_6] = 524287;
            var_25 = (min((var_9 || var_8), (max(10, 87596353033043720))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {

                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    var_26 &= (var_8 & var_4);
                    var_27 = (min(var_27, ((max((var_3 - var_2), (((var_12 || ((max(var_4, 1948171148)))))))))));
                    arr_27 [i_5] = var_11;
                }
                arr_28 [i_5] [i_5] [i_5] [i_5] = (min((!var_8), var_11));

                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    var_28 = (min(var_2, var_6));
                    var_29 = (min(var_29, (((((max(var_4, (var_11 | var_9)))) < (min(7016589651966894914, -7353134)))))));
                    arr_32 [7] [i_10] = (max(var_6, var_4));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_30 = ((min(var_3, var_4)));
                    var_31 ^= (~(min((max(181, 2)), (min(var_9, var_7)))));
                }
                for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_32 = var_10;
                    arr_38 [i_12] [i_5] [i_5] = (max(var_2, var_12));
                    var_33 = (min(var_33, ((((min(var_9, var_10)) - (max(32767, 2236762598)))))));
                }
                for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
                {
                    var_34 += (min(1965063924, 0));
                    arr_42 [i_5] [i_7] [i_8] [i_7] |= var_12;
                    var_35 ^= var_10;
                    arr_43 [i_13] [i_13] = (max((min(-3135488933, 8503973351268368014)), ((max((var_5 || var_5), (var_9 <= var_10))))));
                }
            }
            arr_44 [i_5] [i_7] = (-32744 + var_5);
            var_36 += (~3155484793);
            var_37 = -943465255025658519;
        }
        var_38 |= (((var_7 << (var_2 - 998262859))));
        arr_45 [i_5] = (((-((max(var_6, var_6))))));
    }
    var_39 = (min(var_39, var_4));
    var_40 = (min(var_40, var_12));
    #pragma endscop
}
