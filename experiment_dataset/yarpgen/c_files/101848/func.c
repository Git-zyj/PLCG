/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101848
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
    var_10 = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (var_5)));
    var_11 = ((/* implicit */unsigned long long int) max(((signed char)127), ((signed char)126)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_0]))))) | (((/* implicit */int) (short)-26513)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) arr_1 [i_3]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] &= ((/* implicit */int) ((unsigned long long int) ((arr_7 [i_1] [i_4]) << ((((~(((/* implicit */int) (unsigned char)181)))) + (193))))));
                            var_14 = ((/* implicit */unsigned int) 2);
                            var_15 = ((/* implicit */int) arr_1 [i_4]);
                            var_16 = ((/* implicit */short) arr_1 [i_0]);
                            arr_14 [i_2] [i_3] = ((/* implicit */long long int) ((short) ((unsigned int) arr_7 [i_0] [i_1])));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */short) ((unsigned char) max((min((((/* implicit */int) var_6)), (arr_2 [i_2] [i_2]))), (arr_2 [i_2] [9U]))));
                            arr_17 [i_0] [i_3] [i_3] [0ULL] [i_5] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_15 [i_0] [i_0]))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_3] [i_3] [i_6] [i_0] = arr_15 [i_3] [i_3];
                            arr_22 [i_6] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (unsigned char)114)) << (((/* implicit */int) (_Bool)1)))));
                            arr_23 [i_6] &= ((/* implicit */unsigned long long int) (+(((int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_6]))));
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */short) 3027975175U);
                            var_20 = ((/* implicit */unsigned int) max(((short)0), (((/* implicit */short) arr_6 [(signed char)11] [i_3] [i_7]))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(arr_8 [i_7] [i_3] [i_0] [i_7] [i_7]))))));
                            arr_26 [i_0] [i_3] [i_2] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_3] [i_1] [i_1] [i_3])), ((+(arr_1 [i_2])))))) ? (((((/* implicit */_Bool) min((4954657878726702771LL), (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2]))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_0] [i_1] [i_3] [i_1] [i_3] [i_3])) + (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_1] [i_0]))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] [i_1])) << (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) var_0)) == (-1874395482)))))))));
                        }
                    }
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_7)), (arr_19 [i_1] [i_8 + 1] [i_8 + 1] [i_8] [i_0])))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((min((arr_9 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_0]), (((/* implicit */int) var_4)))) + (2147483647))) >> (((min((arr_19 [i_2] [i_8 - 1] [i_2] [i_1] [i_2]), (((/* implicit */unsigned long long int) -1345977227)))) - (9877764066526705505ULL)))));
                            arr_31 [i_1] [i_2] [i_9] = ((/* implicit */int) (unsigned short)0);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            arr_34 [i_10] [i_8 + 1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)236);
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-91))) ? ((~(((((/* implicit */int) (short)-21048)) + (2030385456))))) : ((-(arr_33 [i_0] [i_8 - 1] [i_0] [i_8] [i_0] [i_8 + 1])))));
                        }
                        for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_1] = ((/* implicit */_Bool) (signed char)50);
                            var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(161674010U)))) ? (((/* implicit */int) (unsigned char)97)) : (((((/* implicit */int) (signed char)-14)) | (((/* implicit */int) arr_16 [i_8 + 1] [i_2] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1]))))));
                            arr_38 [i_0] [i_1] [i_2] [i_8 + 1] [i_11] = ((/* implicit */short) (~(((/* implicit */int) (signed char)109))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)63508)))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0])) ? (-7) : (var_3))) : (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) ((signed char) arr_33 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_0]))))))));
                        }
                        for (unsigned int i_12 = 1; i_12 < 10; i_12 += 4) 
                        {
                            arr_43 [i_0] [i_0] [i_8 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_2] [i_8] [i_8] [i_8] [2U] [2U] [i_8 - 1]))));
                            arr_44 [i_12] [i_8] [i_2] [i_1] [i_0] = (short)21047;
                            arr_45 [(unsigned char)10] [i_0] [i_1] [i_2] [(unsigned char)10] [i_12] = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)21636))))), ((+(arr_35 [i_0] [i_0] [i_2] [i_2] [i_2] [i_8 + 1] [i_12]))))));
                        }
                        arr_46 [i_0] [i_0] [i_2] [i_8 + 1] = ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || (((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_1] [i_2] [i_8]))))))) <= (((/* implicit */int) (unsigned char)245))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_27 = arr_42 [i_0] [i_0] [i_2] [i_8] [i_1] [i_8 + 1];
                            arr_50 [i_2] [i_8 + 1] [3U] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) arr_35 [9U] [i_1] [i_1] [i_2] [i_8] [i_8 + 1] [i_13])) ? (((/* implicit */int) (unsigned short)25327)) : (((/* implicit */int) arr_48 [i_0])))) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) (short)0))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-97)) : (arr_9 [i_0] [i_1] [2LL] [i_13])));
                        }
                    }
                    for (unsigned char i_14 = 3; i_14 < 11; i_14 += 4) 
                    {
                        arr_53 [i_14] [i_14] [i_1] [i_14] = ((/* implicit */short) (-(((/* implicit */int) (!(arr_6 [i_14 - 3] [i_14] [i_14 - 2]))))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_14] [i_0] [i_0] [i_1] [i_14 + 1] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 3; i_15 < 8; i_15 += 4) 
                        {
                            arr_57 [i_15] [i_14] [i_2] [i_0] [i_15 - 2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)45304)))) <= (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_15]))) : (5764500846149703226ULL)))))), ((~(arr_8 [i_15 - 3] [i_15] [i_14] [i_15 + 4] [i_14 - 2])))));
                            arr_58 [i_14] [i_2] [i_15] = ((/* implicit */_Bool) (unsigned short)56070);
                        }
                        var_30 = min((((/* implicit */unsigned int) arr_28 [i_14] [i_2] [i_0] [i_0])), (var_9));
                    }
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_18 [2U] [i_0] [i_1] [i_2] [i_16])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_16] [i_2])))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_25 [10U] [i_0] [10U] [i_1] [i_2] [i_2] [i_16]), (arr_25 [9ULL] [(signed char)4] [i_1] [i_1] [i_2] [i_2] [i_16])))) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [(unsigned char)0])) : (min((1032958823), (((/* implicit */int) (unsigned char)19))))));
                        arr_61 [i_0] [i_1] [i_2] [i_16] = ((/* implicit */int) min((((/* implicit */short) ((signed char) arr_56 [i_0] [i_2] [i_0]))), (((short) (~(8))))));
                    }
                    var_33 = ((/* implicit */int) ((_Bool) (+(arr_39 [i_2] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        arr_62 [6] [6] = ((/* implicit */signed char) (-(1081896269U)));
    }
    var_34 += ((/* implicit */unsigned int) 0LL);
}
