/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_1 [i_0]) < (arr_1 [i_0 - 1])));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [18] [i_1] = (max(((((arr_6 [i_1] [i_1] [i_1]) == (arr_3 [i_0])))), (((arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]) / (arr_2 [i_0 + 1] [i_0 + 2] [i_0 - 1])))));
                    var_16 |= (((var_14 & var_13) || var_9));
                    var_17 |= var_0;
                }
                var_18 *= (((min(var_0, var_2)) * (arr_4 [i_0 - 1] [i_0 + 2] [0])));
            }
        }
    }
    var_19 = ((((var_8 | (-26640 | 26654))) % 22990));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_20 *= (26642 % 23013);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_21 = (max(var_21, (((((((var_4 ^ (arr_12 [i_5])))) ? ((var_9 / (arr_14 [i_5] [i_5]))) : (arr_11 [i_3 + 1])))))));
                    arr_18 [i_3 + 1] [i_4] [i_5] = (max((!-22966), (arr_1 [i_3 + 1])));
                    arr_19 [2] [i_4] = ((((arr_0 [i_3 + 1]) % ((var_10 ? (arr_9 [i_4]) : 26636)))));
                    var_22 = max(var_5, (var_14 & -22982));
                }
            }
        }
    }
    #pragma endscop
}
