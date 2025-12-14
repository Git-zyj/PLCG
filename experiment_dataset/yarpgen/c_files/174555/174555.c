/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((((-(~0)))) - (max(5362317791148360014, (((var_10 ? (arr_0 [i_0 + 1]) : (arr_3 [i_2])))))))))));
                    var_12 ^= ((~(max((var_0 ^ var_8), (arr_3 [i_0])))));
                }
            }
        }
        arr_8 [i_0 + 1] = var_5;
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_13 = ((-((((var_9 <= (arr_20 [i_3] [i_3] [i_3] [i_3]))) ? ((max(var_8, (arr_17 [i_6])))) : (((var_4 + 2147483647) >> (var_0 - 9311399972788014177)))))));
                        var_14 = ((var_5 ? ((var_0 / (arr_13 [i_3] [i_4] [i_3 - 1]))) : ((((arr_13 [i_3] [i_3] [i_3 + 2]) ^ var_4)))));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_25 [i_3 + 2] [i_4] [i_5] [i_4] [i_7] = var_5;
                            var_15 = var_1;
                            arr_26 [i_7] [i_4] [i_5] [i_4] [i_6] [i_7] = (min(1, var_3));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_16 = (((~var_7) ? var_8 : var_5));
                            var_17 = (min(var_17, (3733150410385202460 || var_3)));
                        }
                        var_18 = (max(var_18, (((9223372036854775807 >> ((((-9223372036854775807 - 1) || var_5))))))));
                    }
                }
            }
        }
        arr_29 [i_3 + 2] = ((((max(2, (!-1459943385412634315)))) - (max(((~(arr_14 [i_3 - 1]))), ((max(var_1, (arr_28 [i_3 - 2] [i_3 + 2] [i_3 + 3] [i_3] [i_3]))))))));
    }
    var_19 = var_7;
    var_20 = ((!(var_8 == var_0)));
    var_21 = ((min(((3677026961988911680 ? 9223372036854775807 : var_7)), ((max(var_9, var_5))))));
    #pragma endscop
}
