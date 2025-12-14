/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (arr_1 [i_2 + 3]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_1] [i_0] [i_0] [i_0] |= var_7;
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] &= ((((min(15, ((((arr_6 [i_0] [i_1] [i_2]) == 1378074535)))))) == ((min(9, (arr_2 [i_0] [i_2 + 3] [i_2]))))));
                        arr_11 [i_3] [i_2] [i_2] [i_0] [i_0] = (((((-(arr_2 [i_0 - 3] [16] [i_0 + 2]))) + 2147483647)) << (((!(arr_2 [i_0 - 2] [i_1] [i_2])))));
                        arr_12 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = ((-(((!17) ? ((min(var_2, (arr_4 [8] [i_3])))) : -2047))));
                        arr_13 [i_0] [i_2] [i_2 + 3] [i_2] = 226;
                    }

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_2] = ((~((((((arr_8 [i_0] [i_2] [i_0] [i_0]) << (343845840 - 343845824)))) ? ((var_0 ? var_0 : (arr_2 [i_0] [8] [i_2]))) : (234 ^ 65535)))));
                        arr_18 [19] [9] [i_2] [i_2] [i_2] [i_4] = ((-((((-383826084 >= 22) && (32767 | 233))))));
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_14 &= -1186424118;
                        arr_22 [i_0] [i_2] [i_0] [6] = ((!((min((arr_19 [i_2 - 1] [i_5 + 1] [i_0 + 1]), 10727)))));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            var_15 = (max(var_15, ((64486 ? 65528 : var_1))));
                            arr_26 [4] [i_1] [i_2] [i_2] [i_5] [i_6 + 4] = ((-5718 ? 39651 : var_9));
                        }
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            arr_29 [i_2] [i_1] [i_0 - 4] [i_1] [i_0 - 4] [i_2] = ((~(24 - 8388607)));
                            var_16 = (max(var_16, -5106));
                        }
                        arr_30 [6] [i_2] [i_5 + 2] = 63;
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_17 -= ((!(!221)));
                        var_18 = ((~(((132 < (arr_31 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_2] [i_0 + 1]))))));
                        var_19 = (((!5217) - ((343845856 ? (arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 3]) : -1378074535))));
                    }
                }
            }
        }
    }
    var_20 = ((max((!39661), ((var_12 ? var_5 : var_8)))));
    var_21 = var_9;
    #pragma endscop
}
