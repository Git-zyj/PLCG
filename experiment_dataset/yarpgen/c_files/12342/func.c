/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12342
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_15 ^= ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((1334988506U) == (616807672U))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (2003529531U) : (((unsigned int) 4294967277U)))))));
                        var_17 |= ((((/* implicit */_Bool) 1062080779U)) ? (((unsigned int) (-(var_7)))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_8 [i_3] [i_2] [i_1] [i_2] [i_2] [i_0]) : (arr_4 [i_0]))));
                        var_18 ^= ((((arr_6 [i_3]) / (min((var_11), (arr_0 [i_0] [i_1]))))) | (3204418026U));
                        arr_10 [i_1] [i_1] [i_1] [i_1] &= 284459852U;
                    }
                } 
            } 
            arr_11 [i_1] = 1057974422U;
        }
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_15 [i_4] = (~((-(arr_8 [i_0] [i_4] [i_0] [i_0] [i_4] [i_4]))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_19 = (-(((((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_4] [i_5])) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_4] [i_4] [i_5]))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_6] [i_4])))))));
                            var_21 = ((arr_21 [i_0]) | (((((/* implicit */_Bool) arr_21 [i_5])) ? (2911645762U) : (arr_21 [i_0]))));
                            var_22 = ((((/* implicit */_Bool) ((arr_8 [i_7] [i_6] [i_5] [i_6] [i_7] [i_7 + 1]) + (arr_8 [i_4] [i_0] [i_5] [i_5] [i_7 + 1] [i_7 + 1])))) ? (((((/* implicit */_Bool) 2939777893U)) ? (arr_8 [i_7 + 2] [i_6] [i_5] [i_6] [i_7] [i_5]) : (arr_8 [i_7 + 2] [i_6] [i_5] [i_6] [i_5] [i_6]))) : (3556320031U));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                var_23 = arr_4 [i_0];
                arr_26 [i_0] [i_0] [i_8] = arr_18 [i_0];
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((990511735U) < (arr_9 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_4]))))) >= (min((arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_4]), (arr_9 [i_8 + 1] [i_8 + 1] [i_4] [i_4]))))))));
            }
            var_25 |= ((var_7) % (arr_5 [i_4] [i_0]));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_26 = (-((+(4294967273U))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) ((4010507431U) != (arr_24 [i_0] [i_0] [i_4] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) 333231828U)))))));
            }
            for (unsigned int i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_28 = ((((/* implicit */_Bool) var_9)) ? ((((-(arr_34 [i_12] [i_10 - 1] [i_0] [i_0]))) * ((-(4294967292U))))) : (min((arr_9 [i_0] [i_0] [i_0] [i_11]), (arr_32 [i_10 - 2] [i_10 - 2] [i_10]))));
                            var_29 = ((((/* implicit */_Bool) var_7)) ? (max((arr_2 [i_10] [i_10]), (1023U))) : (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_14) : (4294967295U)))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_0] [i_12];
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) 1627411352U)) ? (arr_20 [i_0] [i_12] [i_10] [i_10 + 2]) : (var_10))) << (((max((arr_27 [i_10 - 1] [i_11] [i_10 + 3]), (626440645U))) - (1227662574U))));
                            var_30 *= ((/* implicit */unsigned int) ((((unsigned int) arr_37 [i_11])) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_33 [i_0] [i_4] [i_0]) % (arr_17 [i_0] [i_4] [i_10] [i_12]))))))))));
                        }
                    } 
                } 
                arr_41 [i_10] = ((((((/* implicit */_Bool) arr_2 [i_0] [i_4])) || (((/* implicit */_Bool) 3402371577U)))) ? (var_2) : (((((/* implicit */_Bool) arr_28 [i_4] [i_10 + 3] [i_10] [i_10])) ? (arr_28 [i_0] [i_10 - 1] [i_10] [i_0]) : (arr_28 [i_0] [i_10 - 1] [i_10 + 1] [i_4]))));
                var_31 = (-(((((/* implicit */_Bool) min((1751493568U), (1128207590U)))) ? (arr_32 [i_0] [i_4] [i_10]) : ((~(990511730U))))));
            }
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                arr_44 [i_0] [i_13] = (+(((((/* implicit */_Bool) ((arr_1 [i_0] [i_13]) / (990511726U)))) ? (((((/* implicit */_Bool) arr_27 [i_13] [i_13] [i_13])) ? (3652590615U) : (1414766143U))) : (1082405909U))));
                arr_45 [i_0] [i_4] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((0U), (arr_29 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0])) ? (arr_36 [i_4] [i_4] [i_4] [i_4]) : (var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((arr_21 [i_0]) < (arr_21 [i_0]))))));
                arr_46 [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3932160U) % (1486631046U))))));
                var_32 = 3303211230U;
                var_33 |= ((/* implicit */unsigned int) ((((unsigned int) (+(arr_36 [i_13] [i_4] [i_0] [i_0])))) != (var_11)));
            }
        }
        var_34 = ((/* implicit */unsigned int) min((var_34), (((33292288U) * (max((arr_18 [i_0]), (arr_18 [i_0])))))));
        var_35 ^= 1998154703U;
        var_36 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((825080275U) < (1361461049U))))))) ? ((+(max((708687607U), (0U))))) : (max((((/* implicit */unsigned int) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_6 [i_0])))), (min((4229663733U), (991756065U))))));
    }
    var_37 = var_11;
    var_38 = (+(4294967272U));
    var_39 = (~(max(((~(2858337283U))), (var_2))));
    var_40 = ((/* implicit */unsigned int) max((var_40), (var_5)));
}
