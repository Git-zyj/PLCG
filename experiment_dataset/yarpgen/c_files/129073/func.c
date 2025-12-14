/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129073
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = min((arr_3 [i_0] [7] [(unsigned char)2]), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -1LL))))))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_7 [16ULL] [9] [9] [13U] [i_0] [i_4]);
                                var_19 *= ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (unsigned short)42929)) : (((/* implicit */int) (unsigned char)61))))) < (((((/* implicit */_Bool) (unsigned short)4095)) ? (3690994135U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_17 [i_0] = ((max((arr_15 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)185)) >> (((arr_8 [i_0] [i_2]) - (128304947333698899ULL)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) arr_5 [(_Bool)1] [i_0] [i_5 + 1] [i_5])))))));
                                arr_18 [i_0] [(unsigned short)18] [(unsigned short)18] [i_0] [i_0] = ((/* implicit */signed char) var_16);
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= ((~(((((/* implicit */_Bool) arr_2 [(_Bool)0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1312419310U)))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        arr_30 [i_9] = ((/* implicit */signed char) arr_3 [i_7] [i_9] [i_10]);
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 1; i_11 < 23; i_11 += 2) 
                        {
                            arr_33 [i_7] [i_8] [i_9] [i_7] [i_9] [i_7] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)182))))), ((+(255U))))))));
                            var_22 -= ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) arr_3 [i_8] [i_11 - 1] [12U])));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25)))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 23; i_12 += 1) 
                        {
                            arr_38 [i_9] [i_9] [i_10] [(unsigned char)17] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_7 + 3] [i_10]))));
                            var_24 = ((/* implicit */unsigned short) ((arr_8 [i_8] [(short)8]) <= (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_7))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) 
                        {
                            arr_41 [(unsigned char)2] [(unsigned short)9] [i_9] [i_8] [(unsigned char)2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_28 [i_7 - 1] [i_9])) : (((/* implicit */int) arr_28 [i_7 + 2] [i_9])))), ((-(((/* implicit */int) arr_9 [i_9] [i_8] [i_7 + 3] [i_7 + 3] [i_9]))))));
                            var_25 ^= ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) 2914538266U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)38539))))) : (((unsigned int) (~(arr_37 [i_7 + 3] [i_8] [i_9] [i_8]))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 2) 
        {
            arr_44 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 2] [i_7 + 2])))))) + (8877746004759086884ULL))) : (((/* implicit */unsigned long long int) 3690994137U))));
            /* LoopSeq 1 */
            for (long long int i_15 = 3; i_15 < 21; i_15 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) (!(((var_3) == (((/* implicit */long long int) arr_24 [(signed char)10]))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) arr_13 [i_7] [i_17] [i_15 - 1] [i_16] [i_17])) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) max((arr_5 [i_7] [i_17] [i_17] [i_16]), (((/* implicit */unsigned char) arr_29 [i_7]))))))) - (119)))));
                            var_28 = ((/* implicit */_Bool) 8572497799280541329ULL);
                            arr_52 [i_7] [i_7 + 1] [i_14] [i_15 - 2] [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)228))))));
                            var_29 = ((/* implicit */_Bool) var_4);
                            var_30 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) arr_43 [i_7 + 3] [i_7 + 1] [i_7])), (var_4)))));
                        }
                    } 
                } 
                arr_53 [i_7] [i_15] = ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_7 + 1] [10] [10] [i_7 + 1]))) ? ((+(((/* implicit */int) arr_5 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_14])))) : ((+(((/* implicit */int) arr_35 [i_15 + 2] [i_15 + 2] [i_14] [i_14 - 1] [(_Bool)1] [i_7])))));
            }
            var_31 -= ((/* implicit */unsigned int) arr_36 [i_7] [i_7] [(_Bool)1] [i_7 + 3] [i_7 + 3]);
        }
        arr_54 [i_7 + 3] &= (!(((/* implicit */_Bool) max((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 15LL))))), ((+(((/* implicit */int) (unsigned char)255))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
    {
        for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 22; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        {
                            arr_66 [i_18] [i_18] = ((/* implicit */unsigned short) (unsigned char)185);
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_18] [i_18])) * (((/* implicit */int) arr_0 [i_21] [i_19])))) > (((/* implicit */int) arr_0 [i_20] [i_21])))))));
                            arr_67 [i_18] [i_19] [i_20] [i_19] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_0 [i_19] [i_20])))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)63)) - (52)))));
                            arr_68 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned short) arr_65 [i_18] [i_18] [i_18] [i_18] [i_18])), (((/* implicit */unsigned short) min((var_5), (((/* implicit */short) (unsigned char)241)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_14 [i_18] [i_18] [i_19]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_26 [i_21])) : (((/* implicit */int) arr_22 [i_18] [i_18] [i_21]))))), (var_4)))));
                        }
                    } 
                } 
                arr_69 [i_18] [i_19] [i_19] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [(unsigned char)8] [(unsigned char)8]))))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 2; i_22 < 21; i_22 += 4) 
                {
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_29 [i_22 - 1])), ((unsigned char)80))))));
                            var_34 -= ((/* implicit */_Bool) min((arr_60 [i_19] [(unsigned short)10] [(unsigned short)10]), (((/* implicit */unsigned short) ((unsigned char) ((unsigned short) arr_58 [i_18] [i_19] [i_22 + 1]))))));
                            arr_74 [i_23] [i_23] = ((/* implicit */unsigned long long int) arr_31 [i_18] [i_22] [i_19] [i_19] [(signed char)6] [(signed char)6] [i_23]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_24 = 3; i_24 < 9; i_24 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_15 [i_24 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_24 - 3])))))))))));
        var_36 ^= ((/* implicit */long long int) (~(((unsigned long long int) 1048575LL))));
    }
}
