/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (((28791 - (43588 + -2147483642))));
                                arr_13 [2] [i_3] [i_3] [i_2] [i_1] [i_0] = ((-((var_1 ? 57069 : ((-8893877998800515556 ? var_5 : var_1))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = (min(var_7, (((!(((0 ? 21966 : 2548154486))))))));
                        var_21 = ((-21937 ? 21951 : (((((-1 ? 1 : 1))) ? 9 : 18446744073709551612))));
                        var_22 = (((21964 ? 30993 : var_15)));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_23 = ((min((min(3, 24)), 113)));
                        var_24 = ((-32755 ? ((-360 ? 360 : 10967052308158194325)) : (!-194)));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_25 = (min(var_25, (((((((1 ? 104 : 54))) ? 25165 : (1 <= 121)))))));
                        var_26 = ((((1 ? (((min(-58, -108)))) : (~-8893877998800515552))) - ((((((-103 ? 21951 : -64))) ? 58 : (-25556 - 253))))));
                        var_27 = (--65);
                    }
                }
            }
        }
    }
    var_28 = ((var_3 ? ((35 ^ (min(2393388609, 62)))) : ((var_1 ? var_17 : (43585 % 975505764)))));
    var_29 = ((min(var_12, var_0)));
    var_30 = (min((((1 ^ 29398) ? 36133 : 349042419)), 27));
    #pragma endscop
}
