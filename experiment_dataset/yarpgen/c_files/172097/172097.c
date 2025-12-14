/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 -= var_0;
                var_11 = 1;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] [14] [14] [i_0] = ((0 % (0 < 17599)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = ((((((((~(arr_10 [i_4] [i_3] [i_2] [i_3] [2])))) | -5372792592566784))) ? (17611 / var_8) : 193));
                                var_13 = (((((-((var_8 ? 1 : 0))))) ? ((((arr_4 [i_3 + 1] [i_3 - 1]) ? (arr_4 [i_3 + 1] [i_3 - 1]) : 17610))) : ((var_2 ? var_9 : ((3067216881 ? var_6 : var_8))))));
                                arr_12 [1] [i_3] [3] = (((!-93) ? ((96 ? -17612 : 9)) : (67 << 0)));
                            }
                        }
                    }
                    var_14 = 4294967295;
                    var_15 -= (((~var_5) + var_9));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_16 = (((1995 ? var_7 : (~1591018176))));
                    var_17 = var_9;
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_18 = (max(var_18, ((((((-119 ? (((arr_2 [1]) ? var_8 : var_2)) : 91))) ? var_0 : var_6)))));
                    var_19 &= ((((((((-2585966588610192355 ? -2147483647 : (arr_1 [i_0]))) + 9223372036854775807)) >> (var_7 - 3411108576)))) ? (var_4 ^ 17599) : var_3);
                    var_20 = ((var_0 ? (((arr_15 [i_6] [i_1] [i_0]) ? var_7 : (arr_15 [i_6] [i_1] [i_0]))) : (((~(arr_15 [i_0] [i_1] [i_6]))))));
                    arr_17 [i_0] [i_0] [i_0] [12] = ((((-(arr_7 [i_0] [i_0] [i_1] [i_1] [i_6]))) - (~var_9)));
                }
                arr_18 [19] [i_1] [i_1] = (((((1762706991 ? 22 : 0))) ? (((~var_2) ? (((arr_11 [i_1] [8] [8] [i_0] [i_1]) ? var_9 : var_6)) : (((var_2 ? 0 : var_2))))) : ((2147483647 ? 2875934731 : -3761101231713149311))));
            }
        }
    }
    var_21 = (((-(min(555567551, var_3)))));
    #pragma endscop
}
