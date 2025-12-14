/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137643
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
    var_19 = var_16;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_20 *= (unsigned char)19;
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((arr_4 [i_0]) ? (var_5) : (((/* implicit */int) (unsigned char)236))))));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) arr_5 [13] [13])))))));
                        var_22 |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_10 [i_4])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        var_23 += ((/* implicit */short) var_3);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (max((var_13), (((/* implicit */int) var_15)))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (unsigned char)10))));
                            arr_21 [i_0] = ((/* implicit */unsigned char) var_9);
                            var_26 = ((/* implicit */int) min((var_26), (((arr_17 [i_6 - 1] [i_6 + 1] [i_6]) << (((((/* implicit */int) ((unsigned char) var_18))) - (209)))))));
                        }
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_27 = (~(((/* implicit */int) (short)7)));
                            arr_24 [i_1] = var_3;
                        }
                        arr_25 [i_0] [i_1] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)-25)) * (((/* implicit */int) (short)-10616)))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_6])) : (((/* implicit */int) arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_26 [i_0] [i_1] [i_1] [i_6 - 1] [i_6] [i_0] |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) var_9)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) arr_19 [i_2])) ? (((((/* implicit */_Bool) -267842246)) ? (((/* implicit */int) (unsigned char)194)) : (24576))) : (((/* implicit */int) max(((short)384), ((short)7))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
                        {
                            arr_32 [i_9] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((int) var_12)) - (((/* implicit */int) var_8))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_16)))) : ((-(var_12)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_11 = 2; i_11 < 18; i_11 += 1) 
                        {
                            arr_37 [i_0] [i_2] [i_9] [i_11] = ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (signed char)52))))) ? (((((/* implicit */_Bool) arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1] [i_11])) ? (arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1] [(signed char)18]) : (arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1] [i_11 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_9] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))) : ((-(((/* implicit */int) (unsigned char)19)))))));
                            var_29 = ((/* implicit */short) (unsigned char)194);
                            var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 608968707)) ? (((int) min((((/* implicit */unsigned char) arr_9 [i_0] [(unsigned short)6] [i_0] [i_0])), (var_7)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 2797406913U)))))))));
                        }
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)93))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) < (var_12)))) : (((/* implicit */int) (unsigned short)7421)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 2; i_12 < 19; i_12 += 1) 
                        {
                            arr_41 [i_0] [i_1] [i_2] [i_1] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) ((-4213435584935294102LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))))) : (((((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1] [i_2] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) ((short) (+(((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_2] [i_2] [i_12]))))))));
                            arr_42 [i_12] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), (max((var_1), (((/* implicit */long long int) var_9))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_4))));
}
