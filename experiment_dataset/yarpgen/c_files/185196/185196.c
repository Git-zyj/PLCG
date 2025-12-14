/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_14 = min((min(var_7, (arr_3 [i_1] [i_1 + 1] [i_1]))), ((max(78, (arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1])))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 = (min((min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 - 2] [i_1 - 2]))), ((min(-78, (arr_5 [i_1] [i_1] [i_1 - 1]))))));
                arr_8 [i_0] [i_1 - 1] [i_0] |= (min(((min((arr_7 [i_0] [i_0] [i_1 + 1]), (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (max(12304582971274302603, (arr_6 [i_1] [i_1 - 1] [i_0] [i_1 - 2])))));
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    var_16 = (min(var_16, (min((min(var_4, var_5)), ((max((arr_12 [i_4] [i_0] [i_0] [i_3]), (min((arr_11 [i_0] [i_0] [i_1]), (arr_10 [13] [i_0]))))))))));
                    arr_15 [i_4] = min((min(12304582971274302628, 247)), ((min((-9223372036854775807 - 1), -81))));
                    arr_16 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4] = (min(0, 251));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, ((min((max((arr_12 [i_1] [i_0] [i_0] [i_1]), 5629984617319976562)), (min((max(var_2, 2147483647)), (min((arr_14 [i_0] [i_1 - 2] [i_0] [i_5]), var_4)))))))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] |= min((max(((min(212, (arr_9 [i_0] [i_1] [16] [i_0])))), (max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_5]), var_8)))), (min((arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 1]), (max((arr_1 [i_3 + 1]), (arr_6 [i_0] [i_1 + 1] [i_5] [i_5]))))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] [15] [i_0] = (max((max(11030, (arr_7 [i_5] [i_3 + 1] [i_3 + 1]))), (max((arr_7 [i_0] [i_3 - 1] [i_3 + 1]), var_5))));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    arr_24 [1] [i_3] [i_6] = (max((min(var_8, (arr_11 [i_1 - 2] [i_3 + 1] [i_6]))), ((max((arr_23 [i_0]), var_9)))));
                    var_18 = (min(var_18, (min((max((arr_13 [i_6] [i_3 + 1] [i_3 + 1] [i_1 + 1] [i_1] [i_0]), (-9223372036854775807 - 1))), ((min((arr_3 [i_3 + 1] [i_1] [i_1]), 4)))))));
                    arr_25 [i_0] [i_1] [i_3] [i_6] = (min(((min((arr_0 [i_3 - 1]), (arr_0 [i_3 + 1])))), (min(11030, (max((arr_2 [i_0]), (arr_10 [1] [i_3 + 1])))))));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] = (min((max(var_9, var_4)), ((min(1439870451, var_7)))));
                    var_19 ^= (max(((min(var_3, var_3))), (max(1, -3365095788040238566))));
                    arr_30 [i_0] [i_0] = (max(((min((arr_4 [i_3 + 1] [i_1 + 1]), (arr_3 [i_7] [i_3 + 1] [i_1 + 1])))), (max(1, 12304582971274302628))));
                }
                arr_31 [i_0] [i_1] [i_0] = min((max(0, var_4)), ((min(((max(var_1, var_12))), (arr_1 [i_1 + 1])))));
                var_20 = (min((min((arr_17 [i_3 - 1] [i_3 + 1] [i_3] [i_1 - 1]), var_8)), ((min((arr_14 [i_1 + 1] [i_1 + 1] [i_3 - 1] [16]), var_5)))));
                arr_32 [i_3 - 1] [i_1] [i_0] = (max((min((arr_4 [i_0] [i_3 + 1]), 15)), (min(var_4, 233))));
                arr_33 [i_1 - 2] [i_3] &= (max((min(var_4, var_4)), ((max(var_0, (arr_22 [i_1 + 1] [i_1] [i_3 - 1] [i_1 + 1] [i_3] [i_3 - 1]))))));
            }
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                arr_36 [7] [2] [9] = (min((max(var_3, (arr_11 [i_8 + 4] [i_8 + 4] [i_1 - 1]))), ((max((arr_11 [i_8 + 3] [i_1] [i_1 - 1]), (arr_11 [i_8 - 2] [i_1 - 1] [i_1 - 2]))))));
                var_21 -= (max((max(1902354652, var_8)), ((min(var_3, var_11)))));
            }
        }
        var_22 += (min((max(var_7, var_6)), (min(1, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_23 = (max(var_23, (max((min((arr_27 [i_0]), var_0)), (min((arr_27 [i_0]), 1))))));
    }
    var_24 = var_9;
    var_25 = var_4;
    #pragma endscop
}
