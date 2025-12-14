/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_10));
    var_16 = (!var_0);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (-9062410269844649337 ? -508716920 : (max((((-9223372036854775807 - 1) & 4355317407075145929)), 9062410269844649328)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_3] [i_3] = (max((((arr_0 [i_0 + 2]) ^ ((9062410269844649337 ? -9062410269844649337 : -9062410269844649329)))), var_9));
                        arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [9] = ((!(arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 1])));
                    }
                }
            }
        }
        arr_11 [i_0] = (((((228 ? var_14 : (arr_1 [i_0 + 1] [i_0 + 1])))) ? (var_11 == -9062410269844649328) : var_12));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_16 [i_4] = (11238913217860760216 ? (max(var_12, var_2)) : (((((max(var_3, (arr_1 [i_4] [i_4])))) ? 103 : 1739320932))));
        var_18 = ((((arr_4 [i_4 - 2]) ? (arr_0 [i_4]) : -9062410269844649336)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_19 ^= 1844774817;
        arr_21 [i_5] [i_5] = (((arr_0 [i_5]) ? (arr_6 [i_5] [i_5] [i_5]) : (arr_1 [i_5] [i_5])));
        var_20 ^= (arr_1 [i_5] [i_5]);
        var_21 = (max(var_21, (-1 + var_4)));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_27 [i_6 + 1] [1] [i_8])));
                    var_23 = (min(var_23, ((((~9062410269844649321) ? (((~((var_13 ? var_3 : var_11))))) : (arr_5 [i_6] [i_7] [i_8 + 1] [i_8]))))));
                    arr_29 [i_6 - 1] [1] [i_6] [i_6] = ((1199610677 ? (((99 ? (arr_25 [i_6] [i_8 + 3] [i_6]) : (arr_25 [i_6] [i_8 + 3] [i_6])))) : (((arr_8 [i_8 - 1] [i_8 - 1] [i_6 + 1]) ? -1680384644 : ((115 ? var_5 : 9062410269844649328))))));
                }
            }
        }
        var_24 ^= -110;
        arr_30 [i_6] = (max(((+(((arr_25 [i_6] [i_6] [i_6]) ? (arr_26 [i_6 - 1]) : (arr_1 [i_6 - 1] [i_6]))))), (((!((max(9062410269844649327, -9223372036854775802))))))));
        var_25 = (((arr_8 [i_6] [i_6 + 1] [9]) ? (((arr_22 [i_6] [i_6]) + var_0)) : (((((min(var_10, var_3))) - var_6)))));
    }
    #pragma endscop
}
