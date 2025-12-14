/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124982
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48546)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned short)11264))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned char)133))))) : (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))));
                    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58648)) + (((/* implicit */int) (unsigned short)34208))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) arr_4 [i_0] [i_0]))))))) ? (((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)155)))) & ((-(((/* implicit */int) arr_0 [i_0])))))) : ((-(((/* implicit */int) (unsigned char)45))))));
                    arr_6 [i_1] [i_1] [i_2] [i_2 - 2] |= ((((/* implicit */int) arr_0 [i_0])) < (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) max(((unsigned char)243), ((unsigned char)118)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)140))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_7 [(unsigned char)1] [i_1 - 1] [i_3] [i_3 + 2])) : (((/* implicit */int) (unsigned char)36))));
                            arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (_Bool)1))));
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_4] [i_3 + 3] [i_3] [i_2] [i_1]))));
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_4 [i_2] [(unsigned short)9])) : (((/* implicit */int) (unsigned char)145)))) / (((/* implicit */int) var_5))));
                        }
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned short)25102))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_5] [i_3 + 3] [i_2] [i_1] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)29769)) : ((~(((/* implicit */int) (unsigned char)215))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((arr_18 [i_1] [i_1 + 1] [i_2 - 2] [i_2] [i_2] [i_3 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)1519)))))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-(((/* implicit */int) (unsigned char)203)))) <= ((+(((/* implicit */int) (unsigned short)40433)))))))));
                            var_22 *= var_12;
                            arr_22 [i_3] [i_1] [(_Bool)1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_3 [i_1 - 1] [i_2 - 2])) ^ (((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1])))), ((-(((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 2]))))));
                        }
                        arr_23 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)156))))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned short) arr_9 [i_2]);
                        arr_27 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_20 [(_Bool)1] [i_2] [i_1] [i_7 + 2] [i_7])))) | (max(((+(((/* implicit */int) (unsigned char)127)))), (((/* implicit */int) min(((unsigned char)23), (((/* implicit */unsigned char) var_1)))))))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        arr_31 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)221)), ((unsigned short)57072)));
                        arr_32 [(unsigned short)10] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)152))))) < (((/* implicit */int) arr_10 [i_8] [(unsigned short)11] [i_1] [i_8] [i_8] [i_1]))))), (min(((+(((/* implicit */int) (unsigned char)110)))), (((/* implicit */int) ((_Bool) (unsigned short)54379)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0]))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_37 [i_0] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)52926))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) arr_9 [i_9]))));
                            arr_38 [(_Bool)1] [i_1] [i_2] [i_2] [i_10] &= ((/* implicit */unsigned char) (unsigned short)28047);
                            var_24 = ((/* implicit */unsigned short) (unsigned char)145);
                        }
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            var_25 = ((_Bool) (unsigned char)234);
                            arr_41 [i_0] [i_9] [i_2] [(unsigned char)8] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_4 [(unsigned char)16] [(unsigned char)16])) : (((/* implicit */int) (_Bool)0)))));
                        }
                        arr_42 [i_0] [i_9] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_2 + 2] [i_1 + 1] [i_1] [i_0] [i_0])) == (((/* implicit */int) arr_19 [i_0] [i_1] [i_9]))));
                        arr_43 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_2 - 2] [i_9]))));
                    }
                }
            } 
        } 
    } 
}
