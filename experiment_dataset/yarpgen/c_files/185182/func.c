/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185182
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((((((/* implicit */_Bool) (unsigned char)91)) ? (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17258))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17253))))) <= ((-(((var_14) + (((/* implicit */long long int) 1517578949U)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : (max((((/* implicit */unsigned int) var_10)), (2777388354U)))))), (((((/* implicit */long long int) var_2)) / (max((((/* implicit */long long int) arr_2 [i_1])), (arr_0 [i_0] [i_1])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [(unsigned short)14] [13U] [i_0] = ((/* implicit */long long int) var_8);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) arr_12 [10LL] [i_1] [i_2 + 1] [i_3]))), (var_9)));
                        arr_15 [15LL] [i_1] [15LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (unsigned short)17261)))) : (arr_2 [i_0])))) <= ((+(var_11)))));
                    }
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    arr_18 [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) (unsigned short)16610))))) ? (((((/* implicit */_Bool) (unsigned short)17254)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4])))))));
                    arr_19 [i_0] = ((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_0]) ? (((((/* implicit */int) arr_16 [i_0] [(unsigned short)15] [i_0])) * (((/* implicit */int) arr_16 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_25 [i_5 - 2] [i_4] [i_0] = ((/* implicit */unsigned short) ((max((var_12), ((-(var_2))))) & (max((var_9), (((/* implicit */int) arr_20 [0LL] [i_5 + 1] [i_5] [i_5] [12LL]))))));
                                arr_26 [i_0] [i_1] [i_4] [i_1] [i_4] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_12)))) && (arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 4] [i_5 + 1])))) <= ((-(((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */int) var_8)) : (var_9)))))));
                                arr_27 [i_0] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */short) (-(max((((/* implicit */long long int) arr_12 [2] [i_4] [i_5 + 2] [i_5 - 2])), (var_14)))));
                                arr_28 [i_5] [i_6] = var_1;
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_31 [i_0] [i_7] [i_7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_3 [i_0]))))));
                    arr_32 [i_0] [i_7] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_24 [i_7] [i_7] [i_1] [i_0])), (var_5)))) ? (min((min((((/* implicit */int) (unsigned char)69)), (7))), (var_12))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_24 [i_0] [i_1] [i_7] [i_0]))))));
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_35 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (unsigned short)17257)), (arr_12 [i_7] [i_1] [i_7] [i_8]))), (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_7] [i_8])) ? (arr_12 [i_0] [9LL] [(_Bool)1] [i_0]) : (arr_12 [i_1] [i_1] [i_7] [i_8])))));
                        arr_36 [i_0] [(_Bool)1] [i_8] [i_7] = ((/* implicit */int) 9223372036854775793LL);
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        arr_40 [i_1] [i_7] [i_7] = ((/* implicit */long long int) (((-(min((1190219344), (70720413))))) / ((+(((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) (unsigned short)7513)) : (var_0)))))));
                        arr_41 [i_0] [i_0] [i_1] [(short)14] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_6)))) ? (arr_38 [i_0] [i_1] [(unsigned short)12] [i_9] [i_9] [i_1]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)17253)) : (((/* implicit */int) (unsigned short)48278))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)7509)) : (arr_30 [i_0])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [(unsigned short)2] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) -258926335)) : (1517578949U)))) : (((-5723664790487723869LL) + (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                        arr_42 [(_Bool)1] [(unsigned char)13] [i_7] [(_Bool)1] = ((/* implicit */_Bool) ((arr_20 [i_0] [(short)14] [i_7] [i_9] [(unsigned short)13]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7537))) <= (max((((/* implicit */long long int) var_7)), (-8641373693964534768LL))))))) : (((arr_12 [i_0] [i_1] [i_7] [i_9]) * (((/* implicit */unsigned int) arr_30 [i_1]))))));
                        arr_43 [i_7] [i_1] [i_7] [i_9] = ((/* implicit */int) arr_16 [i_0] [i_7] [i_9]);
                    }
                    for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        arr_46 [(unsigned char)9] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) ^ (arr_12 [i_10 + 2] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (+(arr_37 [(unsigned short)13] [i_1] [10U])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))) : (((((arr_39 [i_0] [i_0] [i_1] [i_7] [8LL] [i_10]) + (2147483647))) << (((var_12) - (1427414656))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [3] [i_1] [4LL] [i_10 - 1] [i_0] [i_1])) ? (var_3) : (((/* implicit */int) var_4))))) ? (max((((/* implicit */int) arr_5 [i_1])), (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (min((var_0), (var_3)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            arr_51 [i_0] [i_0] [0] [i_0] [i_0] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */_Bool) var_10);
                            arr_52 [i_0] [i_0] [i_1] [i_7] [i_10] [i_11] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_5 [i_0])))));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_55 [i_0] [i_1] |= ((/* implicit */_Bool) min((min((((/* implicit */int) var_4)), (arr_2 [i_0]))), ((((-(var_3))) / ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_7] [i_12]))))))));
                        arr_56 [i_12] [i_1] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)11958))));
                        arr_57 [i_0] [i_0] [i_7] [i_1] [i_1] = (((-(((/* implicit */int) ((arr_39 [i_1] [i_1] [i_7] [i_12] [i_0] [i_1]) == (((/* implicit */int) var_10))))))) >> (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_13))))) ? (((var_9) * (((/* implicit */int) var_8)))) : (var_3))));
                    }
                }
                for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_61 [i_13] = (((-(arr_0 [i_0] [i_1]))) | (((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)7509)) - (7474))))));
                    arr_62 [i_0] = ((/* implicit */signed char) (-((((-(7))) ^ (max((((/* implicit */int) arr_17 [i_0] [i_0] [(signed char)11])), (arr_30 [i_0])))))));
                    arr_63 [i_13] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_48 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_1] [10LL] [i_13]);
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 15; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        {
                            arr_70 [i_0] [i_1] [1] [i_15] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) != ((-(((((/* implicit */_Bool) arr_67 [i_0] [(unsigned short)10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_14] [i_15]))))))));
                            arr_71 [i_15] [i_14] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_64 [i_0]))) ? (((int) var_3)) : (((/* implicit */int) ((arr_48 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) var_12)))))));
                            arr_72 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                            arr_73 [i_1] = ((/* implicit */signed char) (unsigned short)7525);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */long long int) (-((-(max((var_3), (((/* implicit */int) var_10))))))));
    var_17 = var_1;
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        for (int i_17 = 2; i_17 < 19; i_17 += 4) 
        {
            {
                arr_80 [(unsigned short)3] [i_17] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_76 [i_16]))))))));
                arr_81 [i_16] [i_17 - 1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) max((var_11), (var_14)))) && (arr_75 [i_17 + 1]))));
                arr_82 [i_16] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_78 [i_16] [i_16])) : (((/* implicit */int) arr_74 [i_16])))));
            }
        } 
    } 
}
