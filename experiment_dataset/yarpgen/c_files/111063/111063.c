/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_9;
    var_19 = var_12;
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = (min(2722704082403766637, var_11));
                        arr_10 [i_0] [i_0] [i_3] = (max((max((arr_4 [i_0] [i_2]), -6358754470858932641)), (max(var_4, var_6))));
                    }
                }
            }
        }
        var_22 = (max(((((max((arr_8 [i_0] [i_0] [i_0] [i_0]), var_14))) ? var_4 : ((var_4 ? 4294967293 : var_5)))), ((((arr_9 [i_0] [i_0] [i_0] [6]) / 79)))));
        var_23 = 1;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_24 = ((((((var_2 ? var_15 : var_17))) ? (arr_1 [i_4] [i_5]) : (arr_0 [i_5] [i_5]))));
                            var_25 = (max((arr_13 [i_5]), (max((arr_24 [i_4] [i_5] [i_4] [i_7] [i_4] [i_5]), (arr_1 [i_6] [i_6])))));
                            var_26 = max((((!(arr_9 [i_4] [i_4] [i_4] [i_4])))), var_0);
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_27 = var_13;
                            var_28 = (((min(0, 0)) < var_4));
                            arr_27 [i_4] [i_5] [i_5] [i_7] [i_9] = ((((((arr_7 [i_4] [i_5] [i_5] [i_5]) + (var_10 + var_12)))) ? ((((((arr_17 [i_4] [i_4] [i_4]) ? var_11 : (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (1 - var_5)));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_30 [i_10] [i_5] [i_4] [i_5] [i_4] = (((~-17213192) ? (((((min(97, 20847))) ? ((var_6 ? 65530 : var_6)) : ((-1399901916 ? (arr_25 [i_5] [i_7] [2] [i_5] [i_5]) : (arr_8 [i_4] [i_5] [i_6] [6])))))) : (((arr_23 [i_10] [3] [3] [i_5] [3]) ? (((var_0 ? var_9 : var_6))) : (4049085449 ^ var_5)))));
                            var_29 *= ((((((((arr_1 [i_4] [i_5]) <= var_6))))) == ((6358754470858932625 ? (arr_1 [i_10] [i_5]) : var_13))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_30 = var_1;
                            var_31 *= (max(((!(((0 ? var_17 : var_16))))), var_8));
                        }

                        for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_32 = (min(var_32, (((max(1, 6358754470858932641))))));
                            var_33 = (max(var_11, (((var_6 != (((arr_22 [12] [i_5] [i_6] [i_7] [i_5]) ? var_5 : (arr_9 [i_12 - 1] [i_7] [i_6] [i_5]))))))));
                            var_34 *= (var_5 == 245881847);
                            arr_35 [i_5] [i_5] [i_6] [i_5] = (min(((var_12 ? var_10 : (~var_12))), ((max((arr_26 [1] [i_7] [i_6] [i_5] [1] [i_4]), (var_0 - var_15))))));
                            var_35 = ((-(max(1, 9231))));
                        }
                        for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_36 = ((0 ? -20 : -9231));
                            var_37 = ((+((-(((arr_11 [i_4]) ? var_7 : (arr_36 [i_4] [i_5] [i_6] [i_4] [i_13])))))));
                            var_38 *= ((((!(arr_8 [i_13 + 1] [i_5] [i_13 + 1] [i_13 + 1]))) || ((17213209 || (arr_18 [i_13 - 1] [i_13 + 2] [i_13 - 1])))));
                        }
                        var_39 *= var_0;
                    }
                }
            }
        }
        var_40 = -1399901915;
    }
    #pragma endscop
}
