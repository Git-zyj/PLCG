/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (((arr_5 [i_1] [i_2 + 1] [i_2]) ? (arr_5 [i_1] [i_2 + 1] [i_1]) : var_14));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_1] [14] [i_1] [i_1] [i_1] = ((var_3 ? (((!(arr_4 [i_1] [i_3])))) : ((-97 ? var_12 : (arr_0 [i_1] [i_1])))));
                        var_15 = (-var_13 > -var_2);
                        var_16 = ((arr_0 [16] [i_2 + 2]) ^ 4294967232);
                        var_17 = (max(var_17, (~var_9)));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_2] [8] [8] [i_1] [i_0] &= var_1;
                        var_18 = ((((((((50802 ? (arr_12 [i_0 - 1] [i_1] [i_1] [4]) : 65535))) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : var_11))) ? (arr_14 [i_1]) : (max(6906859526045205941, (((var_6 + (arr_4 [i_1] [i_4]))))))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_21 [i_0] [0] [i_2] [i_1] [0] = (((max(var_0, (arr_19 [i_1] [i_1]))) >= (arr_19 [i_1] [i_1])));
                            arr_22 [i_1] = (min((min(var_8, (arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1] [1] [i_2 - 2] [i_2]))), (!var_11)));
                        }
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_13 == ((var_0 ? (var_9 ^ -6906859526045205941) : (arr_1 [i_0])))));
                        var_19 |= var_3;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_20 = (max(var_20, (((((12262019421066642074 ? ((65535 + (arr_26 [i_0 + 1]))) : (arr_5 [22] [22] [i_7]))) | (arr_25 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))));
                            var_21 = (max(((((var_8 + (arr_0 [i_0] [i_0]))) << (6906859526045205957 - 6906859526045205942))), var_6));
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_1] [10] = (i_1 % 2 == zero) ? ((((((min((!2038947082), ((var_3 ? (arr_5 [i_1] [i_1] [i_1]) : -100)))) + 2147483647)) << (((((((~(arr_12 [i_0] [i_1] [i_1] [i_6]))) <= 28688))) - 1))))) : ((((((min((!2038947082), ((var_3 ? (arr_5 [i_1] [i_1] [i_1]) : -100)))) + 2147483647)) << (((((((((((~(arr_12 [i_0] [i_1] [i_1] [i_6]))) <= 28688))) - 1)) + 29)) - 28)))));
                        var_22 &= (((((~(6906859526045205957 & -16)))) ? (arr_19 [4] [i_0]) : (arr_11 [16] [16] [16] [i_2])));
                    }
                }
            }
        }
    }
    var_23 = ((7740562954484329230 || (((max(var_13, var_4))))));
    var_24 = var_8;
    #pragma endscop
}
