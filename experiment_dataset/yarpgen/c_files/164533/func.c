/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164533
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) var_10);
            var_18 &= ((/* implicit */_Bool) ((8207185781366145774LL) / (2560575473713884075LL)));
            var_19 -= ((/* implicit */short) ((unsigned int) arr_1 [i_1 - 1]));
        }
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                arr_12 [i_0 - 2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */long long int) 1093440867U)) : (7703021058592702372LL)));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_4] [i_4] [i_3] [i_2] [i_2 - 2] [i_0])) / ((-(((/* implicit */int) (unsigned short)52520))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((long long int) arr_14 [i_5] [i_4] [i_3] [i_2 - 2] [i_0]));
                        var_22 = ((/* implicit */signed char) (+(3184166304U)));
                    }
                    for (unsigned char i_6 = 2; i_6 < 24; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) var_2);
                        arr_20 [i_0] [i_2] [i_3] [i_4] [i_6] [i_6] &= ((/* implicit */long long int) ((short) (short)15687));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) ((((arr_4 [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_13))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_7])) ? (1549932968U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                    arr_26 [i_0] [i_2] [i_3] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_2)))))));
                    arr_27 [i_0 - 1] [i_2] [i_0 - 1] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 398607150U)) ? (-300605227401335032LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_0] [i_2] [i_3] = ((arr_5 [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_17 [i_0] [i_2]))))));
                        arr_31 [i_0] |= ((/* implicit */unsigned int) ((unsigned char) ((_Bool) arr_1 [i_3])));
                        arr_32 [i_0] [i_2 - 1] [i_3] [i_7] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8207185781366145775LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_8] [i_0] [i_3] [i_2] [i_0] [i_0]))) : (122880U)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_3] [i_9] [i_0 - 1] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (1922766300U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
                        arr_36 [i_0] [i_0] [i_2] [i_9] [i_7] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2601276014U)) ? (960542689U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18789)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        var_25 = ((/* implicit */unsigned int) 1843614546);
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        var_26 ^= ((unsigned int) arr_38 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 1]);
                        arr_45 [i_0] [i_2] [i_11] [i_11] = ((/* implicit */signed char) ((unsigned char) ((var_5) ? (1607011702) : (((/* implicit */int) arr_0 [i_3])))));
                        arr_46 [i_3] [i_3] [i_3] [i_11] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_2 - 1] [i_2 - 2] [i_3] [i_0 - 1] [i_12] [i_12 + 1])) == (((/* implicit */int) arr_39 [i_2 + 1] [i_2] [i_11] [i_0 - 3] [i_2] [i_12 + 1]))));
                        var_27 = ((/* implicit */unsigned int) ((((1607011698) | (((/* implicit */int) (short)-18790)))) > (((/* implicit */int) arr_23 [i_0 + 1] [i_2 + 1] [i_12 + 1]))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_11)) : (arr_33 [i_0] [i_2] [i_11] [i_0] [i_13] [i_11] [i_13]))) > (((/* implicit */long long int) 1549932968U))));
                        arr_50 [i_11] [i_0] [i_2] [i_11] = ((unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)189))));
                        arr_51 [i_11] [i_2] [i_2] [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_0 - 3] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_13] [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_2] [i_0 - 3] [i_0] [i_0]))));
                        arr_52 [i_11] [i_11] [i_3] [i_2] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_14)))))) == (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_11] [i_11] [i_2] [i_0]))) : (var_14)))));
                        arr_53 [i_3] [i_11] [i_3] [i_11] [i_11] [i_3] = arr_29 [i_13] [i_3];
                    }
                    var_29 = ((/* implicit */unsigned char) ((_Bool) var_16));
                }
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((arr_5 [i_2] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_0 - 2])))));
            }
            var_31 &= ((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)1)), (arr_44 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_2 + 1] [i_2])));
            var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_2 + 1] [i_0 - 1]), (arr_8 [i_2 + 1] [i_0 - 2]))))) ^ (((300605227401335032LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_33 = ((/* implicit */short) max(((!((!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2])))))), ((((_Bool)1) && (((((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2])) >= (((/* implicit */int) var_3))))))));
        }
        var_34 = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0])))), (((int) arr_10 [i_0 + 1] [i_0] [i_0]))));
        arr_54 [i_0 - 2] = ((/* implicit */int) ((_Bool) min(((short)5247), (((/* implicit */short) (signed char)122)))));
        var_35 = ((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned int) (unsigned short)10)), ((+(var_17))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            var_36 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_14 - 1] [i_14 - 1]))) / (2633823118148604601LL)));
            var_37 &= ((/* implicit */unsigned short) ((arr_28 [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1] [i_14])))));
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    var_38 -= ((/* implicit */_Bool) arr_15 [i_14] [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14]);
                    arr_64 [i_14] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)5230))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_67 [i_18] [i_18] = ((((/* implicit */_Bool) var_4)) ? (2640595137U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2640595132U)) ? (((/* implicit */int) (unsigned short)36808)) : (((/* implicit */int) (short)5230))))));
                    var_39 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) | (((unsigned int) var_9))));
                }
                var_40 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)99))))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_41 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)199)))))));
                var_42 = ((/* implicit */_Bool) (+(arr_5 [i_14 - 1] [i_14 - 1])));
            }
            arr_70 [i_15] [i_14] = ((/* implicit */_Bool) (~(((4294967295U) >> (((arr_61 [i_15] [i_15] [i_14 - 1] [i_14]) - (636301738)))))));
            arr_71 [i_14] [i_15] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_68 [i_14] [i_14] [i_15])) && (((/* implicit */_Bool) -2560575473713884075LL)))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_15] [i_14] [i_15]))))))));
        }
        for (long long int i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_43 |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)148))))) | (((/* implicit */int) var_3))));
            var_44 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_14] [i_14] [8] [i_14] [i_20] [i_20] [i_20])) ? (arr_47 [i_14 - 1] [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_14] [i_14]) : ((((_Bool)1) ? (2560575473713884094LL) : (((/* implicit */long long int) 2812953088U))))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_76 [i_14] [i_21] = ((/* implicit */unsigned int) ((unsigned char) var_16));
            arr_77 [i_14] [i_21] [i_21] &= ((/* implicit */unsigned char) ((unsigned int) -741702296));
            arr_78 [i_14] [i_21] = var_15;
            var_45 += ((/* implicit */unsigned short) arr_58 [i_14]);
        }
        var_46 *= (unsigned char)203;
    }
}
