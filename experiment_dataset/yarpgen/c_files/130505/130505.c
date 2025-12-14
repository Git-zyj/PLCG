/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((var_7 ? var_1 : (~var_7))), var_1));
        arr_4 [i_0] [i_0] = (~(65531 < -7964478388937239224));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_18 = (min((~62), var_15));
            arr_10 [i_1] [i_1] = var_14;
            arr_11 [i_1 - 1] [i_2] [i_1] = ((((~(arr_6 [i_1 - 2]))) <= ((min(var_13, var_1)))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 = (i_1 % 2 == zero) ? ((((((-(arr_13 [i_2] [i_1] [8]))) + 2147483647)) << ((((-((var_2 ? (arr_9 [i_1]) : var_7)))) - 76)))) : ((((((((-(arr_13 [i_2] [i_1] [8]))) - 2147483647)) + 2147483647)) << ((((((((-((var_2 ? (arr_9 [i_1]) : var_7)))) - 76)) + 222)) - 22))));
                var_20 = (min(var_20, var_15));
            }
            var_21 = (min(var_21, ((((((~(~17366613571529061114)))) ? (max((arr_14 [i_1 - 3]), var_16)) : ((((((var_12 ? var_0 : var_9))) ? (11888 >> var_5) : (arr_0 [i_1 + 1])))))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_20 [i_4] [i_4] [i_1 - 3] |= ((-((max(var_4, (min(0, 1)))))));
            var_22 = var_4;
            var_23 = (~198);
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_24 = (min(var_24, ((max(var_11, ((~(arr_17 [i_1 - 1] [i_1] [i_1 - 1]))))))));
            var_25 = (max(var_25, var_0));
            var_26 = (max(var_26, ((+(((arr_5 [6] [i_1 - 1]) ? var_13 : (arr_5 [0] [i_1 - 1])))))));
            arr_23 [i_1] [i_1] [i_5 - 1] = ((-((var_1 ? var_11 : (arr_21 [i_1 + 1] [8] [i_5 - 1])))));
            var_27 = (min(var_27, ((((~(arr_21 [i_1] [i_1 - 2] [i_5 + 1])))))));
        }
        arr_24 [i_1] = ((((-(max(var_13, var_14)))) < var_12));
    }
    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] = (((((~2696715705) ? (arr_6 [i_6]) : (var_17 ^ 11861))) < ((((((min((arr_15 [i_6] [i_6] [i_6]), var_16))) >= (min((arr_16 [4] [2] [2]), var_13))))))));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_28 = 26259;
            var_29 = -1;
        }
        arr_32 [i_6] = var_7;
        arr_33 [i_6 - 3] = var_12;
    }
    var_30 = var_3;
    var_31 = (max(var_31, var_8));
    var_32 = (max(var_32, (-1734206064 <= 1)));
    #pragma endscop
}
