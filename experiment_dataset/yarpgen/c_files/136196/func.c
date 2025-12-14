/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136196
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((arr_8 [i_0] [i_2]), (((/* implicit */unsigned int) var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_9)))) ? ((-(arr_3 [i_2] [i_1]))) : (arr_8 [i_0 - 1] [i_0 - 1]))) : (((unsigned int) max((arr_1 [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_12 -= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (((var_5) << (((((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])) - (41678))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 344993748U))))))))));
                            arr_12 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_2 - 3] [i_2]) : (arr_3 [i_2 - 4] [i_1])))) ? (min((((/* implicit */unsigned int) (unsigned short)8192)), (arr_3 [i_2 - 2] [i_1]))) : (arr_3 [i_2 + 2] [i_1])));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 2) 
                        {
                            var_14 |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5 - 3] [i_3 - 2] [i_0 + 1] [i_0]))) - (arr_2 [i_0] [i_5 - 1]));
                            arr_15 [i_5] = arr_7 [i_0] [i_2] [i_5 - 3];
                        }
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_20 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_10 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6]))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_6])) || (((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_3] [i_3] [i_6] [i_2]))))))) : (((/* implicit */int) ((unsigned short) min((arr_14 [i_0] [i_1] [i_2] [i_3] [i_6]), (var_8)))))));
                            var_15 = ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_4)) << (((1191831367U) - (1191831357U)))))))) * (((var_7) >> (((max((3949973561U), (arr_2 [i_0] [i_0]))) - (3949973554U))))));
                            var_16 = 344993748U;
                        }
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)15360)) & (((/* implicit */int) arr_9 [i_0])))) << (((((/* implicit */int) ((unsigned short) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_0)))))) - (15725))))))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((var_9) > (((arr_21 [i_0] [i_0] [i_0] [i_0]) << (((((/* implicit */int) var_1)) - (1683)))))));
                        arr_23 [i_7] = ((((/* implicit */_Bool) var_7)) ? (((unsigned int) 4201945473U)) : (((((/* implicit */_Bool) arr_9 [i_0])) ? (4201945473U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                        arr_24 [i_0] [i_1] [i_7] [i_7] [i_7] = ((unsigned short) arr_11 [i_0 - 1] [i_1] [i_2] [i_0] [i_0] [i_7]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_19 = arr_7 [i_2 + 1] [i_2] [i_2];
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            arr_29 [i_0] [i_2] [i_2] [i_8] [i_9] = 93021819U;
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_2 + 1])))), (((/* implicit */int) ((arr_2 [i_0] [i_0 + 1]) > (arr_2 [i_0] [i_0 + 1]))))));
                            var_21 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((arr_27 [i_2] [i_2] [i_2]), (arr_6 [i_0])))) : (((/* implicit */int) min(((unsigned short)3), ((unsigned short)3914))))))) * (3949973561U));
                        }
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((344993730U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (1136361789U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) : (((unsigned int) (unsigned short)48379))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_2))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45672))) - (arr_0 [i_2 + 1] [i_2 - 4])))));
                            arr_34 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_21 [i_8] [i_8] [i_2 + 2] [i_2]), (arr_21 [i_10] [i_2] [i_2 + 2] [i_1]))))));
                            arr_35 [i_0] [i_1] [i_8] [i_0] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 2] [i_1])) ? (((unsigned int) (unsigned short)14117)) : (var_6))), (min((91823137U), (((/* implicit */unsigned int) (unsigned short)50093))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17029))) % (4251229615U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_8))) : (var_6))))))));
                        }
                        var_25 = min((313136682U), (2756611555U));
                        arr_36 [i_0] = ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? ((~(arr_21 [i_0] [i_0 - 1] [i_2] [i_2 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3187511442U)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_26 = arr_19 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11];
                            var_27 = ((unsigned short) max((((/* implicit */unsigned int) max((var_0), (var_4)))), (((unsigned int) 2915503664U))));
                            arr_42 [i_0] [i_1] [i_2] [i_11] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_30 [i_0] [i_0 + 2] [i_0 - 1] [i_2 - 2] [i_11]), (((/* implicit */unsigned int) var_1)))))));
                        }
                        for (unsigned short i_13 = 3; i_13 < 17; i_13 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((min((4201945473U), (arr_19 [i_0] [i_1] [i_1] [i_13 - 3] [i_11] [i_2]))), ((~(1667604341U)))));
                            var_29 = arr_3 [i_11] [i_1];
                        }
                        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            arr_47 [i_0] [i_1] [i_2] [i_11] [i_14] = ((/* implicit */unsigned int) ((unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_14] [i_2])) ? (var_6) : (344993713U))))));
                            var_30 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_21 [i_0] [i_2] [i_2] [i_11])))) ? ((-(344993722U))) : (((var_5) * (arr_5 [i_1] [i_11] [i_14]))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (var_6) : (251658240U)))))) ? (((((unsigned int) arr_14 [i_14] [i_11] [i_2] [i_1] [i_0])) * (min((((/* implicit */unsigned int) var_4)), (2357921497U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))));
                            arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                        }
                        var_32 = var_9;
                        var_33 = ((/* implicit */unsigned int) (unsigned short)65532);
                    }
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        arr_51 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((min((arr_0 [i_0] [i_2]), (((unsigned int) arr_46 [i_0] [i_1] [i_2] [i_15] [i_0] [i_15] [i_2])))) | (max(((-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_0)) ? (2880764042U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        arr_52 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_25 [i_15]);
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1]) : (arr_46 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) ((unsigned short) arr_39 [i_0 + 2] [i_0 + 2]))))))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned int) var_10))));
}
