/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116804
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
    var_16 = ((/* implicit */unsigned int) ((long long int) min(((unsigned short)24021), (((/* implicit */unsigned short) max((var_15), (((/* implicit */signed char) var_1))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 4294967295U)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */short) var_6);
        arr_4 [i_0] = ((/* implicit */long long int) var_4);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] = (~(((((/* implicit */_Bool) ((int) arr_0 [i_2]))) ? (((((/* implicit */_Bool) 778624590)) ? (arr_7 [i_1]) : (var_10))) : (((/* implicit */int) arr_8 [i_0 - 2])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((min((((/* implicit */int) (signed char)-124)), ((-(((/* implicit */int) (short)-17966)))))) > (min((var_6), (((/* implicit */int) max(((_Bool)1), (var_1))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned char)127))))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_18 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (-894226315692612706LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [7U] [i_1])) : (((/* implicit */int) var_1)))) << ((((((~(((/* implicit */int) var_7)))) + (105))) - (12))))))));
                            arr_19 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)6] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (arr_7 [i_0 - 2]) : (arr_7 [i_0 + 1]))) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_4] [i_2]))));
                            arr_20 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)170)), (arr_8 [i_0])))) ? (((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (var_6) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_14))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-16718)))))));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_25 [i_2] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) == (max((((/* implicit */unsigned int) var_10)), (var_13))))));
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned short) 8441710);
                            arr_27 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0 - 1] [i_1 + 1] [i_2] [i_3] [i_2])) + (((/* implicit */int) arr_24 [i_0 + 1] [(unsigned short)9] [i_2] [i_3] [i_5]))))) ? ((-(((/* implicit */int) arr_24 [i_5] [i_3] [i_2] [i_1] [14LL])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_24 [i_2] [i_3] [i_2] [i_1 - 1] [i_0 + 1])), (var_15))))));
                            arr_28 [i_0] [i_0] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) var_15);
                        }
                        for (int i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            arr_32 [i_3] [i_1] [i_3] [i_2] [i_6 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)65532))))))) ? (min((((int) 1115072592)), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_2] [i_2] [i_6])) && (((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_6] [i_3] [i_1] [i_3]))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_1] [i_2] [6U] [i_1])) : (((/* implicit */int) (unsigned char)113))))));
                            arr_33 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (min((((var_12) ? (var_11) : (((/* implicit */long long int) arr_1 [i_3])))), (((/* implicit */long long int) max(((short)-5837), (var_14))))))));
                            arr_34 [i_2] [i_3] [i_2] [i_1 - 1] [i_2] = ((((/* implicit */_Bool) (short)-29815)) ? (max((((/* implicit */unsigned int) ((arr_13 [i_3] [i_3] [i_2] [i_3]) <= (var_10)))), ((~(1553875968U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_3] [i_6 - 3]))));
                            arr_35 [i_2] [i_3] [i_2] [i_2] [4] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]))) : (arr_30 [i_2] [i_1] [(short)2])));
                            arr_36 [i_0] [2ULL] [i_2] [i_0] [i_0 - 1] = (+(((/* implicit */int) min((arr_9 [i_0] [i_2] [i_2] [i_6 - 3]), (((unsigned char) var_10))))));
                        }
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_40 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */long long int) var_6);
                            arr_41 [i_0] [i_1] [i_0] [i_3] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (var_11) : (268435456LL)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_3] [i_3] [i_2] [i_2] [i_2]))))) ? (((268435451LL) * (((/* implicit */long long int) 1375506713)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))))));
                            arr_42 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1889696177)))) ? (((((/* implicit */_Bool) arr_29 [i_0])) ? (var_10) : (arr_13 [i_0] [(unsigned char)13] [(unsigned char)0] [(unsigned char)0]))) : (((/* implicit */int) var_1)))))));
                            arr_43 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_2);
                            arr_44 [i_2] = ((/* implicit */int) min((max((((/* implicit */long long int) (_Bool)1)), (arr_30 [i_2] [i_0] [i_2]))), (((/* implicit */long long int) max((((/* implicit */int) var_5)), (min((431708403), (((/* implicit */int) (unsigned short)43030)))))))));
                        }
                    }
                    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_49 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)149);
                            arr_50 [i_2] [i_0] [i_1] [(short)0] [i_2] [i_8] [12U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))))), (max((1134226542696667515ULL), (((/* implicit */unsigned long long int) ((short) arr_37 [i_2] [i_2] [i_2] [i_8 - 2])))))));
                            arr_51 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_5 [16U] [i_1 + 1]));
                        }
                        arr_52 [i_2] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) 643138728)) ? (((/* implicit */int) var_12)) : (var_6))), (((/* implicit */int) ((unsigned short) (signed char)-104))));
                    }
                    arr_53 [i_2] [i_1] [i_2] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_2] [(signed char)2])) ? (max((arr_7 [i_0]), (-431708429))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))));
                }
            } 
        } 
        arr_54 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_30 [i_0] [i_0 - 1] [i_0 - 1]) : (arr_30 [i_0] [i_0 - 2] [i_0])))) ? (min((max((var_0), (((/* implicit */unsigned long long int) (short)-5827)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */unsigned long long int) 4186505826510320380LL))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                {
                    arr_60 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_11] [i_10] [i_0 + 1])) * (((/* implicit */int) arr_6 [i_0] [i_10] [i_10]))))) ? ((+(((/* implicit */int) arr_38 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))) : (arr_48 [i_0 - 1] [i_10] [i_11] [i_0] [i_10])));
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 18; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                arr_65 [i_11] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)10600)))))) - (((/* implicit */int) (short)6246))));
                                arr_66 [i_0] [i_10] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2340871531U)) ? (((/* implicit */int) var_15)) : (431708435)));
                            }
                        } 
                    } 
                    arr_67 [i_11] [i_11] [i_11] = ((/* implicit */int) arr_38 [i_0] [(unsigned char)4] [(unsigned char)4] [i_10] [(short)0] [i_11] [i_10]);
                    arr_68 [i_11] = ((/* implicit */int) min(((+(2657934496U))), (arr_58 [i_0] [i_10] [i_11])));
                }
            } 
        } 
    }
}
