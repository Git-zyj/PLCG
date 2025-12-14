/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 19393;
    var_21 = (((((var_1 ? (~0) : ((var_6 ? 632027318849428258 : var_13))))) ? ((min((632027318849428258 || 28672), (max(var_15, var_6))))) : (((!(1231232921 * var_12))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (9151314442816847872 ? 248 : ((((arr_0 [i_0]) > (((max(-107, var_18))))))));
        var_22 = ((((max((~var_10), ((min((arr_1 [i_0] [i_0]), var_2)))))) ? ((((min(4130176841, 8793694132956017087))) ? (((!(arr_0 [i_0])))) : ((var_18 ? var_0 : 19396)))) : (!var_16)));
        var_23 = (min(var_23, ((max(36863, ((-911998757 ? (35723 || var_4) : -12611)))))));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (max((69 == var_4), (max((1930661405 & 12597), 19381))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_24 = (min(var_24, ((((248 ^ (!27)))))));
                    arr_13 [i_1 - 1] [i_2] [i_2] [i_3 + 1] = (((((var_1 >> (((arr_6 [i_3 + 1]) + 1379801001))))) == ((((((arr_12 [i_1 - 3] [i_2] [i_3 + 1]) / var_3))) / (min(var_14, (-9223372036854775807 - 1)))))));
                }
            }
        }
        var_25 ^= var_2;
        var_26 = 1689741295;
        arr_14 [i_1 + 1] [i_1 + 2] = ((-(12615 || 5886071575593607769)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                {
                    var_27 = (max(var_27, ((((((114149682 ? (arr_21 [i_4]) : 65535))) ? 126 : var_9)))));
                    arr_22 [i_4] [i_5] [19] = ((36863 == (arr_20 [i_6 - 1] [i_4] [21] [i_5])));
                }
            }
        }
        var_28 -= (((((var_10 ? var_8 : var_5))) ? (arr_17 [i_4]) : (((((arr_19 [i_4] [i_4] [i_4]) <= var_19))))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        arr_25 [i_7 - 1] = (~(arr_15 [i_7 - 2] [i_7 - 2]));
        var_29 *= (-2004734424 % var_4);
        var_30 = (max(var_30, (-911998758 | -15992)));
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_31 &= ((((56317 ? 0 : 65533)) > -19364));
                    var_32 = (((((((~(arr_16 [i_10] [i_10])))) ? (arr_15 [i_10] [i_9]) : ((max(1, 68))))) - (((arr_15 [8] [i_9]) ^ (((arr_20 [i_10] [i_9] [i_8] [i_8 + 1]) | 0))))));
                    var_33 = 18669;
                    var_34 += (((((246 ? 19386 : 36851))) ? ((65515 >> (((arr_19 [i_8 - 3] [i_8] [i_10]) + 3699779575608600793)))) : var_2));
                }
            }
        }
    }
    #pragma endscop
}
