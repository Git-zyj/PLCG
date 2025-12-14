/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140548
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */int) var_13);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        arr_3 [i_0] = (-(((arr_0 [i_0]) * (((var_16) / (var_2))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned int) arr_0 [i_0])) != (var_13))) ? ((-(arr_1 [i_0]))) : (var_17))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_4) : (arr_1 [i_0]))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_19 ^= ((/* implicit */int) ((arr_0 [i_1 - 2]) != (min((arr_1 [i_1 - 1]), (arr_0 [i_1 - 1])))));
        var_20 = ((/* implicit */int) (!((((-(var_16))) == (((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) arr_0 [i_1 - 1])))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_21 = ((int) (~(min((arr_1 [i_2]), (arr_8 [i_2])))));
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_12 [12] [i_3 - 1]) : ((-(var_14))))))));
                arr_13 [i_4] [i_2] [i_2] [i_2] = 3689565130U;
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_23 *= ((/* implicit */int) ((arr_12 [i_5] [i_5]) != (var_6)));
                    var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) (-(var_7)))) ? (var_12) : (((((/* implicit */_Bool) 878217940)) ? (var_14) : (var_17)))))));
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        arr_24 [i_2] = ((/* implicit */int) ((((arr_15 [i_2] [i_2] [i_2] [i_2]) == (-723938248))) ? (arr_11 [i_2] [i_2] [i_2] [i_3 + 1]) : (arr_19 [i_2] [i_3] [7] [i_6] [i_7 + 2] [i_6])));
                        arr_25 [i_4] [16] |= ((/* implicit */int) ((arr_8 [i_2]) != ((+(arr_8 [i_2])))));
                        var_25 = (+(arr_20 [i_2] [i_7 + 2] [i_7 - 1] [3U]));
                        var_26 = 393667526;
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_27 ^= arr_12 [i_8] [i_3 - 3];
                        arr_28 [i_2] [i_2] = ((/* implicit */unsigned int) -740999037);
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        arr_31 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] |= (-(arr_15 [i_3 + 1] [i_9] [i_4] [i_3 + 1]));
                        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_12)) : (arr_19 [13] [13] [i_4] [i_6] [i_4] [i_4]))) != (arr_22 [19] [i_2])));
                    }
                    arr_32 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                    var_29 -= ((/* implicit */unsigned int) var_2);
                    var_30 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [16] [i_2]))));
                }
            }
            var_31 = ((/* implicit */int) var_0);
            var_32 = ((((/* implicit */_Bool) 1947339878)) ? (740999036) : (1725572314));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            {
                                arr_47 [i_10] [i_10] [i_12] [i_12] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_10] [i_12] [i_12]))));
                                var_33 = ((/* implicit */int) ((arr_33 [i_13]) != (var_11)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        arr_51 [i_12] = ((/* implicit */unsigned int) ((int) arr_14 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15]));
                        arr_52 [i_15 - 1] [i_12] [i_12] [i_12] [i_10] = ((((/* implicit */_Bool) arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_12] [i_15] [i_15 + 1])) ? (arr_46 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15] [i_12] [i_15 - 1] [i_15]) : (arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_12] [i_15 - 1] [i_15 + 1]));
                        var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) (+(var_13)))) ? (var_16) : (arr_14 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15 - 1] [i_15 + 1])))));
                    }
                    arr_53 [i_10] [i_10] [i_10] [i_12] = ((((/* implicit */_Bool) arr_27 [i_12] [i_12] [i_12] [i_11] [i_12])) ? (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_10] [i_12] [i_10] [i_10]) : (var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                }
            } 
        } 
        arr_54 [12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_4))) ? (((((/* implicit */_Bool) var_13)) ? (var_8) : (140298245))) : (((740999058) - (var_16)))));
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    {
                        arr_64 [i_16] = ((/* implicit */unsigned int) (((+(var_17))) != (((((/* implicit */_Bool) var_1)) ? (var_16) : (var_15)))));
                        arr_65 [i_10] &= ((/* implicit */unsigned int) arr_60 [i_10] [i_10] [i_10]);
                    }
                } 
            } 
        } 
        var_35 ^= ((/* implicit */int) ((arr_58 [i_10]) != (arr_58 [i_10])));
    }
}
