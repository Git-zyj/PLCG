/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155873
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) + (((((/* implicit */_Bool) 15LL)) ? ((~(17565441767786836937ULL))) : (max((881302305922714680ULL), (17565441767786836937ULL)))))));
        arr_5 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)117))));
        arr_6 [(unsigned short)12] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2LL])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((17565441767786836937ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) 17565441767786836937ULL)) ? (17565441767786836943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (17565441767786836930ULL))))));
        var_20 = ((/* implicit */long long int) min((arr_3 [i_0]), (((arr_0 [i_0]) | (((/* implicit */int) var_11))))));
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [i_3] [i_2] [(unsigned char)1] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_3])) >= (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_0)))))))));
                    arr_15 [i_2 - 1] = ((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3]);
                    arr_16 [i_3] [(signed char)16] [i_3] [(short)2] = ((/* implicit */short) 17565441767786836943ULL);
                }
            } 
        } 
        arr_17 [i_1] [i_1] = ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1]))))) : (((((/* implicit */_Bool) 881302305922714673ULL)) ? (((/* implicit */unsigned long long int) 1441179340U)) : (881302305922714684ULL))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 3; i_6 < 22; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) var_4);
                        arr_25 [i_1] [i_4] [i_6] [i_1] = ((/* implicit */long long int) arr_13 [i_1] [i_1] [i_1] [i_1 - 1]);
                    }
                    arr_26 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_4] [(_Bool)1] [i_5])) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (17565441767786836942ULL))) : (((/* implicit */unsigned long long int) arr_21 [i_4])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_4]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_11 [i_1] [i_1]))));
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (int i_9 = 3; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            arr_40 [12ULL] [i_7] [i_8] [i_8] [i_8] &= ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (max((((/* implicit */unsigned long long int) ((-3596709277397827442LL) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (881302305922714678ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) var_7))))) && ((!(((/* implicit */_Bool) arr_0 [i_10])))))))));
                            var_24 ^= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_13 [i_1 - 1] [20LL] [i_8] [i_9]))))))) <= (((/* implicit */int) ((var_17) || (((/* implicit */_Bool) arr_37 [i_8] [i_7] [(unsigned short)0])))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */short) 13003220299040676169ULL);
            arr_41 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_1))));
            arr_42 [i_7] &= ((((/* implicit */_Bool) ((unsigned char) (signed char)3))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_2))))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            for (unsigned int i_13 = 3; i_13 < 12; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        arr_52 [i_14] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_23 [i_11])))) & ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) var_15)) - (225))))) : (((/* implicit */int) var_16))));
                        arr_53 [(unsigned char)9] [i_11] [i_12] [i_12] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) - ((~(arr_3 [i_11])))));
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)11))))))) * (min(((-(0ULL))), (((/* implicit */unsigned long long int) (~(1441179340U))))))));
                }
            } 
        } 
        arr_54 [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_13)) * (((/* implicit */int) var_6))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) (~(2098448899U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3))))) : ((-(2921917914U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_11] [i_11] [i_11] [i_11]) >= (arr_13 [i_11] [i_11] [i_11] [i_11]))))))))));
    }
    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 71494644084506624ULL)) ? (((int) arr_9 [i_15])) : (((/* implicit */int) var_17))))) ? ((-(((17565441767786836943ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15] [i_15] [i_15] [i_15] [13U] [i_15]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) & (((((/* implicit */_Bool) arr_7 [i_15] [i_15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_39 [i_15] [0ULL] [i_15] [i_15] [i_15])))))))));
        var_29 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_48 [i_15] [i_15] [i_15])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        arr_58 [i_15] [i_15] |= ((/* implicit */_Bool) -5682184098421273308LL);
        arr_59 [(short)13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
        var_30 = ((((((/* implicit */_Bool) arr_10 [i_15] [i_15] [i_15])) ? (4260588176U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))));
    }
    var_31 = ((/* implicit */short) ((((/* implicit */int) max((var_9), (((/* implicit */signed char) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_13)))))))) * ((((-(((/* implicit */int) var_7)))) << ((((((_Bool)0) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (37U)))))));
    var_32 |= ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
    {
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 4294967265U))))))))))));
        /* LoopSeq 2 */
        for (int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            var_34 = ((/* implicit */signed char) (_Bool)1);
            var_35 ^= ((/* implicit */long long int) var_7);
        }
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            arr_67 [i_18] = ((/* implicit */long long int) var_5);
            /* LoopNest 2 */
            for (long long int i_19 = 3; i_19 < 17; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_21 = 0; i_21 < 18; i_21 += 4) 
                        {
                            var_36 ^= ((/* implicit */short) arr_7 [i_16] [i_16]);
                            arr_75 [i_16] [i_19] = arr_66 [i_16] [i_16];
                            arr_76 [i_19] [i_20] [i_19] = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */_Bool) (short)11368)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)32)))))), (((/* implicit */int) max((((unsigned short) var_18)), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-12)), (var_1)))))))));
                            arr_77 [i_20] [i_20] [i_20] [i_18] [i_18] |= ((/* implicit */unsigned long long int) ((unsigned int) var_14));
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                        for (signed char i_22 = 1; i_22 < 17; i_22 += 4) 
                        {
                            var_38 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1441179328U)) ? (((/* implicit */unsigned long long int) 1101185582U)) : (17565441767786836950ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17565441767786836938ULL)))))) : (17565441767786836951ULL))) >> (((2681710941U) - (2681710906U)))));
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_62 [i_19 - 2] [i_20])))))));
                            arr_80 [i_18] [i_19] [i_19] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) arr_34 [i_19])) : (881302305922714672ULL))) % (17565441767786836943ULL)))));
                        }
                        arr_81 [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) arr_62 [i_16] [i_19]);
                        arr_82 [i_16] [i_19] = ((/* implicit */signed char) max((2320804967U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
                        var_40 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) arr_37 [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_19 - 3] [6U] [i_19] [i_19 - 1] [i_20]))) : (881302305922714679ULL)))));
                        arr_83 [i_20] [i_18] [i_19] [i_18] [i_18] [i_16] |= ((/* implicit */int) max((arr_24 [i_19 - 2] [i_18]), (var_1)));
                    }
                } 
            } 
            arr_84 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) & (((((/* implicit */int) max((arr_7 [i_16] [i_18]), (var_8)))) << (((((((/* implicit */_Bool) arr_30 [18ULL] [i_18])) ? (881302305922714679ULL) : (881302305922714653ULL))) - (881302305922714672ULL)))))));
        }
        var_41 = ((/* implicit */unsigned short) ((arr_34 [i_16]) % (max((arr_34 [i_16]), (arr_11 [i_16] [(unsigned short)11])))));
        arr_85 [i_16] = ((/* implicit */signed char) (-(-7055090132326377515LL)));
    }
}
