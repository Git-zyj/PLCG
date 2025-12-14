/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max((5202682904439077130 / 1580907796), ((((((arr_1 [i_0]) ? var_7 : var_7)) | ((((arr_0 [i_0]) + (arr_1 [i_0])))))))));
        var_12 = (min(9223372036854775807, 32767));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 -= ((!(arr_5 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_12 [11] [i_2] [i_3] = (!18446744073709551602);
                    var_14 = (arr_9 [4] [i_2]);
                    var_15 = (arr_7 [i_2] [0]);
                    var_16 *= arr_3 [i_1];
                }
            }
        }
        var_17 = (min(var_17, ((((((arr_8 [i_1] [i_1] [i_1]) ? var_9 : -31353)) <= (((((arr_10 [i_1]) < var_5)))))))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_18 = (min(var_18, (max((arr_9 [i_4 - 1] [i_4]), 31353))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_19 -= (((min((arr_1 [i_6 + 1]), (arr_1 [i_6 + 2])))) ? (min((arr_6 [i_4 + 1]), (arr_6 [i_4 + 1]))) : ((((var_5 + 9223372036854775807) >> (var_1 + 1848014604304994494)))));
                        var_20 -= ((25146 >> (1493916347 || var_7)));
                        var_21 = (max(var_21, (min(((var_2 ? (((3043595525 / (arr_8 [i_5] [i_6] [i_7])))) : (arr_23 [i_4] [i_5] [i_6] [11]))), (18424206799536556872 / var_3)))));
                    }
                    var_22 = ((var_4 > ((((arr_13 [i_4]) > ((min((arr_4 [8] [i_6]), var_10))))))));
                    var_23 = ((((arr_25 [4] [i_5] [i_6 + 1]) ? (arr_25 [i_6] [i_5] [i_6 + 1]) : 3043595545)) >> (var_0 - 13032102999725455399));
                    arr_27 [i_5] [11] [i_6] [i_6 - 2] = (var_3 - 3043595520);
                }
            }
        }
        arr_28 [i_4] = 7378187276551928878;
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_24 -= ((arr_1 [i_8]) ? ((-var_6 ? (((var_11 ? var_2 : var_8))) : (max(18446744073709551615, 2686509185)))) : (((((2686509160 ? (arr_30 [i_8] [i_8]) : (arr_0 [i_8])))) ? (var_10 / var_0) : var_2)));
        var_25 = ((var_8 > (((2686509149 ? -16878 : 1)))));
        var_26 = (min(var_26, ((((((((2394646031220321274 & 3166138189) ? ((-31371 ? -3665421921688339674 : 715492435)) : (!var_0))) + 9223372036854775807)) >> (((((arr_29 [i_8]) + (arr_30 [i_8] [i_8]))) - 8609050522162653772)))))));
    }
    var_27 = (((((min(7108, var_2))) % 47004785597128418)));
    #pragma endscop
}
