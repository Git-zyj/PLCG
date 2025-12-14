/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (min(((+((1 ? (arr_5 [i_2] [i_0]) : 1)))), -1));

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] = (min((((((var_16 ? 1 : 1)) / ((4118340233 ? 7168 : 1))))), (max(var_11, ((max(3461531287032332648, 176627052)))))));
                        var_18 ^= (min((((arr_4 [i_0] [i_0]) - (((arr_7 [i_3] [i_2 + 2]) ? (arr_9 [i_0] [18]) : 6285895039187884055)))), ((176627055 ? 0 : -7347713568121011307))));
                    }
                    arr_11 [i_1] [i_0] = (((max(23634, 36028797018439680)) * (((((((-65 + 2147483647) << (var_8 - 3252))) != (arr_4 [i_0 - 2] [i_2 - 1])))))));
                    var_19 ^= (min((min((((1 ? 65526 : (arr_9 [i_0] [i_0])))), (max(6285895039187884048, var_4)))), ((((arr_2 [i_0] [i_1]) < ((((!(arr_6 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_20 = (((((1948242909 * 1) ? (0 / 7347713568121011305) : ((max(0, 4294967281))))) >= (arr_16 [i_4] [i_4 - 1])));

                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {
                    arr_21 [14] [14] [i_5] [i_6] = (((((~(18446744073709551603 || 22)))) ? (((((min(1, (arr_20 [i_4 - 2] [i_4 - 2] [i_6 + 3])))) <= (var_15 > var_12)))) : (((0 > (min(1, (arr_3 [i_4] [i_5] [i_6]))))))));
                    arr_22 [i_4] [i_4] [i_4] &= (max((min(((((arr_8 [i_4 - 1] [i_5] [i_5]) << (126 - 125)))), (var_16 ^ 1976662502272724028))), (((((~(arr_15 [i_4] [11]))) & (((-64 + 2147483647) >> (-3 + 18))))))));
                }
            }
        }
    }
    var_21 = (min(var_21, var_3));
    #pragma endscop
}
