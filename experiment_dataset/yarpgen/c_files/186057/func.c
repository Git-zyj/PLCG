/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186057
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
    var_12 |= ((/* implicit */unsigned char) min((var_10), (var_0)));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) (signed char)12))))) ? (((/* implicit */int) (unsigned short)1922)) : (((/* implicit */int) (signed char)(-127 - 1)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((var_9) && (((/* implicit */_Bool) 3611997964443247339LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14710))) : (26U)))), (min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_5))), (((/* implicit */unsigned long long int) 26U))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (((/* implicit */int) arr_4 [18LL] [i_1] [i_1])) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_2))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_7 [i_2] [i_1] [i_2] [i_3]))));
                }
                var_17 = ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6230297820330559213LL)))))));
                            var_19 += (!(((/* implicit */_Bool) var_1)));
                            var_20 += ((/* implicit */signed char) ((((/* implicit */long long int) ((var_6) | (var_4)))) | (((var_1) ^ (((/* implicit */long long int) 4110673399U))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65506))) ^ (8794451471113656714ULL))))));
                        var_22 = ((/* implicit */short) var_10);
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_10) : (6230297820330559213LL))))));
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -9223372036854775792LL)), (max((((/* implicit */unsigned long long int) 6698707076295862154LL)), (9633122862929786710ULL)))));
        }
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0])) : (9223372036854775792LL))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_17 [i_0] [i_8] [i_0])))))) << (((((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) + (-9223372036854775792LL))))) + (9223372036854775769LL))) - (29LL))))))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((_Bool) max((((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_2))))), (min((((/* implicit */long long int) var_2)), (var_10)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) (~(-6230297820330559213LL)));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((long long int) (_Bool)1))))))));
            }
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
            {
                var_28 *= (+(((((/* implicit */_Bool) (signed char)-44)) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                arr_29 [i_0] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9442)) ? (6230297820330559213LL) : (((/* implicit */long long int) 3662589876U))));
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
            {
                var_29 &= ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)103)), ((short)16626))))));
                arr_32 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */long long int) max((((unsigned int) var_5)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (var_6)))))) == (((((/* implicit */_Bool) 4634516126930107984ULL)) ? (var_0) : (((var_10) | (var_3)))))));
            }
            var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-6230297820330559213LL), (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22314))) : (10LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6230297820330559228LL)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)89))))) ? ((+(arr_10 [i_0] [i_8] [i_0]))) : (max((24U), (((/* implicit */unsigned int) arr_9 [i_0])))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [0] [i_8])))))));
        }
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 18; i_14 += 2) 
                {
                    {
                        var_31 *= ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (long long int i_15 = 3; i_15 < 19; i_15 += 3) 
                        {
                            arr_43 [i_15 - 2] [i_0] [i_13] [i_12] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((unsigned long long int) 4294967269U))))));
                            var_32 = ((/* implicit */int) (signed char)8);
                            arr_44 [i_0] [i_12] [i_13] [i_14] [i_0] [i_14 + 2] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) min((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        }
                        arr_45 [i_12] [i_12] [i_12] [i_14] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 2190433320960LL)) ? (((/* implicit */unsigned int) -2147483620)) : (4294967269U)))));
                    }
                } 
            } 
        } 
    }
    for (short i_16 = 2; i_16 < 23; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                {
                    arr_54 [i_16] [i_16] [i_18] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17] [i_16 - 2])) ? (2147483613) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((arr_51 [i_16 - 2] [i_16 - 2] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-87)))))) : (((/* implicit */int) (signed char)97))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -1374445230))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) : (max((632377419U), (((/* implicit */unsigned int) (unsigned char)0)))))))));
                    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((arr_53 [i_18] [i_16 + 1]), (arr_53 [i_16] [i_16])))))) || (((((/* implicit */_Bool) ((unsigned short) var_5))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)65533)))))));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 23; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 2; i_20 < 24; i_20 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (600378728U))))))), ((+(((/* implicit */int) (unsigned short)26691))))));
                                var_35 |= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (~(((/* implicit */int) var_11))))), ((~(var_3))))), (((3998366712227108308LL) & (4225824660433118733LL)))));
                                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((7356832850953285039LL), (((/* implicit */long long int) (signed char)95))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)14841)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_17]))) : (var_6))))) : ((+(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_61 [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_46 [i_16 - 2]))))))), ((+(8191U)))));
        var_37 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26234))));
        var_38 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) -3074935871979922810LL)))))))) : ((-(((((/* implicit */_Bool) 7356832850953285046LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_51 [18U] [i_16] [(short)16]))))));
    }
    for (unsigned short i_21 = 3; i_21 < 20; i_21 += 4) 
    {
        arr_64 [i_21] = ((/* implicit */unsigned int) var_9);
        var_39 = ((/* implicit */long long int) (-(arr_62 [i_21 + 3])));
    }
    for (long long int i_22 = 0; i_22 < 14; i_22 += 4) 
    {
        arr_69 [i_22] [i_22] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_20 [i_22] [(short)16] [i_22]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [9] [i_22] [i_22] [i_22] [9] [i_22])))))))) ? (-629904497) : (((/* implicit */int) arr_68 [i_22]))));
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_11 [i_22] [i_22] [i_22] [i_22]))))) ? (((((/* implicit */_Bool) arr_21 [i_22] [i_22] [i_22])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [(short)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_47 [i_22] [i_22]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))) > (((/* implicit */int) arr_42 [i_22] [i_22] [(signed char)18] [i_22] [i_22] [i_22] [i_22])))))) : (arr_55 [i_22])));
    }
}
