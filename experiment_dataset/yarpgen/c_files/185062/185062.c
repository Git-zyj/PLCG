/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_1 + 3] [i_2] = ((-(((arr_1 [21] [i_1 + 3]) / (arr_1 [i_0] [i_1 + 2])))));
                    arr_7 [i_1 - 1] [i_1 - 1] = ((-((876641432 ? var_10 : var_7))));
                }

                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    var_13 = ((+((1 ? (arr_8 [i_1] [i_3]) : (((-(arr_0 [8]))))))));
                    arr_11 [i_3] [i_0] = ((((~(var_10 | 4392643029273561349))) > (((((((arr_9 [4]) != (arr_9 [i_3]))))) % 14054101044435990281))));
                }
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    var_14 ^= 1;
                    arr_16 [i_0] [i_4 + 1] = var_6;
                    var_15 = (max(var_15, ((((arr_2 [i_1 - 1] [i_4 - 1]) < ((((arr_15 [i_1 - 1] [i_1 + 3]) != (max(-14, (arr_5 [i_0] [i_1] [i_1] [1])))))))))));
                    arr_17 [i_4] [1] = min((~var_0), ((18446744073709551615 ? 1 : 14054101044435990260)));
                    arr_18 [i_0] [i_1] [14] = (min(((65535 << (((-6671769055629175827 + 6671769055629175855) - 28)))), (-102 > -7821383284973744094)));
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_16 &= (min(var_9, 1));
                    var_17 = (min(var_17, var_4));
                    var_18 = (max(var_18, (((-(((-13 & 9) >> (((arr_13 [i_0] [i_1 - 2] [8]) + 5811)))))))));
                    var_19 += (arr_0 [i_5 - 1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_30 [i_6 - 4] [i_6] [i_6 - 4] [18] = (4909 | 1898629671);
                    var_20 = var_11;
                    arr_31 [7] [7] = var_0;
                    var_21 += ((~(((!((max((arr_2 [i_6] [12]), var_12))))))));
                }
            }
        }
    }
    #pragma endscop
}
