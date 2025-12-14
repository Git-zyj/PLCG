/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126278
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = var_7;
        var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) 3818799935U))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_0]))))))) : (var_10)));
        arr_6 [i_0] = ((/* implicit */short) var_10);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) >> (((arr_9 [i_1]) - (17297316596041678022ULL)))));
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (var_10) : (((/* implicit */unsigned long long int) ((long long int) var_11)))));
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (445709724141265371ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_7 [i_1])))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_15 [i_2])))) != (((arr_14 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))) : (var_9)))));
        var_15 = ((/* implicit */unsigned short) var_6);
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_2] [i_4] [i_4]))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) ((unsigned char) var_7))) : (((((/* implicit */int) arr_21 [i_4] [i_4] [i_4])) >> (((((/* implicit */int) arr_13 [i_2])) - (16352)))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(4294967295U)))));
                var_19 ^= ((/* implicit */int) arr_9 [i_4]);
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_3])) >= (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) var_11))));
                    var_21 &= ((/* implicit */long long int) var_1);
                }
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-46549987094793148LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))) / (arr_7 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (short)32111)))));
            arr_25 [i_2] [i_2] = ((/* implicit */short) var_9);
        }
        for (signed char i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    arr_34 [i_2] [i_2] [i_2] [i_2] [i_7] [i_8] &= ((/* implicit */long long int) var_3);
                    arr_35 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_2]))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_6 - 1] [i_7] [i_8 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_6]))));
                }
                arr_36 [i_2] [i_6 - 3] [i_6] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11)))))));
                arr_37 [i_2] [i_6] [i_2] = ((/* implicit */short) var_2);
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_6] [i_6 - 3] [i_6 - 3])) | (((/* implicit */int) (signed char)48))));
            }
            for (short i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
            {
                arr_40 [i_6] [i_6] [i_9] = ((/* implicit */short) (-((+(2931697162U)))));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    arr_43 [i_6] [i_6 - 3] [i_6] [i_6] [i_6 - 1] = arr_7 [i_2];
                    var_25 |= ((/* implicit */unsigned long long int) (~(((long long int) arr_7 [i_10]))));
                    arr_44 [i_6] [i_9] [i_6] [i_6] = var_3;
                }
                for (unsigned char i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    arr_47 [i_2] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (+(2931697162U)))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    arr_48 [i_2] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */short) 445709724141265362ULL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        arr_52 [i_2] [i_6] [i_9] [i_11] [i_12] [i_6] = ((/* implicit */_Bool) var_12);
                        var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_8)))) ? ((~(((/* implicit */int) arr_30 [i_12] [i_12] [i_9] [i_9])))) : (((/* implicit */int) arr_14 [i_11]))));
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_12])) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_11])) : (((/* implicit */int) arr_1 [i_12])))) : (((/* implicit */int) var_12))));
                        arr_53 [i_2] [i_6] [i_6] [i_11] [i_2] = ((/* implicit */unsigned char) var_3);
                    }
                    var_28 += ((/* implicit */short) ((_Bool) arr_33 [i_11] [i_6] [i_11 + 2]));
                    arr_54 [i_6] [i_6] [i_11 + 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_6] [i_9] [i_9] [i_9]))));
                }
                var_29 = ((/* implicit */long long int) var_5);
            }
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1466727914)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) >= (((9591245858195919389ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_2] [i_6] [i_6] [i_2] [i_6] [i_2])))))));
            arr_55 [i_6] = arr_0 [i_6];
        }
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_2] [i_2]))));
        var_32 = (short)480;
    }
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (signed char i_15 = 1; i_15 < 14; i_15 += 2) 
            {
                {
                    arr_63 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32136)) && (((/* implicit */_Bool) 3227305052640827156ULL))));
                    var_33 = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
        arr_64 [i_13] [i_13] = ((/* implicit */unsigned int) var_4);
        arr_65 [i_13] = ((/* implicit */short) (+((+(((/* implicit */int) (short)4317))))));
        /* LoopSeq 3 */
        for (unsigned short i_16 = 4; i_16 < 16; i_16 += 3) 
        {
            arr_69 [i_13] [i_13] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) 21U)))))) ? ((-(arr_58 [i_16 - 4] [i_16] [i_16 - 4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)24741)) : (((/* implicit */int) arr_61 [i_13])))) == (((/* implicit */int) var_4))))))));
            var_34 = ((/* implicit */long long int) var_1);
            arr_70 [i_13] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_68 [i_13] [i_13] [i_16 - 4]))))) ? (((/* implicit */int) min((var_12), (((/* implicit */short) var_6))))) : ((-(((/* implicit */int) (short)20136))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_68 [i_13] [i_16] [i_16]))))), (((((/* implicit */_Bool) 292873441U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))))));
            var_35 = ((/* implicit */short) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4324)))));
        }
        for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            var_36 *= ((/* implicit */long long int) (((+(3965948251U))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-7452)))));
            var_37 ^= ((/* implicit */unsigned short) ((short) (short)26563));
            arr_73 [i_17] = ((/* implicit */_Bool) (+(18001034349568286255ULL)));
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            arr_76 [i_13] [i_18] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((var_4) ? (((/* implicit */int) arr_60 [i_13] [i_18])) : (arr_66 [i_13] [i_13] [i_18])))))));
            var_38 += ((/* implicit */unsigned int) var_7);
        }
        arr_77 [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (3411934424512040183ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
    }
    var_39 = ((/* implicit */unsigned char) var_8);
    var_40 = ((/* implicit */_Bool) var_10);
}
