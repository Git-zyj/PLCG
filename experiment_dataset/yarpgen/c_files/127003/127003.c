/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 -= 7;
                    var_15 = -4631273788938190021;

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_16 = -1;
                        arr_10 [i_0] [3] [i_2 + 1] [i_3] [i_3 - 1] [i_3] = ((1073741823 * ((((max((arr_9 [i_0] [i_1] [i_1] [i_1] [i_1]), (arr_2 [i_3] [i_3] [1])))) ? (-2147483647 - 1) : (var_6 % 3202985577)))));
                        arr_11 [i_0] [i_2] [i_1] [i_0] = (((arr_3 [i_0] [i_0]) ? (((1868088065 - 2083985692) + ((var_2 ? (-32767 - 1) : var_4)))) : (((!var_5) << (3202985577 - 3202985547)))));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = (((((-(arr_9 [i_0] [3] [0] [10] [9])))) ? ((min((max(var_2, 3202985577)), var_2))) : 9223372036854775807));
                        var_18 = var_3;

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_4] [i_5] = (arr_7 [i_0 - 1] [i_0 + 1]);
                            var_19 = ((max(32767, (~4294967295))));
                            var_20 = (min(var_20, (arr_3 [i_2] [i_4])));
                            var_21 = (32767 != -var_5);
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = ((((((((7 ? (arr_1 [i_0]) : 1868088065))) ? var_0 : (var_9 ^ 3202985577)))) && (arr_15 [7] [1] [i_6] [6] [6] [9] [6])));
                        var_23 = ((20414 << (1073741823 - 1073741823)));
                    }
                    arr_22 [i_0 - 1] [i_0] [i_0 + 1] = var_2;
                }
            }
        }
    }
    var_24 = ((1 * (0 - var_6)));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_25 = ((+(min((arr_29 [i_9 - 1] [i_8 + 1] [i_7]), 2147483647))));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_26 = 127;
                            arr_37 [i_7] [i_8] [i_9 - 1] [i_9 - 1] [i_11] = -1;
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            var_27 = (((arr_39 [i_12] [i_9 - 1] [i_9 - 1] [i_8 - 1] [i_8] [i_8 + 2]) | (arr_39 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_8 + 2] [i_7] [i_7])));
                            var_28 = (-255 ? ((~((16777215 ? 2278 : 65535)))) : (arr_33 [i_9 - 1]));
                            var_29 += (min((((0 ? 0 : (arr_34 [i_7] [19] [i_9] [i_10] [17])))), -96));
                        }
                    }
                    var_30 = (max(((26 ? var_0 : var_5)), 134217727));
                }
            }
        }
    }
    var_31 = ((((((-9223372036854775807 - 1) || (-127 - 1)))) <= (-var_8 + var_6)));
    #pragma endscop
}
