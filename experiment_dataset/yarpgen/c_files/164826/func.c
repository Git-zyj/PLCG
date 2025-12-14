/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164826
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
    var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) ((unsigned char) var_5))) / (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) (unsigned short)50050)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)244)))) ^ (((arr_2 [i_0] [11ULL]) << (((((/* implicit */int) (signed char)-72)) + (124))))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((72057594037927935ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))))))) ? (13367723373304379077ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1] [i_0])))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_8 [i_1] [(signed char)1] [i_2] = ((/* implicit */unsigned char) (-(arr_4 [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_4 + 1] [i_1] [i_1] [i_1] [5] = ((/* implicit */unsigned short) 114932198U);
                                var_18 = 16777215ULL;
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((arr_2 [i_1] [i_0]) - (((/* implicit */unsigned long long int) var_14))))))));
                                var_20 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) -1865167102)), (-5953115191182989319LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_13 [i_2] [i_2] [i_1] [1LL] [i_1] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < ((-(((/* implicit */int) (_Bool)0))))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)0) || ((_Bool)0)))) < (((/* implicit */int) ((arr_11 [i_1 + 1] [i_1 + 1] [(unsigned short)11] [i_1] [i_1 + 1] [i_1 + 1] [(short)0]) >= (arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [i_0])))))))));
                    arr_15 [i_1] [i_0] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)26112)) - (26103)))))) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        var_23 += ((/* implicit */signed char) var_11);
                        var_24 = ((/* implicit */int) ((unsigned long long int) 2199023255552ULL));
                    }
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((0) >> (((/* implicit */int) (short)12))))) | (((((/* implicit */_Bool) 88503570)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18381))) : (798402858759299615LL))))));
                        var_26 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_7])) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) min((1134907106097364992LL), (arr_25 [7ULL] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                    }
                    for (int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((1371851794415979525ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1854)))))) - (((/* implicit */int) (unsigned short)65535)))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_8] [1LL] = ((/* implicit */short) ((((arr_22 [i_0] [i_0] [i_1] [i_5] [i_8] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) >= (((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_29 [i_0] [i_0] [i_5] [2ULL] [i_5] [i_8]))))))));
                            var_28 = ((/* implicit */short) ((max((((arr_10 [i_9] [i_5] [i_1 + 1] [i_0]) + (((/* implicit */unsigned int) arr_26 [i_8])))), (((/* implicit */unsigned int) -588722352)))) != (((unsigned int) arr_30 [i_0] [i_1 + 1] [i_0] [i_1] [i_8 + 1] [i_8 + 2] [5]))));
                        }
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_1] [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_8 - 1])) / (((/* implicit */int) arr_24 [i_1] [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 2]))))) ? (((/* implicit */int) arr_24 [i_1] [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 1])) : (((((/* implicit */int) arr_24 [i_1] [i_8 - 1] [i_8 + 3] [i_8 - 1] [i_8 + 3])) >> (((((/* implicit */int) arr_24 [i_1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) - (56784)))))));
                    }
                    for (long long int i_10 = 3; i_10 < 11; i_10 += 4) 
                    {
                        arr_35 [i_1] [(unsigned short)10] [i_1] [7LL] [i_10 - 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0LL)))) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9190)))));
                        arr_36 [i_1] [i_10] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_11)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10 - 3] [i_1 + 1] [i_1 + 1] [i_0])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (unsigned char)7);
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) 1669909123)) ? (7382979849433960907ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2466682746257929589ULL) != (((/* implicit */unsigned long long int) arr_25 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) arr_32 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_0])) ? (arr_32 [i_1] [i_1 + 1] [i_1] [(_Bool)1] [i_0]) : (((/* implicit */int) (unsigned char)157)))))))));
                    }
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        arr_43 [i_12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_38 [i_0]);
                        var_33 -= ((int) ((9922852252989016031ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (long long int i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        arr_47 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_24 [i_1] [i_0] [10ULL] [10ULL] [i_1])) >> (((((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_0] [i_5] [i_13 - 2]))) - (148))))));
                        var_34 |= ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0]))) - (var_11))) >> (((5731465714451274230ULL) - (5731465714451274170ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((576460752303423472ULL), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_40 [i_0] [9] [i_5] [i_13 + 2]))))))));
                    }
                }
                for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    arr_51 [i_0] [i_1] [i_14] = ((/* implicit */_Bool) (short)-14700);
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 1103842851))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)6)) >> (((arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) - (5734235685639796424LL)))))) : (((arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) << (((((/* implicit */int) arr_49 [i_1 + 1] [6LL] [i_1 + 1] [i_1 + 1])) - (40768)))))));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_25 [i_0] [i_0] [i_1] [i_14]) ^ (((/* implicit */long long int) arr_32 [i_0] [i_1 + 1] [i_1 + 1] [i_14] [i_14]))))), (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_14])) : (var_15)))))) || (((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)0))))))))))));
                }
                for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    var_37 -= ((int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_0 [i_15] [i_15]))))) : (((7246152017066682368ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30292)))))));
                    var_38 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_15] [i_15] [i_1]))) != (min((((unsigned int) var_2)), (((/* implicit */unsigned int) var_3))))));
                }
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) var_10))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */unsigned int) (+(347245011)))) == (var_7)))));
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43953)) & (((/* implicit */int) (_Bool)1))));
}
