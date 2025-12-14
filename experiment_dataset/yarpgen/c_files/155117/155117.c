/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (5825 > -118);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 *= (((59729 ? 157 : 255)));
        var_19 -= (arr_0 [i_0]);
        var_20 = ((((-4786415821016280256 / (arr_1 [i_0]))) & (arr_1 [i_0])));
        arr_4 [i_0] = (((((var_7 ^ (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0]) : ((7103 ? var_13 : 4294967295))));
        var_21 &= ((4294967279 ? (~75) : 65535));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, 107));
                        var_23 = 117;
                        var_24 = (((~161) && 5950970138435891819));
                    }
                }
            }
        }
        var_25 -= ((((((18446744073709551602 ? var_12 : (arr_16 [5] [i_1] [5] [i_1] [i_1]))))) ? (((((-115 ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))) * (!3769)))) : var_7));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_26 = (i_5 % 2 == 0) ? (((((((~((~(arr_18 [i_5]))))) + 2147483647)) >> ((((-(arr_18 [i_5]))) - 1795250268))))) : (((((((~((~(arr_18 [i_5]))))) + 2147483647)) >> ((((((-(arr_18 [i_5]))) - 1795250268)) + 1753622109)))));
        var_27 = ((((((arr_17 [i_5]) ? (~-6665) : ((var_15 ? -20194 : (arr_17 [i_5])))))) ? (arr_17 [i_5]) : ((((arr_18 [i_5]) ? var_15 : (arr_18 [i_5]))))));
        var_28 = (max(var_28, ((max((~4134576878), ((((max((arr_18 [0]), var_8)) << (((((((arr_18 [6]) + 2147483647)) << (((arr_17 [3]) + 1548737203)))) - 352233356))))))))));
        arr_19 [18] |= (~153);
    }
    var_29 -= (max(var_13, var_13));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                arr_26 [i_6] = ((((max(var_12, -var_15))) || var_11));
                var_30 = (((max((!98), (arr_7 [i_6] [i_7] [i_6]))) ^ (arr_16 [21] [21] [i_6] [i_7] [i_7])));
            }
        }
    }
    var_31 = (max(var_31, ((((167 || 0) ? (29 - 158) : -7122)))));
    #pragma endscop
}
