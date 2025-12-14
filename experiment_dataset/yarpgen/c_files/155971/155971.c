/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~15255896837481840604);
    var_15 = var_1;
    var_16 *= (((((3190847236227711012 ? (max(var_0, 783395660)) : (((min(43, 0))))))) ? ((var_9 / (var_1 & var_13))) : ((min((-3185825252751874777 + 47), (max(43, 9223372036854775807)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 ^= ((((min((arr_1 [i_0 - 1]), var_1))) ? ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))) : (arr_1 [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 -= ((-(max(((min(var_3, (-2147483647 - 1)))), (((arr_0 [i_0]) ? 14006822200371839028 : (arr_1 [i_0])))))));
                            var_19 = (max((min((arr_2 [i_3 - 2] [i_0 + 1] [i_0 + 3]), (arr_2 [i_3 + 1] [i_0 + 3] [i_0 + 2]))), ((((max(1155230950, (-2147483647 - 1))) * var_6)))));
                            var_20 = var_10;
                            var_21 = (((-(arr_0 [i_3]))));
                        }
                    }
                }
                arr_10 [i_1] [1] [i_1] = 55045;
            }
        }
    }
    var_22 = ((var_12 ? (((((var_8 ? 3190847236227711012 : var_0))) ? (var_2 + 64) : (min(var_13, var_9)))) : ((min(var_13, var_11)))));
    #pragma endscop
}
