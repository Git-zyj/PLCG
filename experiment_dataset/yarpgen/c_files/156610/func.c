/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156610
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) 7579603896621100083LL)));
            arr_7 [i_0] [(unsigned char)7] = ((/* implicit */_Bool) var_8);
        }
        var_16 = ((/* implicit */unsigned int) min((var_16), (((unsigned int) ((((/* implicit */_Bool) (short)29674)) ? (9154757950355361410LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            var_17 = var_12;
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-436219548) : (var_5)));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_2])) && (((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2 - 1]))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                var_20 = arr_13 [i_2] [i_4] [i_5];
                var_21 -= ((/* implicit */int) (unsigned char)158);
                /* LoopSeq 2 */
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
                {
                    var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)16319)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [5] [i_5 + 2] [i_6])) && (((/* implicit */_Bool) var_13)))))) : (5847588486051191851LL)));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)29674)) : (((/* implicit */int) (unsigned char)0))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)12642)) ? (var_6) : (var_0))) | ((~(var_7)))));
                }
                for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (arr_18 [i_2 - 2] [i_2 + 3] [i_5 + 3] [i_5 + 1])));
                        var_26 = ((/* implicit */unsigned long long int) (~(((unsigned int) var_7))));
                        var_27 ^= ((/* implicit */long long int) ((var_9) > (var_11)));
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) (((_Bool)1) ? (-300830111) : (-300830110)));
                        arr_32 [i_9] [1LL] [i_5 - 2] [i_4] [i_2 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) - (arr_8 [i_2] [i_4])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-16320)))));
                    }
                    for (int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        arr_36 [(unsigned short)13] [i_7] [i_5 - 2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((arr_22 [i_5 - 2] [i_5 - 2] [i_2 + 4] [i_2 + 4]) * ((-(14488111444417167902ULL)))));
                        arr_37 [i_10] [i_7] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15100495017186592371ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (arr_29 [12U] [i_2] [i_2 + 3] [i_2 - 2] [i_2 + 4])))) : (arr_25 [i_2] [i_4] [i_5 - 3] [i_2])));
                        arr_38 [i_2 - 3] [i_2 - 3] [i_4] [i_5] [i_5 - 1] [i_4] [i_10] |= ((/* implicit */unsigned char) ((10733557587396136692ULL) != (((/* implicit */unsigned long long int) arr_27 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7]))));
                    }
                    var_29 = ((/* implicit */unsigned int) var_6);
                    var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_11) & (var_12)))) * (15289275656091573568ULL)));
                }
                arr_39 [i_2 + 4] [i_2] [i_2] = ((/* implicit */unsigned char) var_13);
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_31 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (arr_12 [i_2 + 1] [i_4] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) | (arr_41 [i_2 - 3] [i_2 + 4] [i_2 + 1])));
                    arr_45 [i_2] [i_2] [18LL] [(_Bool)0] [i_2 + 1] [i_12] = ((/* implicit */unsigned int) ((var_0) < (var_6)));
                }
                var_32 = ((/* implicit */unsigned int) (_Bool)1);
                var_33 = ((/* implicit */long long int) 476994322U);
                arr_46 [i_4] [i_4] |= ((((((((/* implicit */_Bool) arr_18 [i_2] [i_4] [9ULL] [i_2])) ? (arr_18 [i_2 - 2] [i_4] [i_11] [i_11]) : (var_13))) + (2147483647))) << ((((((-(((/* implicit */int) (unsigned char)210)))) + (228))) - (18))));
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                var_34 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) var_4)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 436219547))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))))) : (((/* implicit */int) (short)-16335)));
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                arr_56 [i_2] [i_15] = var_5;
                var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((9224556893003835128ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) 1949574531U)))))));
            }
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
            {
                var_37 *= ((((((/* implicit */_Bool) arr_47 [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))) : (min((arr_9 [i_13]), (((/* implicit */unsigned long long int) var_4)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_2 + 4])) ? (((var_3) << (((arr_53 [i_2 - 2] [i_2 - 2] [i_16]) - (3634244831U))))) : (((long long int) 13477159379503144795ULL))))));
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_23 [i_2 + 1] [i_16])))) / (((arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 3]) / (arr_13 [i_2 + 2] [3U] [i_2 - 2])))));
            }
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) var_8)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 19; i_19 += 1) 
                    {
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_51 [i_18] [i_13])))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_19 [i_19 + 1] [i_18] [i_2 - 3]))));
                        var_41 = ((/* implicit */_Bool) var_5);
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_19 - 2] [i_19 - 2] [i_2 + 1] [i_2] [i_2 - 1])) ? (arr_11 [i_2 + 3]) : (var_3))))));
                    }
                }
                /* LoopSeq 2 */
                for (int i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    arr_69 [i_20] [i_13] [i_20] [i_13] [i_13] = ((/* implicit */int) (((!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_1))))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1162))))))));
                    arr_70 [i_2 - 2] [i_13] [i_17] [i_20] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_61 [11LL] [18ULL] [i_13] [i_13] [i_2 + 3])))) ? (min((-7542846822043947078LL), (var_9))) : (((((/* implicit */_Bool) -5852271405467675883LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16333))) : (7542846822043947077LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16320)) ? (7382795232837829978ULL) : (((/* implicit */unsigned long long int) 4122977484U))))) ? (min((9479923269551451031ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) max((arr_12 [i_2 - 2] [(short)10] [i_2 - 2]), (((/* implicit */long long int) 4294967284U)))))))));
                    var_43 = ((/* implicit */long long int) ((var_6) < (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483627)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20)))))));
                }
                for (unsigned int i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    arr_75 [i_13] &= ((/* implicit */short) ((max((arr_34 [i_2 - 1] [i_2 - 1] [4LL] [i_2 + 2] [i_2 + 1] [i_2 + 4]), (((/* implicit */unsigned int) var_4)))) & (((/* implicit */unsigned int) arr_71 [i_21] [i_13] [4LL] [i_2 + 2]))));
                    var_44 = ((/* implicit */unsigned long long int) var_5);
                    arr_76 [i_21] [i_21] [i_21] [i_21] = max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_2)))) - (((/* implicit */int) ((var_11) != (165009171549525582LL))))))), (((((/* implicit */_Bool) arr_51 [i_21] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_51 [i_21] [i_13]))));
                }
                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1984279374505655556LL)) ? (min((-339221151806265646LL), (((/* implicit */long long int) (unsigned short)57385)))) : (5934509011475085751LL)));
                /* LoopSeq 2 */
                for (long long int i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) max((((arr_9 [i_17]) ^ (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */long long int) arr_34 [i_2 + 3] [i_2 + 3] [i_13] [i_13] [i_17] [i_22]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19055)) & (545179525)))))))));
                    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (+(-1372234966))))));
                    var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1549196949U)) && (((/* implicit */_Bool) -8378816053947976179LL))))), (min((arr_12 [i_2 + 3] [i_2 + 1] [i_2 - 2]), (arr_12 [i_2 + 2] [i_2 + 2] [i_2 - 2]))))))));
                    arr_80 [10U] [i_17] [10U] [i_22] |= ((/* implicit */unsigned long long int) var_13);
                    arr_81 [i_2 + 3] [i_2 + 3] [i_22] [i_22] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4170882801U)), (18446744073709551608ULL)));
                }
                /* vectorizable */
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) > (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    var_50 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16564)) && (((/* implicit */_Bool) 963209560U))));
                }
            }
            arr_85 [i_2] [i_13] [i_13] = ((/* implicit */unsigned int) ((((((long long int) var_4)) < (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) min((((int) arr_28 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 3] [i_2 - 2])), (((/* implicit */int) arr_60 [i_2] [i_2] [i_2] [i_2 + 4]))))) : ((-(((((/* implicit */long long int) arr_61 [i_2] [(_Bool)1] [i_13] [i_2] [i_13])) % (var_12)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 3) 
        {
            var_51 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_25 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 2]) : (((/* implicit */unsigned long long int) var_13)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (min((var_9), (arr_27 [13LL] [(_Bool)1] [i_2 - 1] [12ULL] [18ULL]))))))));
            arr_88 [18U] [i_24] [18U] &= var_1;
        }
        var_52 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_63 [i_2 - 1] [i_2] [i_2] [(unsigned short)0] [i_2 - 3] [i_2])), ((+(((long long int) arr_68 [i_2 + 3] [i_2] [i_2 - 1]))))));
    }
    var_53 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_4)), (min((165009171549525590LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)107)))))))));
}
