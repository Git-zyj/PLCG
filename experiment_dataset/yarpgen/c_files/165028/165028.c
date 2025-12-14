/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(45347, (((((var_10 ? var_4 : var_3))) + ((var_10 ? var_2 : 1))))));
    var_15 = var_2;
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 -= (min(((max(var_7, var_11))), ((max(var_9, 0)))));

                    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_18 = (25007 ^ 44);
                        var_19 = (min(var_19, (((((var_1 ? (min(var_13, (arr_6 [i_1] [i_1]))) : var_1)) % -34)))));
                        var_20 = (((((((((arr_2 [i_2] [3]) ? -1 : (arr_8 [i_3] [i_2] [i_0])))) + (arr_6 [i_0] [i_1 - 1])))) ? -28 : (min(825777809, (arr_1 [i_0] [i_1 - 1])))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] = ((((arr_6 [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_1 + 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1]))));
                        var_21 = (max(((((min((arr_1 [10] [i_1]), 3469189487))) ? (((min((arr_0 [i_0]), var_9)))) : (min(3469189487, 127)))), ((((0 || var_0) >> ((((min(-127, var_12))) + 12201)))))));
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_2] [i_0] = (min((((var_2 ? var_9 : (arr_13 [i_0] [9] [i_2] [i_4] [i_0] [i_4 - 2])))), var_0));
                        var_22 += var_7;
                        var_23 -= ((5590657347782745745 ? var_2 : ((var_2 ? var_13 : 18446744073709551613))));
                    }
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        var_24 = 2;
                        var_25 *= (((((var_7 ? var_7 : var_0))) && var_12));
                        var_26 = (min(0, 4294967286));
                        arr_19 [i_0] [i_1] [14] [i_5] [i_0] = 83;
                        var_27 = (min(var_27, (((((((min(5149475117116678354, var_9))))) == var_11)))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_28 = (((min(22872, (arr_12 [i_1 - 2] [i_1 + 1]))) % (1 % 1310035681)));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_29 = (max(((((min(var_2, (arr_16 [0] [i_1] [20] [i_1] [i_1])))) ? (88 && var_1) : var_4)), ((min(var_7, 19)))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [17] |= (min((65525 - var_9), ((0 ? ((var_9 ? (arr_4 [i_6] [i_7]) : 97)) : (34 - 71)))));
                            var_30 = (min(0, -107));
                            var_31 = (((((arr_17 [i_0] [i_2] [i_6] [i_7]) ? (arr_24 [2] [2]) : var_0)) >> (16236508605056217744 - 16236508605056217717)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
