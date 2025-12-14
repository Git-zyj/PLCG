/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116950
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
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */long long int) var_14);
    var_17 = ((/* implicit */short) var_0);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1333146366U)) ? (((/* implicit */long long int) 1333146372U)) : (-5147680660791751020LL)));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4006974623930600226LL)) ? (9223372036854775786LL) : (((/* implicit */long long int) 2284204188U))));
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)47), ((unsigned char)43))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (8755768883802519424LL))), (((/* implicit */long long int) arr_4 [i_1]))))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_14))) ? (((((/* implicit */_Bool) 2010763107U)) ? (((/* implicit */int) arr_3 [i_0] [5ULL] [(short)11])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))) - ((-(5011843884655162158ULL)))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)106))))))) ? (var_11) : (((/* implicit */long long int) 2147483626))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_1 [i_0] [i_0])))) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))));
            var_21 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 2010763108U)) || (((/* implicit */_Bool) 1333146370U)))) ? (4286578688U) : (((((/* implicit */_Bool) var_6)) ? (3805264102U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32760)))))))));
            var_22 ^= ((/* implicit */_Bool) arr_4 [i_2]);
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) arr_4 [i_0]);
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                arr_17 [(_Bool)1] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((int) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))))) & (arr_12 [i_0] [i_4]))))));
                var_24 = ((/* implicit */signed char) arr_16 [i_4] [(_Bool)1] [(_Bool)1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_3] [i_4] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5 - 2] [(_Bool)1] [i_0 + 3])) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_5 + 1])) : (arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 1])));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_12))));
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    arr_25 [i_0] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_12 [3U] [i_3]), (((/* implicit */unsigned int) (unsigned char)207))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32409))))) % (((((/* implicit */_Bool) arr_4 [i_0])) ? (1333146360U) : (1333146375U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [(_Bool)1] [(unsigned short)3] [i_0]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-93)))))))));
                    var_26 = ((/* implicit */long long int) (~(((unsigned int) 255LL))));
                }
            }
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) var_9);
                arr_28 [(unsigned short)8] [(unsigned short)8] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)43))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_7] [i_3] [i_0])), (arr_16 [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) var_14)), (1333146370U)))))));
                var_28 = ((/* implicit */signed char) ((unsigned char) arr_13 [i_0 + 2]));
            }
            arr_29 [i_0] [i_0] = ((/* implicit */_Bool) (~(((unsigned int) arr_11 [i_0]))));
            arr_30 [i_0] = ((/* implicit */unsigned long long int) arr_26 [i_0 - 1] [i_0] [i_0 - 1]);
            /* LoopSeq 1 */
            for (unsigned short i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_3 [i_0 + 1] [i_8 - 1] [i_8]), (arr_3 [i_0 + 1] [i_8 - 1] [(_Bool)1]))))));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_35 [i_0] [i_3] [3LL] [i_0])) : (((/* implicit */int) ((unsigned char) arr_16 [i_9] [i_3] [4U]))))), (((/* implicit */int) var_13))));
                    var_31 *= ((((/* implicit */_Bool) (unsigned char)44)) && (((/* implicit */_Bool) 2961820909U)));
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) -620013920)) : (-2279826393607019095LL)))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) var_14))))) : (((((/* implicit */_Bool) 66060288)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (0ULL)))))));
                    arr_41 [i_0] [8LL] [i_0] [i_0] [i_10] |= ((/* implicit */int) var_9);
                    var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0 + 1] [i_8 - 2] [i_10] [i_10]))) : (arr_37 [i_0 + 1]))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_46 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(((/* implicit */int) ((short) var_8))))) : (min((((/* implicit */int) ((_Bool) var_7))), ((+(((/* implicit */int) var_7))))))));
                    var_33 = ((/* implicit */long long int) arr_45 [i_0] [11U] [i_8] [9]);
                    arr_47 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) != (((/* implicit */int) var_7))))), (1099609557704769109LL)));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_52 [i_0] [i_3] [i_3] [i_8] [i_11] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (11U) : (((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (28ULL)))))));
                        arr_53 [i_0] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (short)32752)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_12])) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)37)))))))));
                        arr_54 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) 68702699520LL))), ((((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_0])))))))));
                    }
                    for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_34 = arr_38 [i_0 + 1];
                        var_35 = ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_18 [i_13] [i_0])))))) ? (-260LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [(unsigned short)9] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_3] [9LL])))))) : (min((((/* implicit */unsigned int) var_10)), (arr_44 [i_8] [i_11])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)232)) || (((/* implicit */_Bool) arr_11 [i_0])))))) : (((long long int) ((((/* implicit */_Bool) arr_11 [i_0])) && (((/* implicit */_Bool) 18446744073709551610ULL)))))));
                        arr_58 [i_0] [i_0] [11LL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_11] [2LL] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_57 [i_13] [3LL] [(short)7] [i_3] [(signed char)10]) && (((/* implicit */_Bool) 630096596)))) && (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) -102584251711327960LL)) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_3] [i_11] [i_13]))) : (-3025754122587419308LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 620013919)) && (((/* implicit */_Bool) var_10))))))))));
                    }
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31576)) ? (((/* implicit */unsigned int) min((arr_21 [i_0]), ((+(620013916)))))) : (arr_8 [i_11] [i_3] [9])));
                }
            }
        }
    }
    for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_14]))))) : ((-(((/* implicit */int) (unsigned char)40)))))))));
        var_39 = ((/* implicit */signed char) arr_61 [i_14]);
        var_40 = ((/* implicit */unsigned long long int) var_12);
    }
    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            arr_69 [i_16] [i_16] |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_65 [i_15])) && (((/* implicit */_Bool) 18446744073709551615ULL)))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_7))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_68 [i_16] [i_15] [i_16])), (((((/* implicit */int) (unsigned char)17)) * (((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) min((arr_60 [i_16]), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_65 [i_16])) ? (4361216006260746585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
            arr_70 [i_15] = ((/* implicit */int) arr_62 [i_15]);
        }
        for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2477591478771581210LL)) ? (((/* implicit */long long int) 620013912)) : (-5567453739169514835LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_62 [i_15]))), (((/* implicit */long long int) (unsigned char)215))));
                            arr_83 [i_15] [i_17] [i_18] [12LL] [i_19] [i_20] |= ((/* implicit */int) ((min((arr_60 [i_18]), (arr_60 [i_15]))) > (((/* implicit */long long int) var_0))));
                            arr_84 [i_15] [i_19] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-30047), (((/* implicit */short) (unsigned char)201)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_8))))))) : ((+(4503599627370495ULL)))));
                        }
                    } 
                } 
            } 
            arr_85 [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_78 [i_15] [i_15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_15])) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [2U] [(short)13] [i_17] [8]))))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) min(((_Bool)1), (var_2)))), (arr_59 [i_15]))))));
        }
        var_42 = ((/* implicit */unsigned char) var_10);
        arr_86 [i_15] = ((/* implicit */unsigned char) arr_75 [10U] [i_15] [i_15]);
    }
    for (unsigned int i_21 = 1; i_21 < 15; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 16; i_22 += 4) 
        {
            for (unsigned int i_23 = 0; i_23 < 16; i_23 += 1) 
            {
                {
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((int) (+(((((/* implicit */_Bool) 0ULL)) ? (-6822460857408405515LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    arr_95 [i_23] [i_22] [i_22] [i_21] |= ((((((/* implicit */_Bool) arr_90 [i_21] [i_21 - 1] [(signed char)2])) ? (((/* implicit */long long int) arr_90 [i_21] [i_21 - 1] [i_23])) : (var_4))) + (((((/* implicit */long long int) arr_90 [i_21] [i_21 + 1] [1U])) / (4934380902523817618LL))));
                    var_44 = ((/* implicit */unsigned short) ((unsigned int) min((arr_68 [i_23] [i_21] [i_21 + 1]), (arr_59 [i_22]))));
                    var_45 = ((/* implicit */unsigned char) ((signed char) (short)32767));
                }
            } 
        } 
        var_46 *= (!(((/* implicit */_Bool) -2383026811782821228LL)));
    }
}
