/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((((268435456 % ((((-2147483647 - 1) ? 2921284734 : 1373682573)))))) / (((arr_4 [11]) - (((arr_4 [0]) ? 10814270719862334675 : 268435459)))))))));
                arr_5 [i_0] [i_0] = ((((~(arr_3 [i_0]))) & (arr_3 [i_0])));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((((arr_4 [i_0 - 1]) ? (((arr_9 [i_2] [i_2 + 2] [i_3]) ? (arr_9 [i_0 - 1] [i_2 - 1] [i_4]) : (arr_9 [i_0] [i_2 - 2] [i_2]))) : ((((arr_10 [i_0] [i_0] [i_0] [i_3] [i_4]) && (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                                var_12 = (i_0 % 2 == 0) ? ((max(((((arr_9 [i_0 - 1] [i_2 - 1] [i_3 + 2]) & (arr_8 [i_0])))), (((arr_1 [i_0 - 1] [i_0]) >> (((arr_0 [i_0]) - 68))))))) : ((max(((((arr_9 [i_0 - 1] [i_2 - 1] [i_3 + 2]) & (arr_8 [i_0])))), (((arr_1 [i_0 - 1] [i_0]) >> (((((arr_0 [i_0]) - 68)) - 140)))))));
                            }
                        }
                    }
                    var_13 *= 0;
                    var_14 = ((((max((arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 2]), (arr_9 [i_0 - 1] [i_0 - 1] [i_2 + 2])))) || ((((arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 2]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 1]) : (arr_9 [i_0 - 1] [i_0 - 1] [i_2 + 1]))))));
                    var_15 ^= ((((((4016 + 2921284734) ? (((arr_10 [i_0] [i_1] [i_2] [i_2] [i_2]) ? (arr_9 [i_0] [i_1] [i_2 - 2]) : var_6)) : (((888678401 ^ (arr_7 [i_0]))))))) ? (max(9223372036854775807, ((-4016 ? (arr_3 [2]) : 536868864)))) : (((((-127 - 1) ? 2094515963714993508 : (arr_8 [6]))) / (((arr_10 [i_0 - 1] [i_0] [i_1] [i_1] [6]) ? var_1 : (arr_8 [2])))))));
                    var_16 = (((arr_8 [i_0]) ? (((((max(28, (arr_6 [i_0] [i_1] [18]))) >= ((var_5 ? var_9 : (arr_6 [i_0] [i_1] [i_2]))))))) : ((min((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]), 2483074368182678135)))));
                }
                arr_12 [i_0 - 1] [i_0 - 1] [i_0] = ((((1 != (arr_2 [i_0]))) ? (max(8, (arr_1 [i_0] [i_0]))) : ((~(arr_2 [i_0])))));
            }
        }
    }
    var_17 = (min(((var_9 ? 0 : (((var_6 ? var_6 : var_1))))), (min(var_6, ((4294967295 ? 705817833995311729 : 15890261542835134910))))));
    #pragma endscop
}
