/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((((min(-12, -34))) ? (min((arr_4 [i_1] [i_0 + 1]), (arr_0 [i_0 + 1]))) : (((-(arr_4 [i_1] [i_0 + 1]))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 *= var_9;
                    var_16 = ((((((-12 <= 1) || (var_10 / var_0)))) * (((!(arr_2 [i_0 + 1]))))));
                }
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_1 + 1] = (((arr_3 [i_0] [i_0] [7]) <= (((((0 ? var_3 : 78671269))) ? (~-17) : -12))));
                    var_17 *= (min(((1 ? (127 + 1) : (!2147483647))), ((40 ? 2147483647 : 35))));
                    var_18 = (((((var_2 ? 254 : 1070011272))) ? (((((((arr_4 [i_1] [i_1 + 1]) <= (arr_5 [i_0] [i_0])))) != ((max(0, 0)))))) : ((var_0 ? ((var_6 ? (arr_9 [i_1] [i_1 - 3] [i_1]) : -87)) : 695297554))));
                }
                var_19 = (max(var_19, ((((min((arr_5 [i_1 - 3] [i_1 - 1]), var_9)) / (((((min(1, (arr_1 [i_0])))) ^ (var_1 && var_9)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            {
                var_20 *= ((var_7 <= (min(1880752060, (arr_6 [i_4] [i_4] [i_4])))));
                arr_20 [i_5] [2] [i_5 + 1] = (((((min((!var_8), (var_11 && var_12))))) == (min((((arr_7 [i_4] [i_4] [i_4] [i_4]) ? -87 : var_2)), 1073741824))));
            }
        }
    }
    var_21 = var_2;
    var_22 = ((((max(((-2147483620 ? 109 : 1)), ((var_1 ? 9 : var_8))))) ? ((((min(var_6, var_1))) ? (((var_4 ? 232 : -352695594))) : (min(var_2, 90)))) : (((min((var_3 >= var_11), var_13))))));
    #pragma endscop
}
