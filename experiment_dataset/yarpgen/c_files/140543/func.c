/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140543
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = var_17;
                    arr_7 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-89)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_4 [i_0] [i_2] [i_0])))));
                        var_20 = ((/* implicit */int) var_13);
                        arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) % (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4909518550433963084LL)))))) ? (((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_11)) - (30337))))) % (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)146)), (var_6)))))) : ((((-(((/* implicit */int) var_15)))) / (((/* implicit */int) (unsigned char)110))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_4]))))) ? (4048131515U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))))));
                        arr_14 [i_0] [i_1] = ((/* implicit */short) var_4);
                        arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (unsigned char)98);
                        arr_16 [i_0] [i_1] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 1297337892U)), ((~(var_16))))), (((/* implicit */unsigned long long int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_19 [i_2] [i_5] [(unsigned char)11] [i_6 + 2] [i_6] [i_5]))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 4048131509U)) % ((+(-5824156293716631662LL)))));
                            var_23 = ((/* implicit */long long int) (((-(((/* implicit */int) var_6)))) - ((((+(arr_13 [i_0] [(_Bool)1] [i_2] [i_2] [i_6 + 1]))) + (((((/* implicit */int) var_15)) - (((/* implicit */int) var_10))))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) < (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))) : (var_2)))))), (max((var_6), (((/* implicit */unsigned short) (unsigned char)140))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_7))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_12)), ((+(((arr_0 [i_10] [i_10]) % (var_16)))))));
        var_26 -= ((/* implicit */short) (~((+(((/* implicit */int) var_4))))));
        var_27 = ((((/* implicit */_Bool) ((unsigned int) (+(4048131515U))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned long long int) arr_13 [i_10] [i_10] [i_10] [i_10] [i_10])))));
    }
    for (int i_11 = 1; i_11 < 8; i_11 += 1) 
    {
        arr_40 [i_11 - 1] = ((/* implicit */unsigned int) (unsigned char)209);
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 2) 
        {
            arr_43 [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_42 [i_11] [i_11] [i_12 + 2])) % (((/* implicit */int) var_17))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        var_28 = ((/* implicit */signed char) var_9);
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_29 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (var_8)))), (min((((/* implicit */unsigned long long int) 1297337892U)), (var_16)))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_20 [i_11 + 1])) + (2931880548813121271ULL)))) ? (((/* implicit */int) (short)-1160)) : (((/* implicit */int) var_15))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)118)))))))));
                            arr_52 [i_12 - 1] [i_13] [i_12] = (+((+(4048131496U))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            var_32 -= ((/* implicit */unsigned char) arr_1 [i_16]);
                            var_33 = ((/* implicit */short) 2219401638546522795ULL);
                            var_34 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (signed char)-5))))))));
                        }
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            arr_59 [i_11] [i_12 + 1] [i_13] [i_14] [i_12] [i_17] = ((/* implicit */signed char) var_11);
                            arr_60 [i_11 + 2] [i_12] [i_13] [i_12] [i_12] [i_17] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)153)) : ((-(((/* implicit */int) var_10)))))));
                            arr_61 [i_12] [i_13] [i_14] [i_12] = ((/* implicit */unsigned long long int) var_15);
                            arr_62 [i_12] [i_12 + 1] [i_13] [i_14] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < ((+(var_1)))))), ((((!(((/* implicit */_Bool) (short)-19349)))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (7029198733243544690ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11 + 2])))))));
                        }
                        for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) arr_36 [i_13]))))));
                            var_36 += ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_2)))));
                            var_37 = ((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_14))));
                        }
                        var_38 = ((/* implicit */unsigned char) 15514863524896430346ULL);
                    }
                } 
            } 
        }
        for (long long int i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_16)) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_21] [i_20]))))))));
                }
                for (unsigned short i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    var_41 = ((/* implicit */unsigned char) 1839913523U);
                    arr_77 [i_11] [i_11] [(_Bool)1] [i_20] [(_Bool)1] [1LL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))), ((+(((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_8)))))));
                    arr_78 [i_20] [i_22] &= ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */int) (short)5956)) ^ (((/* implicit */int) var_11)))) == (((/* implicit */int) (short)5956)))))));
                    var_42 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((4162011554794006757ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_19] [i_20])))))) < (((/* implicit */int) arr_53 [i_11] [i_19] [i_20] [i_20])))))) <= ((~(max((((/* implicit */long long int) (unsigned char)110)), (-1LL))))));
                    arr_79 [i_11] [i_19] [i_20] [i_22] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11]))), (((((/* implicit */_Bool) var_17)) ? (arr_54 [i_11 - 1] [i_11 + 1] [i_19] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124)))))));
                }
                for (signed char i_23 = 1; i_23 < 9; i_23 += 1) 
                {
                    arr_82 [i_11] [i_11] [i_11] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_32 [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_83 [i_11] [i_19] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_72 [i_23])), (3ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned short)55347)) ? (arr_54 [i_11] [i_11 + 2] [i_23] [i_23 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_11 + 2]))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_53 [i_11] [i_19] [i_20] [i_23])) ? (1468541144U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91)))))))) : (arr_29 [i_11] [i_23] [i_23 + 1])));
                }
                for (unsigned char i_24 = 1; i_24 < 8; i_24 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) (short)5956);
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 10; i_25 += 1) 
                    {
                        arr_88 [i_24] [i_24] [i_20] [i_24] [i_24] = ((/* implicit */unsigned short) 15514863524896430340ULL);
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) max((((/* implicit */short) var_12)), (arr_58 [i_11 + 2] [i_19] [i_20] [i_25]))))));
                        arr_89 [i_11] [i_19] [i_11] [i_24] [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)95)) < (((/* implicit */int) var_0))))), (((var_2) >> (((/* implicit */int) var_4))))))));
                    }
                    arr_90 [i_24] [i_19] [i_20] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(var_1))), (((/* implicit */long long int) (~(arr_56 [i_11] [i_19] [i_11] [i_24] [i_20] [i_24] [i_24 - 1]))))))) ? (((/* implicit */long long int) arr_74 [i_24])) : (var_1)));
                }
                arr_91 [i_11] [i_11] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2931880548813121299ULL))))), ((signed char)-56));
                var_47 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_14))))));
            }
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_2))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)111)) ? (12827253179321287615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        }
        for (long long int i_26 = 0; i_26 < 10; i_26 += 2) /* same iter space */
        {
            var_49 = ((/* implicit */short) ((15514863524896430360ULL) >> (((((/* implicit */int) arr_69 [i_11 + 2])) - (166)))));
            var_50 = ((/* implicit */unsigned int) min((var_50), (var_13)));
        }
        var_51 = ((/* implicit */unsigned int) arr_9 [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 1]);
        /* LoopSeq 1 */
        for (signed char i_27 = 0; i_27 < 10; i_27 += 1) 
        {
            var_52 |= ((/* implicit */unsigned long long int) (~(((arr_13 [i_11] [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 2]) >> (((2931880548813121256ULL) - (2931880548813121227ULL)))))));
            var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) var_15))))) - (((/* implicit */int) (unsigned char)171))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) / (((/* implicit */int) var_4))))), (((unsigned long long int) arr_65 [i_11 - 1] [(short)4] [i_27] [i_27] [i_27] [i_27] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
            arr_97 [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_11 - 1] [(_Bool)1])))))));
        }
    }
}
