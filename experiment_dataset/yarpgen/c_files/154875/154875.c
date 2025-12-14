/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [3] = (max((0 * 4013945763), ((var_6 ? (((1 + (arr_0 [i_0 + 2] [i_0 - 1])))) : (max(var_2, var_6))))));
        var_12 = (min(var_12, (((((((((var_11 ? 15011369012956991566 : 1))) && ((!(arr_0 [i_0] [i_0])))))) << ((((+(min((arr_1 [i_0 + 2]), var_0)))) - 108)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (max(var_13, (((+(max((var_9 != var_4), (1809258162 ^ -512588200))))))));
        var_14 = (max(var_14, (((-(((min(0, 0)) ? (-7689014894257769249 - var_8) : (((var_4 ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1])))))))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_15 = (min(var_15, ((((3733388531 ? 4294967273 : 4965278592419460821))))));
        var_16 = ((((~(arr_5 [0])))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_9 [i_2 - 1] [i_2] = (((((arr_3 [i_2] [i_3]) + 2147483647)) >> (2183779993 - 2183779974)));
            var_17 += (((arr_7 [i_2 + 1]) & 0));
            arr_10 [i_2] = (!(1 | 0));
            arr_11 [i_2] [i_2] [i_2] = (((-(arr_6 [i_2] [i_3]))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_18 = (min(var_18, (((var_3 ? 1 : (arr_7 [i_2 - 1]))))));
            arr_16 [i_2] [i_2] [i_2] = ((var_9 ? var_3 : -100));
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_19 = ((+(((arr_4 [i_2 - 1]) ? 1809258162 : var_8))));
                    arr_24 [i_2 - 1] [i_2] [i_6] [i_2] &= (((((9 ? (-2147483647 - 1) : 1))) ? (((103 && (~113)))) : (((((((arr_18 [i_6]) + -69)) + 2147483647)) >> ((min(4, -100)))))));
                    arr_25 [i_2 - 1] [i_5] [i_2] = (3435375060752560047 / 13);
                    arr_26 [i_2 - 1] [i_2] [i_2] [i_2] = ((0 ? -77 : 24689));
                }
            }
        }
        var_20 = (-(((((-122 ? var_0 : 0))) ? ((251 ? (arr_21 [i_2] [i_2] [i_2] [i_2]) : var_4)) : 103)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [1] = (min((((((15011369012956991568 ? -65 : 0))) ? ((min(var_11, var_9))) : (var_0 < var_4))), (min(((min(1, (arr_28 [i_7])))), (min(var_11, 1151012122))))));
        var_21 -= ((~((max((arr_28 [i_7]), var_10)))));
        arr_30 [i_7] [i_7] = (max((((~((min(var_9, (arr_28 [i_7]))))))), ((-95 ? (((2137066225 ? -93 : (arr_27 [i_7] [i_7])))) : (min(15011369012956991585, 1))))));
        var_22 ^= (((min(var_2, ((max(var_10, 100))))) + (((((min((arr_27 [i_7] [i_7]), -36)))) - 16))));
    }
    var_23 = (max(var_23, ((((~3603415491) >> ((((var_11 & ((var_2 ? 95 : 6319688756181304670)))) - 72)))))));
    var_24 |= var_9;
    #pragma endscop
}
