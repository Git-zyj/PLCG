/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_0] [i_0] &= ((((~(109 ^ 2590155498))) | (min(((var_6 ? -125 : (arr_1 [i_0]))), (var_13 | var_2)))));
                var_16 -= ((~(((((var_9 ? 8835074753517381883 : (arr_2 [i_0] [i_0 + 2])))) ? ((var_10 ? var_1 : 2147483647)) : var_15))));
                var_17 -= max((~var_14), 0);
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_18 = var_8;
                            var_19 = var_3;
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_20 [i_7] [i_3] [i_5] [i_4 - 2] [i_5] [i_2] [13] = -107;
                            var_20 ^= ((-(arr_8 [i_3] [i_4] [i_5])));
                            arr_21 [i_2] [i_3] [i_2] [i_5 + 2] [i_5] = ((var_8 ? ((37856372 ? -28066 : 201)) : (((!(((11133 ? (arr_6 [i_2]) : var_7))))))));
                        }
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            arr_24 [i_2] [i_3] [i_4] [18] [i_8 - 1] [i_5] = var_9;
                            var_21 = (min(var_21, (min(((var_11 & (arr_3 [i_2] [i_3]))), ((((((var_5 ? 2051298962 : (arr_7 [9] [i_2])))) ? ((var_3 ? var_0 : var_13)) : (min(var_11, -2147483647)))))))));
                        }
                        arr_25 [i_2] [i_5] [i_5] [11] = var_9;
                        var_22 ^= (arr_2 [i_3] [10]);
                        var_23 = (min(var_23, ((max((max(var_4, ((((arr_16 [i_5] [i_4] [8] [18] [0] [i_2] [18]) * var_0))))), (var_9 < 18446744073709551614))))));
                    }
                    var_24 -= ((var_4 * (-2147483647 * var_12)));
                    var_25 = -34;
                }
            }
        }
        arr_26 [i_2] [i_2] = (min(18446744073709551611, ((((min(3486505640, 808461664)) & 0)))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_26 = ((var_0 ? (((((3500361774 ? 2956104078 : 1)) < (arr_7 [i_9] [i_9])))) : var_6));
        var_27 -= ((62563 ? -107 : 8835074753517381886));
    }
    var_28 = 0;
    #pragma endscop
}
