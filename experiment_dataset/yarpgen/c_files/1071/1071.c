/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 &= (var_9 | -var_5);

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_15 = (((((((max(570240930, (arr_3 [11])))) ? (arr_2 [i_0]) : (arr_6 [i_1])))) || ((((arr_2 [i_1 - 2]) ? var_13 : -18261)))));
            arr_7 [i_0] [i_1] = ((-30718 ? 570240931 : (-1 || 17941)));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] = -19310;
            var_16 -= var_11;
        }
        var_17 = 254;
        arr_11 [i_0] = ((-(((13148177551499300830 + 93) ? 62 : ((0 ? 5916 : 0))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_18 = -1283828191;
        arr_14 [i_3] = ((!(arr_4 [i_3] [i_3] [i_3])));
        arr_15 [16] [i_3] |= (arr_8 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_7] [i_6] [i_7] = (max((((4963 > (arr_3 [i_7 + 2])))), (var_10 / var_8)));
                        var_19 = (arr_6 [i_4]);
                    }
                }
            }
        }
        var_20 = 2147483647;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_37 [i_4] [i_8] = ((+(((arr_16 [i_9]) ? (arr_16 [i_4]) : (arr_16 [i_4])))));
                        var_21 = (((((((1 + var_1) == (max((arr_13 [i_4] [i_4]), var_2)))))) / 2558434257));
                        arr_38 [i_4] [i_8] [i_4] = ((-var_12 ? (arr_4 [i_4] [i_9] [i_10]) : ((min((max(254, 2147483644)), (-7 && var_2))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_22 ^= (max(((((min(28006, 17))) == (-1 == 65535))), var_9));
        var_23 -= ((((((((var_8 ? var_8 : var_11))) ? (~var_0) : 508))) ? (((((max(1, 617145361))) ? (((!(arr_1 [i_11])))) : ((var_13 << (var_10 - 32865)))))) : ((var_3 ? var_5 : (max((arr_2 [i_11]), (arr_40 [i_11])))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    var_24 *= (max(var_5, ((-4 % ((5916 ? (arr_4 [i_11] [i_11] [i_11]) : -1))))));
                    arr_51 [i_13] [i_13] [i_13] [i_12] = var_4;
                    var_25 = (min(((((min(var_0, -993729888416403994))) ? 50842 : (arr_42 [i_12 + 1] [9]))), (((((min(var_0, (arr_13 [i_11] [i_11])))) && (arr_45 [i_11]))))));
                }
            }
        }
        arr_52 [i_11] [i_11] = ((((~(arr_49 [i_11] [i_11] [0])))) ? (max(2224906613887872013, ((45945 ? var_10 : var_12)))) : ((min((((-127 - 1) ? var_9 : var_8)), (arr_8 [i_11] [i_11])))));
    }
    var_26 += (((((max(var_3, var_11))) >> 0)));
    var_27 = 5904;
    var_28 &= (((((var_0 - var_11) ? var_6 : (((-28120 ? -818150293 : var_0))))) + (((((-168973449780771666 ^ -1) && (9 < 14241168177912693188)))))));
    var_29 = ((var_10 > (((!(((var_13 ? 1183907446 : var_9))))))));
    #pragma endscop
}
