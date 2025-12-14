/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_3 + 1] [i_2] = ((var_7 / (min((var_8 | var_0), 1))));
                            var_11 = (arr_9 [i_0] [i_1] [i_2] [i_3]);
                            var_12 = (min(var_12, ((~(var_9 & 856856081454743979)))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] = (min(18446744073709551615, 101));
                        }
                    }
                }
                var_13 = (min(var_13, 124));
                arr_12 [i_0] [i_0] [i_1] = (max((~5680847722566762259), ((((max(5259, 1))) ? (((var_1 ^ (arr_8 [i_0] [i_1] [i_1] [i_0] [17] [i_1])))) : var_3))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_1] [9] = (min(((0 ? (min(var_3, 5)) : (96 & 16))), ((max(((((arr_9 [i_0] [i_1] [i_4] [i_0]) <= 61))), (((((arr_16 [i_0] [i_1] [i_4] [i_4] [i_5]) + 2147483647)) << (((arr_6 [i_5 + 1] [6] [i_0]) - 92)))))))));
                            arr_19 [i_1] [i_1] = (i_1 % 2 == 0) ? (((-((((((arr_3 [i_1] [i_1]) << (((arr_3 [i_1] [i_1]) - 1403275865240082646)))) == (((min(-1, (arr_7 [i_0] [i_0] [i_0] [i_0]))))))))))) : (((-((((((((arr_3 [i_1] [i_1]) + 9223372036854775807)) << (((((((arr_3 [i_1] [i_1]) - 1403275865240082646)) + 5132061264799272170)) - 41)))) == (((min(-1, (arr_7 [i_0] [i_0] [i_0] [i_0])))))))))));
                            var_14 = (min(-119, 24576));
                        }
                    }
                }
            }
        }
    }
    var_15 &= (14881862164120794301 + 1);
    var_16 = var_4;
    #pragma endscop
}
