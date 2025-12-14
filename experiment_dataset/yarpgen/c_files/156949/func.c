/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156949
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
    var_11 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 6134625772213488805ULL)))) > ((+(var_5))))))) % (-2875962605727434997LL));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) (short)27479);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (short)27479)) >> (((min((arr_7 [i_2] [i_2 + 2] [i_2 - 2] [i_2 - 1]), (arr_7 [i_2] [(short)1] [i_2 - 1] [i_2 - 2]))) - (1584906788U))))))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)255))));
                            var_14 = ((/* implicit */signed char) 0ULL);
                            var_15 += arr_10 [i_1 + 2];
                        }
                    } 
                } 
            }
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    for (signed char i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_16 = (((-(arr_1 [i_0]))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6 + 1] [i_6 - 1] [i_6]))) & ((~(arr_5 [i_5] [i_5]))))) - (48890626U))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_6 - 1] [i_5]))))) <= (arr_10 [i_1 + 2])));
                            var_18 = ((/* implicit */unsigned int) ((arr_22 [i_7] [i_6] [i_6] [(short)10] [2U] [i_6] [i_0]) ? (((/* implicit */int) (unsigned char)240)) : (((((/* implicit */int) ((((/* implicit */_Bool) 4766174080767968971ULL)) && (((/* implicit */_Bool) arr_8 [i_6 + 2] [i_5] [i_1]))))) & (((/* implicit */int) (unsigned char)26))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0])), (arr_2 [i_7] [i_1])))) ? (((/* implicit */int) arr_22 [i_0] [i_7] [i_6] [i_6 + 2] [i_7 + 1] [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) min((max((((/* implicit */short) arr_9 [i_5] [i_1] [i_5])), (arr_11 [i_5] [i_7]))), (min(((short)32767), (arr_16 [i_1] [i_0] [i_1] [i_0])))))))))));
                            arr_23 [i_0] [i_0] [i_6] [i_0] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) 15843779607065483707ULL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_10 [i_0]) : (arr_10 [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748)))));
                var_21 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_5] [i_5]);
                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_1 + 1]))))), (((((/* implicit */_Bool) 13680569992941582644ULL)) ? (14427755767603889308ULL) : (4766174080767968994ULL)))));
            }
            var_23 |= ((((/* implicit */_Bool) 15990951914270324630ULL)) ? (min((((4766174080767968971ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0])) ? (arr_18 [i_0] [(short)10] [(short)12] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))))) : (((/* implicit */unsigned long long int) (~(arr_0 [6LL])))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_24 += ((/* implicit */short) (unsigned short)38268);
                arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_24 [12ULL] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0])))));
            }
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (short)19089)) : (((/* implicit */int) (short)-20305))))) ? (((arr_6 [i_0] [i_0] [(signed char)8]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_19 [(unsigned short)0] [i_8] [i_8] [i_8] [i_8])))) : (((var_9) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) arr_3 [i_8] [i_8]))))));
        }
        arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_0]))))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0])))));
        var_26 -= ((/* implicit */_Bool) min((((unsigned long long int) 14427755767603889314ULL)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(short)4]))))), (arr_1 [i_0]))))));
        arr_31 [i_0] [i_0] = ((/* implicit */signed char) arr_17 [i_0]);
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        var_27 += ((/* implicit */long long int) 3149364133U);
        arr_34 [i_10] = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_32 [i_10] [i_10]))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 2) 
    {
        arr_38 [i_11] = ((/* implicit */long long int) 18446744073709551615ULL);
        arr_39 [i_11] = min((((((/* implicit */_Bool) arr_11 [11LL] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11] [i_11] [i_11 + 2]))) : (((arr_32 [i_11 + 1] [i_11]) << (((((/* implicit */int) arr_9 [i_11 - 1] [i_11 - 1] [i_11])) + (26))))))), (((/* implicit */unsigned long long int) min((max((arr_1 [i_11 - 1]), (arr_37 [i_11] [i_11]))), (((/* implicit */long long int) arr_20 [i_11]))))));
        var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))) | (((((((/* implicit */_Bool) (short)21500)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11] [i_11] [i_11]))) : (arr_32 [(signed char)5] [i_11]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))));
        arr_40 [i_11] = ((/* implicit */long long int) min((max((4ULL), (((/* implicit */unsigned long long int) ((long long int) 11ULL))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [(short)4] [i_11] [11LL]))))) & (arr_2 [i_11] [(unsigned char)9])))));
    }
    for (signed char i_12 = 2; i_12 < 13; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 12; i_13 += 1) 
        {
            for (unsigned int i_14 = 1; i_14 < 12; i_14 += 1) 
            {
                {
                    arr_49 [i_12] = ((/* implicit */long long int) min((((/* implicit */int) arr_41 [i_12])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_14] [i_14])) & (((/* implicit */int) arr_41 [i_12]))))) ? (((((/* implicit */_Bool) arr_20 [i_13])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_3 [3LL] [i_13])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12] [i_13 + 1]))) <= (arr_46 [i_12 + 1] [i_12] [13LL] [i_12 + 1]))))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_12] [i_13]))) & (((arr_24 [i_12 + 1] [i_12] [i_13 - 1]) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_12 - 2] [9ULL] [i_12 - 2] [i_13] [i_12 - 2] [i_14] [i_14])) << (((/* implicit */int) arr_12 [i_12] [i_12] [i_13] [i_13] [i_13] [i_14 - 1] [i_14])))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_15 = 4; i_15 < 13; i_15 += 3) 
        {
            var_30 = ((/* implicit */signed char) arr_50 [i_15] [i_15] [i_12]);
            var_31 = ((/* implicit */short) arr_41 [i_12]);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            arr_55 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_16] [i_16] [i_12])) ? (17652268070490294150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8190)))))) ? (((((/* implicit */int) arr_26 [i_12] [i_12] [i_12 - 1] [i_16])) / (((/* implicit */int) arr_17 [i_16])))) : (((/* implicit */int) arr_51 [i_12] [i_16] [i_12]))));
            arr_56 [i_12] [(_Bool)1] |= ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) : (14703954620174177051ULL));
            var_32 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12] [i_12] [i_12] [i_16] [9ULL] [i_16] [i_12]))) : (arr_18 [i_12] [i_12] [i_12] [i_16])))) : (arr_32 [i_12 - 1] [i_12 - 2])));
            var_33 = ((/* implicit */long long int) (~(((18446744073709551604ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_57 [i_12] [i_12] = ((/* implicit */short) ((arr_24 [i_12] [i_16] [i_16]) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_12])))))));
        }
        for (short i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_18 = 0; i_18 < 14; i_18 += 3) 
            {
                var_34 = ((/* implicit */unsigned long long int) arr_20 [i_12 - 2]);
                arr_63 [i_12] [i_12] [i_12] = ((/* implicit */long long int) (short)4820);
                var_35 = ((/* implicit */unsigned long long int) arr_62 [i_12 + 1] [i_12 - 2]);
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                arr_67 [i_12 - 2] [i_12] = ((/* implicit */unsigned char) ((arr_28 [i_12]) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)27479)) <= (((/* implicit */int) arr_6 [16ULL] [i_17] [i_17]))))), (((((/* implicit */_Bool) arr_52 [i_12])) ? (((/* implicit */int) arr_43 [i_12] [i_17])) : (((/* implicit */int) (unsigned char)0))))))) : (arr_59 [i_12])));
                arr_68 [i_12] [i_17] = ((/* implicit */short) (unsigned char)12);
            }
            /* vectorizable */
            for (long long int i_20 = 2; i_20 < 13; i_20 += 1) 
            {
                var_36 = ((/* implicit */long long int) 2866174156623838424ULL);
                arr_72 [i_20] [i_12] [i_12] [i_12] = ((/* implicit */signed char) arr_51 [i_12] [i_17] [i_20]);
            }
            arr_73 [i_12] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_71 [i_12 - 2] [i_12 - 1] [i_12 - 1]), (6436623343267566690ULL))))));
            arr_74 [i_12] [i_12] [i_17] = ((/* implicit */long long int) arr_66 [i_17] [i_17] [i_12] [i_17]);
            var_37 = ((/* implicit */signed char) arr_24 [i_12 - 1] [i_12 - 2] [i_17]);
            var_38 += ((/* implicit */unsigned int) ((743551012556090468ULL) - (min((((((/* implicit */_Bool) arr_64 [i_12] [i_12] [i_17] [i_17])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_12] [i_17]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
        }
    }
}
