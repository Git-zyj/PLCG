/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((min(((var_13 ? var_5 : var_2)), (~1))) & 67)))));
                arr_4 [i_0 + 1] [14] [14] = (arr_1 [14] [i_0 - 1]);
                arr_5 [i_0] = ((((var_16 ^ (arr_1 [i_0 - 1] [i_0]))) << (((~1026220571) - 3268746714))));
                var_18 = ((((var_0 ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 - 1] [i_0 - 1]))) - 2147483631));
            }
        }
    }
    var_19 = var_14;

    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = 68719476732;
        arr_8 [i_2 + 1] = (((!2147483631) ? ((((arr_6 [i_2 + 1]) ? (arr_6 [i_2 + 1]) : 1640076093))) : (arr_7 [i_2 - 1])));
        arr_9 [i_2] = (((((((-(arr_6 [i_2 - 1])))) ? var_4 : -106))) ? 2183051546640229812 : 43875);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] &= (min((min((~var_14), (((var_8 & (arr_10 [i_2] [i_2])))))), ((((arr_14 [i_3]) || -5780835660817336571)))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_6] [i_6] [i_4] [i_6] [i_6] = (~var_8);
                                var_21 *= ((~((((((arr_6 [i_3 + 4]) - (arr_22 [i_2] [i_2] [15] [11] [i_4] [i_2] [i_6])))) ? (arr_18 [i_2 - 1] [i_3 + 4]) : var_9))));
                                var_22 = (min(var_22, (((((((1 == (min(16263692527069321803, -2147483641)))))) % 16263692527069321803)))));
                                var_23 = (-18446744004990074884 ? 3109656522 : (max(1, -8505752426854098892)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_24 = (((189 && 16110) || (((arr_11 [i_7] [i_7 + 1] [i_7 + 1]) || (arr_11 [i_7] [i_7 - 1] [i_7 - 1])))));
        arr_26 [i_7] = 28689;
        var_25 = ((arr_13 [i_7]) | ((~(arr_13 [i_7]))));
    }
    var_26 = var_4;
    #pragma endscop
}
