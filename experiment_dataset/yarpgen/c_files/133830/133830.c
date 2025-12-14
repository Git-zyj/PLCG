/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_11;
                    arr_8 [i_2] = max(((var_8 ? var_3 : 0)), var_2);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_1] [i_0] = (max((!var_1), (max(var_1, ((var_8 ? var_9 : 0))))));
                    var_12 = max((~288230101273804800), (var_8 != var_6));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_13 = (max(var_13, 37));
                    var_14 ^= (((max(62, var_7)) < var_2));
                }
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 6;i_6 += 1) /* same iter space */
                    {
                        var_15 = (min(var_15, ((var_2 % (max(((var_10 ? var_10 : var_6)), var_6))))));
                        arr_20 [i_0] [i_1] [i_6] [i_6] = ((!(((~var_8) || (!-1)))));
                    }
                    for (int i_7 = 3; i_7 < 6;i_7 += 1) /* same iter space */
                    {
                        arr_23 [0] = ((max(var_4, (max(var_5, 0)))));
                        arr_24 [i_0] [i_1] [i_5 - 3] [i_5 - 3] = (((30720 - 122) ? ((((min(var_1, 64))))) : 11320303652628790399));
                        var_16 = var_8;
                        arr_25 [i_0] [i_0] [8] [i_0] [i_0] = ((-(((((var_11 ? 6835812312108464530 : var_7))) ? ((var_11 ? var_1 : 54)) : var_2))));
                    }
                    arr_26 [i_0 - 2] [i_0] [i_0] [i_0] = ((((min(85, var_10))) ? ((-var_3 ? (max(var_10, var_8)) : -var_9)) : ((-((17592118935552 ? 9223372036854775808 : var_8))))));
                }
                arr_27 [i_0] [i_0] [i_0] = ((((max(((-15 ? 18446744073709551611 : 112)), (((var_0 ? var_9 : var_1)))))) ? var_10 : ((((((-22776 + 2147483647) >> (var_9 + 52)))) ? (~10570771560662606876) : (!-27276)))));
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
