/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (max(var_10, ((((~(arr_1 [i_0] [i_0]))) > ((((9223372036854775807 && (((var_0 ? 24 : -114)))))))))));
        var_11 = (((((-114 ? ((((!(arr_2 [i_0]))))) : (max((arr_2 [i_0]), -17))))) ? (((min(0, -27)) >> (((arr_1 [13] [13]) + 3656886626567777666)))) : ((min((1 >> 1), var_3)))));
        var_12 = ((112 ? var_4 : 32));
        var_13 = (max(var_13, (arr_2 [2])));
        var_14 ^= -29;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 65534;
        var_15 *= (arr_4 [i_1]);
        var_16 = ((min(var_6, ((min(var_7, var_9))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_17 |= ((((((((arr_3 [17] [i_2]) ? 1 : (arr_6 [i_2])))) ? (((arr_7 [i_2]) ? var_5 : var_5)) : var_2))) ? (max(var_7, (arr_6 [i_2 + 2]))) : var_3);
        var_18 = ((((((!-78) ? 65535 : (!-230711857458719909)))) ? -13081 : 0));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    var_19 = ((+((var_2 ? (arr_10 [i_5 + 1] [i_5] [i_5 + 1]) : (arr_10 [i_5 - 1] [i_5] [i_5 - 1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_20 &= (min(var_9, (~1)));
                                arr_20 [i_3] [i_3] [16] [i_3] [i_7] [16] = (((((max((arr_10 [i_3] [i_5 - 1] [i_6]), (((arr_6 [i_7]) ? -68 : 67)))) + 2147483647)) >> (arr_4 [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_3 ? ((-(min(var_5, var_8)))) : var_8));
    var_22 = var_7;
    #pragma endscop
}
