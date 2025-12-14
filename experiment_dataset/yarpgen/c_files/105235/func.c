/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105235
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (short)2032)) > (((/* implicit */int) (unsigned char)45)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                var_17 = ((/* implicit */short) var_6);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_2 + 1] [i_2]))))) ? (((((/* implicit */_Bool) (short)27)) ? (((/* implicit */int) arr_5 [i_1] [i_2 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) max((arr_5 [i_1] [i_2 - 1] [i_2 + 1] [i_2]), (arr_5 [i_0] [i_2 + 1] [i_2 + 1] [i_2])))))))));
                arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [i_0])) + (((/* implicit */int) var_11)))) / (((((/* implicit */_Bool) max((var_9), (((/* implicit */short) (unsigned char)42))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) arr_3 [i_0] [i_2])) % (((/* implicit */int) (unsigned char)242))))))));
            }
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_10 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)9))));
                arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3]))))) | (((((_Bool) var_14)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-1))) | (-1LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-104)))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_13)))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_4 [i_1] [i_3])))) : (((/* implicit */int) (short)15081))))) : (min((min((-7414071801568105055LL), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (2434390741U))))))));
            }
            var_20 += ((/* implicit */short) max((min((((((/* implicit */int) (unsigned char)62)) * (((/* implicit */int) (unsigned char)65)))), ((~(((/* implicit */int) var_15)))))), ((+(((/* implicit */int) min(((short)24), (((/* implicit */short) var_6)))))))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)-16290))) < (((/* implicit */int) ((signed char) (unsigned char)32))))))) : (min((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0]))))), (max((-7730239211421050721LL), (((/* implicit */long long int) (short)8950))))))));
        var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3))))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_22 -= ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_14 [i_4])), (9214875U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 3; i_5 < 20; i_5 += 2) 
        {
            arr_18 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(var_13)))) && (((/* implicit */_Bool) (short)0)))) && (((arr_17 [i_4] [i_5 + 1]) && (((/* implicit */_Bool) min((var_15), (((/* implicit */signed char) (_Bool)1)))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)-23762)))) / (((/* implicit */int) max((var_0), (var_5))))))) ? ((+((+(8243142989276163287LL))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) var_1))))))))))));
            var_24 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) (unsigned char)52)) ^ (((/* implicit */int) arr_17 [i_5 - 1] [i_5])))) : ((~(((/* implicit */int) (unsigned char)181))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 357569109U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1976921873U)))))));
            var_25 -= ((/* implicit */unsigned char) (signed char)0);
        }
        var_26 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4230)))) / ((~(((/* implicit */int) max((((/* implicit */short) var_15)), (var_4))))))));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        var_27 *= ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((-7967403342673292412LL) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        arr_22 [i_6] = ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
        /* LoopSeq 1 */
        for (short i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            var_28 += ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)235)) * (((/* implicit */int) (unsigned char)0))))));
            var_29 = ((/* implicit */unsigned char) (-(((arr_20 [i_6] [i_7 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_6])))))));
        }
    }
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_30 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_16 [i_8]))) ^ (((/* implicit */int) var_2))));
        var_31 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_10)) / (((/* implicit */int) (short)-3743)))) <= (((((/* implicit */int) (short)30779)) ^ (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) (signed char)11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (unsigned char)87)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_8] [i_8]))))))))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_29 [i_8])))));
        arr_31 [i_8] = ((/* implicit */short) (-(min((117440512U), (((/* implicit */unsigned int) var_4))))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) (signed char)-50)))))));
                var_33 = ((/* implicit */short) (-(arr_16 [i_9])));
                var_34 = ((/* implicit */unsigned int) ((((_Bool) min((var_7), ((unsigned char)118)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) : (((/* implicit */int) min((arr_37 [i_9] [i_10] [i_11] [i_11]), (((/* implicit */short) (unsigned char)16)))))));
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
            {
                var_35 -= ((28U) / (((unsigned int) min((((/* implicit */unsigned int) var_9)), (66846720U)))));
                arr_41 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((arr_33 [i_10] [i_12]) ? (((/* implicit */int) arr_33 [i_9] [i_10])) : (((/* implicit */int) (signed char)74)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_33 [i_9] [i_12])) : (((/* implicit */int) var_14))))));
            }
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
            {
                var_36 -= ((/* implicit */short) 7832221971955389482LL);
                var_37 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 4294967281U))));
                var_38 -= ((/* implicit */short) (((-(((/* implicit */int) (short)29926)))) / (((/* implicit */int) ((unsigned char) (short)3578)))));
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_39 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (1152921504606846464LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1837457836U)))));
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -6894833643435674147LL)) ? ((-(((/* implicit */int) (short)-9897)))) : (((/* implicit */int) arr_28 [i_14])))))));
            }
            var_41 ^= ((/* implicit */unsigned int) var_8);
            arr_46 [i_10] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) var_3)));
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    arr_54 [i_9] [i_15] [i_16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29503)) ? (((((/* implicit */int) (unsigned char)115)) ^ (((/* implicit */int) var_15)))) : (((/* implicit */int) var_5))));
                    var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_52 [i_9] [i_9] [i_9] [i_9] [i_9] [i_17]))));
                }
                for (short i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    var_43 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
                    var_44 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((6917529027641081856LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-10))))))));
                    arr_57 [i_9] [i_15] [i_15] [i_16] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_16] [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_18] [i_9] [i_16]))) : (arr_32 [i_9])));
                    arr_58 [i_9] [i_15] [i_16] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                }
                var_45 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185)))))));
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) (unsigned char)112)))));
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 21; i_20 += 2) /* same iter space */
                    {
                        arr_66 [i_9] [i_15] [i_16] [i_19] [i_19] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_9] [i_15] [i_16] [i_9])) && (((/* implicit */_Bool) var_3))));
                        var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)23))));
                    }
                    for (short i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */short) (_Bool)1);
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_9] [i_15] [i_16] [i_9] [i_21] [i_19])) ? ((-(((/* implicit */int) (short)-1)))) : (((/* implicit */int) arr_17 [i_9] [i_15]))));
                    }
                    var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_13 [i_9] [i_15]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-16866))));
                    arr_69 [i_9] = ((/* implicit */short) (signed char)96);
                    var_51 -= ((/* implicit */unsigned int) ((unsigned char) var_5));
                }
            }
            /* LoopSeq 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_52 = ((/* implicit */_Bool) var_15);
                var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((((((/* implicit */_Bool) 2466238544U)) ? (959753485U) : (636605985U))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9100580603565205280LL)))))))))));
            }
            for (short i_23 = 2; i_23 < 20; i_23 += 2) 
            {
                arr_74 [i_9] [i_9] [i_15] [i_15] = ((/* implicit */unsigned int) var_12);
                arr_75 [i_23] [i_15] [i_15] = ((/* implicit */unsigned char) var_10);
                /* LoopSeq 1 */
                for (short i_24 = 3; i_24 < 20; i_24 += 1) 
                {
                    arr_78 [i_23] = ((/* implicit */short) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_43 [i_24 - 2] [i_24] [i_24] [i_24]))));
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) arr_38 [i_9] [i_23 - 1] [i_15])) : (((/* implicit */int) (unsigned char)255))));
                }
            }
            for (signed char i_25 = 2; i_25 < 17; i_25 += 2) 
            {
                arr_81 [i_25] [i_25] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_59 [i_9] [i_15] [i_25] [i_25])) ? (((/* implicit */int) arr_13 [i_15] [i_25])) : (((/* implicit */int) (short)(-32767 - 1)))))));
                arr_82 [i_9] [i_9] [i_15] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((short) (short)2769))) : (((/* implicit */int) var_9))));
                arr_83 [i_9] [i_15] [i_15] [i_25] = ((/* implicit */short) (unsigned char)123);
            }
            var_55 = ((/* implicit */signed char) ((((/* implicit */int) (short)2047)) & (((((/* implicit */_Bool) arr_79 [i_9] [i_15] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)1))))));
        }
        for (unsigned char i_26 = 3; i_26 < 19; i_26 += 1) 
        {
            arr_87 [i_26] = ((/* implicit */short) ((min((2825336709U), (((/* implicit */unsigned int) (unsigned char)119)))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-6197)))))));
            arr_88 [i_9] [i_26] [i_26 + 1] = ((/* implicit */short) (~((-((-(((/* implicit */int) var_12))))))));
            var_56 &= ((/* implicit */long long int) var_10);
            arr_89 [i_9] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (((+(((/* implicit */int) var_3)))) >= ((-(((/* implicit */int) (signed char)72))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        }
        for (unsigned char i_27 = 0; i_27 < 21; i_27 += 2) 
        {
            var_57 &= ((/* implicit */unsigned char) (-(((((/* implicit */long long int) max((360064986U), (((/* implicit */unsigned int) (unsigned char)40))))) - (((((/* implicit */_Bool) arr_72 [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) (short)29326))) : (2632687656537884417LL)))))));
            var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)68))) << (((min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (197290943U)))), ((+(8509632226719163150LL))))) - (82LL)))));
            var_59 = ((/* implicit */long long int) min(((+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)128)))))), (((((/* implicit */_Bool) min(((unsigned char)21), ((unsigned char)34)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) arr_17 [i_9] [i_27])) - (((/* implicit */int) var_2))))))));
        }
        var_60 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14347))))) ? (((/* implicit */int) arr_42 [i_9] [i_9])) : (((/* implicit */int) (unsigned char)239))))) ? ((+(((/* implicit */int) arr_52 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) arr_28 [i_9]))));
        arr_92 [i_9] = ((unsigned int) ((((/* implicit */_Bool) (short)21153)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (-7352983000568166605LL)));
        var_61 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((arr_16 [i_9]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    }
    var_62 = var_5;
    var_63 |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) var_12))))));
}
