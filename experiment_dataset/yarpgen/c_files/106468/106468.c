/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 = (((+(max((arr_2 [i_0 + 1]), var_7)))) / 2147483136);
        arr_3 [i_0] [i_0] |= ((((((max((arr_1 [i_0 + 1] [i_0]), var_2))) ? ((var_7 & (arr_0 [5]))) : var_5)) ^ (~2147483136)));
        arr_4 [i_0] = ((0 && ((max(1, 2147484148)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1] = ((!((min((var_3 || 9223372036854775807), ((var_9 ? (arr_9 [10] [i_1] [i_3 - 2]) : (arr_6 [i_0]))))))));
                        var_11 = (arr_2 [i_0 - 1]);

                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_12 -= ((((max((arr_11 [i_3 - 1] [i_1] [i_4 - 2] [i_3 - 1] [i_3 - 1]), var_5))) ? ((((min(var_8, (arr_13 [i_0] [i_1] [i_2] [i_1])))) ? (arr_16 [i_0] [i_3] [i_2] [1] [i_4]) : (((max((arr_5 [i_3] [i_4]), (arr_11 [i_4] [i_2] [i_2] [i_1] [i_0 + 2]))))))) : var_9));
                            arr_18 [i_0] [i_1] [i_2] [6] [i_4 - 1] = min(((-3840 ? (arr_0 [i_0 + 1]) : ((var_5 ? 16777215 : var_2)))), (max(((6666 ? 1023 : (arr_13 [i_4] [i_2] [i_1] [i_0 - 1]))), 1)));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_13 = (((((arr_0 [i_1]) - ((max(48, -123))))) - ((min(var_0, (arr_0 [i_0]))))));
                            var_14 = (max(var_14, var_9));
                        }

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_15 ^= var_8;
                            var_16 ^= ((var_6 + (arr_9 [i_0] [i_2 - 2] [i_6 - 1])));
                            arr_23 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_6 - 1] [i_0] = (((arr_9 [i_0 + 1] [i_2 + 1] [i_3 - 2]) <= (arr_9 [i_0 - 1] [i_2 - 4] [i_3 - 2])));
                            arr_24 [i_0] [8] [8] [i_3] [i_6] |= (((arr_1 [i_0 + 1] [i_2]) < var_7));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] [i_7] [i_2 - 1] [i_7] [i_0] = (arr_25 [i_0 + 1] [i_7] [i_3] [i_3] [i_7 + 1] [i_7]);
                            arr_28 [i_7] [i_3] [i_7] [i_2] [i_7] [i_1] [i_0] = (((((~1) < (arr_9 [i_7 + 1] [i_3] [i_1]))) ? (arr_12 [i_7] [i_7 + 1] [i_2] [i_3 - 1]) : ((+((((arr_21 [i_0 - 2] [i_1] [1] [i_3 - 1] [i_7] [i_1]) > (arr_0 [i_0]))))))));
                        }
                        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_17 = var_3;
                            var_18 = (min(var_18, 255));
                        }
                    }
                }
            }
        }
    }
    var_19 = max((max((min(1023, var_5)), 2147484160)), (((4503599358935040 ? (var_1 == var_8) : (var_4 || var_6)))));
    #pragma endscop
}
