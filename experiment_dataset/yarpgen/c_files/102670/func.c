/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102670
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
    var_19 &= ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 376572900U)) : (-5076237536647491389LL)))))));
    var_20 &= ((/* implicit */int) min(((-(((var_13) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) ((unsigned char) var_7))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((long long int) -573311766)) - (((/* implicit */long long int) max((var_0), (((/* implicit */int) arr_0 [i_0]))))))))));
        var_21 = ((/* implicit */_Bool) ((int) var_12));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_11)) : (var_0))))));
        var_24 ^= ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) == (-5076237536647491389LL)));
            arr_8 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -5076237536647491389LL)))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_26 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((_Bool) var_16))), (((-399423305) ^ (((/* implicit */int) (_Bool)1)))))) << (((arr_7 [i_3] [12U] [12U]) - (7300553709083235105ULL)))));
                arr_11 [i_1] [i_2] [i_2] [(unsigned char)12] &= ((/* implicit */signed char) (~((~(var_16)))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_27 &= ((/* implicit */long long int) ((unsigned char) var_9));
                        arr_18 [i_1] [i_1] [i_6] = ((long long int) 5076237536647491389LL);
                    }
                    var_28 = ((/* implicit */unsigned char) var_17);
                }
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    arr_21 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5076237536647491389LL)) ? (9419850105282708568ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 + 2]))) : ((-(5170696137501500222LL)))));
                    var_29 = ((/* implicit */int) min((var_29), ((-(((/* implicit */int) ((_Bool) var_9)))))));
                    var_30 ^= ((/* implicit */long long int) var_11);
                }
                var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 5076237536647491389LL)) * (((unsigned long long int) var_12))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((unsigned short) arr_13 [i_1 - 3] [(unsigned char)8] [i_1 - 3] [i_1 + 1])))));
                var_33 &= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                arr_26 [i_8] = ((/* implicit */signed char) ((5076237536647491388LL) - (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (-438018366) : (2108670795)))))));
                arr_27 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 17933184437596198964ULL)))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (((~(var_5))) / (((/* implicit */long long int) (-(((/* implicit */int) max((var_12), ((_Bool)1))))))))))));
                var_35 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_22 [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))));
            }
        }
        var_36 -= ((/* implicit */long long int) (short)14197);
        var_37 += ((/* implicit */long long int) max(((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_15)))))), ((~((~(((/* implicit */int) (short)-12216))))))));
    }
    var_38 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (var_5)));
    /* LoopSeq 1 */
    for (signed char i_9 = 1; i_9 < 20; i_9 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) var_17))))))));
                arr_35 [i_9] [i_9 + 2] [i_9 + 2] [23ULL] &= ((/* implicit */unsigned int) var_6);
                /* LoopSeq 4 */
                for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    arr_40 [i_9] [(unsigned short)3] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_3);
                    arr_41 [i_9] [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) (~((~(((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                }
                for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_45 [i_11] [i_11] [i_10] [i_9] = ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        arr_48 [i_13] [i_10] [i_11] [i_13] [22LL] &= (~((~(var_10))));
                        var_40 += ((/* implicit */unsigned short) var_14);
                    }
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-5076237536647491389LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) * ((~(((var_1) >> (((((/* implicit */int) var_15)) - (214)))))))));
                        arr_51 [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                    }
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (~((~((~(var_5))))))))));
                }
                /* vectorizable */
                for (unsigned char i_16 = 1; i_16 < 20; i_16 += 4) 
                {
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (((-(10300304663759889033ULL))) ^ (((/* implicit */unsigned long long int) (~(906291863)))))))));
                    var_44 = ((/* implicit */int) (-(var_8)));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_17)), (((long long int) var_9)))), (((/* implicit */long long int) ((unsigned int) 906291863))))))));
                    var_46 = ((/* implicit */long long int) ((((((11677359383285337389ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) * (((/* implicit */unsigned long long int) ((arr_52 [i_10] [i_11] [i_11] [i_9 - 1]) * (arr_50 [i_9] [i_17])))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1970347800)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)173)))) / (((/* implicit */int) var_15)))))));
                }
                /* LoopSeq 1 */
                for (long long int i_18 = 1; i_18 < 22; i_18 += 1) 
                {
                    arr_59 [i_11] &= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27430)))))) >= (((long long int) arr_28 [i_9])))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-14197)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) var_10)) : (max((((/* implicit */long long int) var_16)), (-5188634902308068267LL)))))));
                    arr_60 [i_9] [i_11] [i_9] [i_18] |= var_10;
                }
            }
            arr_61 [i_9] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_11)))))) >= (((/* implicit */int) (unsigned short)52582))));
            var_47 = ((/* implicit */long long int) ((((/* implicit */int) (short)-12216)) ^ ((~((~(((/* implicit */int) (unsigned short)12953))))))));
        }
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            arr_66 [i_9] [i_19] = ((/* implicit */unsigned char) var_6);
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (+(((unsigned long long int) (!(((/* implicit */_Bool) -6762185163183137811LL))))))))));
                var_49 |= ((/* implicit */unsigned long long int) ((long long int) ((min((((/* implicit */unsigned long long int) var_12)), (var_6))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18))))))));
            }
            for (long long int i_21 = 3; i_21 < 23; i_21 += 1) 
            {
                var_50 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_17))))));
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    for (long long int i_23 = 0; i_23 < 24; i_23 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) max(((~((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((-2293324806499094031LL) + (((/* implicit */long long int) var_0))))))))));
                            var_52 = max((((/* implicit */long long int) (~(((/* implicit */int) arr_58 [i_9 + 2] [i_9 + 4] [i_9] [i_21 - 3] [i_9 + 2] [i_21 + 1]))))), ((~(-1489332458930461301LL))));
                            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) (~((+(((unsigned long long int) (signed char)34)))))))));
                            var_54 = ((/* implicit */unsigned int) max(((_Bool)1), (var_18)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_24 = 2; i_24 < 22; i_24 += 3) 
                {
                    var_55 = ((/* implicit */unsigned char) max(((short)13745), (((/* implicit */short) (_Bool)1))));
                    arr_81 [i_9] [i_19] [i_19] [i_24] = min((((/* implicit */unsigned long long int) ((_Bool) (~(var_8))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (5188634902308068267LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_28 [i_9])))))) : (10106979109406491413ULL))));
                }
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 24; i_25 += 1) 
                {
                    for (unsigned short i_26 = 0; i_26 < 24; i_26 += 1) 
                    {
                        {
                            var_56 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(4256391894U)))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 5188634902308068267LL)))))) < (((/* implicit */unsigned long long int) (~(max((5188634902308068266LL), (((/* implicit */long long int) var_7)))))))));
                            var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) max(((~(max((-5188634902308068267LL), (3661183143274042914LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_14)) + (((unsigned int) (unsigned char)12))))))))));
                            arr_87 [i_9] [i_19] [i_21] [i_19] [i_26] = ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_9] [(short)11] [i_21 - 2] [(short)11] [i_9 + 3]))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) | (2195788347472344433ULL))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_28 = 0; i_28 < 24; i_28 += 2) 
            {
                arr_93 [i_9] [i_27] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_80 [i_9] [i_27] [i_27 - 1] [17LL] [i_27]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-64)));
                var_58 = ((/* implicit */unsigned short) (~(((unsigned int) var_4))));
            }
            var_59 = ((/* implicit */short) (+((~(((/* implicit */int) ((_Bool) (unsigned short)0)))))));
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_60 = ((/* implicit */long long int) var_18);
            var_61 = ((/* implicit */int) ((long long int) ((((/* implicit */int) max(((unsigned char)12), ((unsigned char)227)))) != (((/* implicit */int) var_17)))));
            /* LoopNest 3 */
            for (unsigned int i_30 = 0; i_30 < 24; i_30 += 1) 
            {
                for (short i_31 = 0; i_31 < 24; i_31 += 4) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            var_62 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned short)38795))) ? (((/* implicit */int) ((unsigned char) max((1152921229728940032ULL), (((/* implicit */unsigned long long int) var_18)))))) : ((+(((/* implicit */int) arr_64 [i_9 - 1]))))));
                            var_63 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38795))) ^ (8146439409949662583ULL));
                            var_64 = ((/* implicit */unsigned long long int) ((unsigned short) (((+(arr_39 [i_9] [i_32]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_30] [i_9] [i_30] [i_9] [(unsigned short)4] [i_30])) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)-101))))))));
                            arr_106 [i_9] [i_30] [(unsigned short)14] [(short)3] [i_32] = ((/* implicit */int) ((6091703611874957532ULL) | (((/* implicit */unsigned long long int) -4861964395408645205LL))));
                            arr_107 [i_9 + 1] [i_9] [i_9 + 1] [i_30] [i_9 - 1] = ((/* implicit */short) (signed char)101);
                        }
                    } 
                } 
            } 
        }
        arr_108 [i_9 - 1] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) (unsigned char)243))))))) ? (((((((((/* implicit */long long int) ((/* implicit */int) var_18))) + (var_4))) + (9223372036854775807LL))) << (((min((10350171458310299056ULL), (((/* implicit */unsigned long long int) -5381638135740517822LL)))) - (10350171458310299056ULL))))) : (((/* implicit */long long int) (~(var_14))))));
    }
}
