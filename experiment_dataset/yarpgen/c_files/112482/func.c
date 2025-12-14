/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112482
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
    var_11 = ((/* implicit */int) min(((_Bool)1), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)34571)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_4))))));
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) - (((unsigned int) (_Bool)1)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63149)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)-18)))))));
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_6 [i_0] [(_Bool)1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 1076055995)) ? (((/* implicit */int) arr_2 [i_2] [(unsigned char)6] [i_0])) : (((/* implicit */int) (unsigned short)23540)))) : (((/* implicit */int) max((arr_2 [i_1] [20] [i_3]), (((/* implicit */unsigned char) (_Bool)1))))))), ((-(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [(_Bool)1] [i_4] = (-(((/* implicit */int) (_Bool)1)));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) min(((-(((int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_1])))), ((-(((/* implicit */int) var_1))))));
                        }
                        var_14 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)62))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_1] [20LL] [(unsigned char)13] = (~((~(((/* implicit */int) var_4)))));
                            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_5] [i_3] [(unsigned char)22] [(unsigned char)1] [i_0]))));
                            var_16 -= ((((((/* implicit */int) (unsigned short)21)) != (((/* implicit */int) arr_1 [i_0])))) ? ((~(((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) ((signed char) (signed char)-8))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        var_17 = ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)50)) : (1076055990))) : (((/* implicit */int) ((max((arr_16 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)39)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-1)) : (1076056022))))))));
                        arr_20 [(unsigned short)18] [(unsigned short)18] [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_16 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]);
                    }
                    arr_21 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)3))))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-13))))) ? (((/* implicit */int) ((unsigned char) (signed char)28))) : (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1])))))));
                    arr_22 [12] [12U] [i_1] [(unsigned char)22] = -802607741;
                    /* LoopSeq 4 */
                    for (int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_4)), ((-(arr_14 [i_0] [i_1] [i_7 + 1] [i_1] [i_7 + 1])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 3; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            var_19 = min((max((min((((/* implicit */unsigned short) (signed char)-17)), (arr_28 [i_0] [i_1] [i_0] [i_7] [20]))), (((/* implicit */unsigned short) arr_1 [i_0])))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [i_8 - 1] [i_8 + 1] [i_7 + 1] [i_7 + 1])))));
                            arr_29 [i_0] [i_1] = ((/* implicit */unsigned int) arr_25 [i_7] [i_7] [i_7] [i_7] [i_7 + 2]);
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_2] [i_1] [i_9] [(unsigned char)20] = ((/* implicit */long long int) ((signed char) ((unsigned int) var_7)));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(8355840)))) ? (arr_10 [i_0] [i_7 + 2] [i_2] [i_9 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_9 + 1] [i_1])))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(11289266940353010428ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)28)) * (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(unsigned char)9])) ? (arr_15 [i_7] [i_7] [i_7 + 2] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            arr_37 [14] [i_1] [i_1] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15U)) ? (max((((/* implicit */unsigned long long int) (unsigned short)19530)), (994804484872292017ULL))) : (((/* implicit */unsigned long long int) 2421697960U))));
                            arr_38 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] = ((long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (arr_23 [i_0] [i_1] [i_0] [i_1])));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        arr_41 [21] [21] [i_1] [i_1] [21] [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)134)), (max((((((/* implicit */_Bool) arr_32 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) : (arr_10 [i_0] [i_0] [i_1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) var_10))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            arr_44 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2] [i_0] [i_12])) ? (-6549384579511155752LL) : (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_2] [i_11] [i_11]))));
                            arr_45 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1539590182) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))))) ? (((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)74)) || (((/* implicit */_Bool) 3038185371U))))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(126660919)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(155542477U)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (signed char)20))))) ? (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_11]))) : (((/* implicit */unsigned long long int) (-(arr_31 [i_0] [i_1] [i_1] [i_1] [i_13]))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_2 [i_1] [i_2] [i_11])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_13])))) - (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))));
                            arr_48 [i_2] [(unsigned char)1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_7);
                            arr_49 [i_1] [i_1] [i_1] [i_2] [i_11] [21ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(-1075265073606433738LL))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-31)))))))) ? (((/* implicit */unsigned int) ((int) ((arr_4 [i_1] [i_2] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) (signed char)-108)))))) : (((unsigned int) var_7))));
                        }
                        var_24 = max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) ((long long int) (unsigned short)46895))) ? (min((((/* implicit */long long int) var_1)), (-2117925870227558303LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)2))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            arr_55 [i_0] [7] [i_1] [i_0] [i_1] [i_15] = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4294967287U)) : (18446744073709551606ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(447741201)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-3)) < (((/* implicit */int) var_6)))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (arr_16 [i_1] [i_1] [i_2] [i_15] [7U] [i_14]))))))));
                            arr_56 [i_0] [(unsigned short)1] [(unsigned short)13] [i_1] [i_15] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (arr_14 [i_0] [i_1] [i_2] [i_1] [i_14]) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_14] [i_1])))), (arr_14 [i_0] [i_1] [i_2] [i_1] [i_15])));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((max(((unsigned char)151), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) arr_4 [i_1] [i_1] [i_15])))))) * (min((min((((/* implicit */unsigned int) (_Bool)1)), (var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)90)))))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_3))), (((/* implicit */long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_52 [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : ((~((~(((/* implicit */int) var_4)))))))))));
                            var_27 ^= ((/* implicit */unsigned char) max((var_1), ((_Bool)1)));
                        }
                        for (int i_16 = 3; i_16 < 20; i_16 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) var_4);
                            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) arr_19 [(unsigned char)2] [i_16 - 1] [i_16 + 1] [i_1])) : (((/* implicit */int) arr_19 [i_1] [i_16 + 1] [i_16 + 1] [i_1]))))));
                        }
                        for (int i_17 = 3; i_17 < 20; i_17 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) (((((_Bool)1) && (max(((_Bool)1), ((_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_2] [i_14] [i_17 - 3])) ? (arr_40 [i_0] [i_2] [i_0] [i_14] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))))));
                            var_31 += ((/* implicit */signed char) (unsigned char)231);
                            arr_61 [(unsigned short)2] [i_17] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) arr_54 [i_0] [i_0] [i_2] [i_14] [i_17])), (914800468474763573LL))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)23)) ? (arr_42 [i_17]) : (((/* implicit */int) arr_59 [i_1])))) & (((/* implicit */int) arr_35 [10] [i_1] [i_2] [11U] [i_1]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_17] [i_17] [i_17] [i_17] [i_17])) || (((/* implicit */_Bool) 328173346U))))), (max((((/* implicit */long long int) (signed char)-81)), (arr_23 [i_2] [i_1] [i_2] [i_0])))))));
                        }
                        for (int i_18 = 3; i_18 < 20; i_18 += 4) /* same iter space */
                        {
                            arr_66 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_18] [i_18] [i_18] [i_18] [i_18 + 2] [i_18 + 1])) ? (arr_15 [i_18] [i_18] [i_18] [i_18] [(unsigned char)22] [i_18 - 3]) : (((/* implicit */unsigned long long int) arr_40 [i_18] [i_18 + 3] [i_18] [20U] [(unsigned char)3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_36 [(unsigned char)8] [(unsigned char)8] [i_2]), (((/* implicit */unsigned long long int) arr_46 [i_18] [i_1] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [i_14] [i_1])), ((unsigned char)117)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)17)) && (((/* implicit */_Bool) (signed char)-17)))))))) : (max((((/* implicit */unsigned int) ((int) (signed char)1))), (max((3964475339U), (((/* implicit */unsigned int) arr_30 [i_0] [i_1] [i_0] [i_1] [i_1]))))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 136339441844224ULL)) ? (16383) : (469762048)));
                            arr_67 [i_1] = ((/* implicit */unsigned char) (-(13389103U)));
                        }
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2180995712U)) ? ((-(4167987748U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)22)))))));
                    }
                    for (unsigned char i_19 = 3; i_19 < 21; i_19 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) (~((~((-(((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (long long int i_20 = 4; i_20 < 20; i_20 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned short) min(((-(1034549451U))), (((/* implicit */unsigned int) arr_64 [i_0] [i_1] [i_2] [i_19] [i_0]))));
                            var_36 = ((((/* implicit */int) (unsigned char)73)) > (((/* implicit */int) (_Bool)1)));
                            var_37 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_0] [i_19 - 2] [i_20 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12727))) : (5U)))) || (((((/* implicit */int) (unsigned char)161)) == (arr_69 [i_2] [i_19 - 2] [i_20 - 1] [i_0])))));
                        }
                    }
                }
            } 
        } 
    } 
}
