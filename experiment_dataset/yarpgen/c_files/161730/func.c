/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161730
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
    var_16 = ((/* implicit */short) ((long long int) max((((/* implicit */long long int) var_3)), ((~((-9223372036854775807LL - 1LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))));
                arr_5 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_7)))))) ^ ((((~(-1682097173))) ^ (((/* implicit */int) (short)0))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 931563020409265443ULL))));
                var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) ((unsigned int) -1225552514))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        arr_10 [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (((-(arr_1 [i_2]))) / (((/* implicit */int) (unsigned char)53))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) arr_1 [(unsigned char)0])) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1))))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) + (3221225472U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15237168162909518903ULL)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (unsigned char)140)))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)0), (arr_16 [i_6] [i_5] [i_4] [i_3])))) << ((((~(arr_19 [i_3]))) - (4190130690228081243ULL)))))))))));
                            arr_23 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((((long long int) min((67106816U), (4294967295U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((1220474558U), (((/* implicit */unsigned int) arr_4 [i_6] [i_5] [i_4]))))) ? (arr_21 [i_3] [i_4] [i_5] [i_6] [i_5] [i_3]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_3] [i_3]))))))))));
                        }
                    } 
                } 
                arr_24 [i_3] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [(unsigned char)10])), (4294967168U)))), (arr_19 [i_4])))));
                arr_25 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) arr_13 [i_3]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_10 = 3; i_10 < 11; i_10 += 2) 
                    {
                        arr_34 [i_10] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_8] [i_4] [i_8] [i_9]))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_10 + 3]))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_11] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_8])), (((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (((/* implicit */int) arr_31 [i_9])) : (((/* implicit */int) arr_31 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_2 [i_11] [i_11]), (((/* implicit */unsigned short) arr_0 [i_3] [i_8]))))))) : (min((((unsigned long long int) 4294967295U)), (((/* implicit */unsigned long long int) arr_20 [i_11] [i_8])))));
                        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) ^ (7649605316000085158LL))), (((/* implicit */long long int) var_7))));
                        var_24 = ((/* implicit */unsigned long long int) min((arr_26 [i_3] [i_4]), ((!(((/* implicit */_Bool) 136U))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */long long int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_12] [i_9 + 2] [i_8] [i_4])) < (((/* implicit */int) var_4))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) var_13)))))))))));
                        var_26 = ((/* implicit */int) arr_20 [i_4] [i_3]);
                        var_27 = ((/* implicit */long long int) max((67106806U), (((/* implicit */unsigned int) ((min((((/* implicit */int) (short)-24206)), (2047))) * (((/* implicit */int) max((var_7), ((_Bool)0)))))))));
                        arr_42 [i_12] [i_12] [i_9 - 1] [i_9 + 2] [i_8] [i_4] [i_3] |= ((/* implicit */unsigned char) arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(0ULL)))))))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((arr_18 [i_8] [i_9 + 2] [i_9 - 1] [i_9] [i_9 + 1] [i_9]), (((/* implicit */long long int) arr_16 [i_9] [i_8] [i_4] [i_3])))))));
                }
                /* vectorizable */
                for (short i_13 = 2; i_13 < 12; i_13 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_3] [i_13 - 2] [i_13 - 1] [i_13 + 2])) ? ((~(((/* implicit */int) arr_28 [i_13] [i_13 - 1] [i_13] [i_13])))) : (((/* implicit */int) arr_28 [i_3] [i_13 + 1] [i_13 - 1] [i_13 + 2]))));
                    var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_13 - 2] [i_4])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_13 + 2]))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_13])) ? (((/* implicit */int) arr_43 [i_13 - 1] [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_12 [i_8]))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_15 [i_13 - 1])) - (arr_18 [i_4] [i_13 + 2] [i_4] [i_13] [i_3] [i_4])));
                }
                for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((long long int) 2147483647))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : ((~(arr_18 [i_3] [i_8] [i_8] [i_14] [i_4] [i_3])))))));
                    var_35 = ((/* implicit */short) (~(((unsigned int) arr_40 [i_14 + 3] [i_14 + 3] [i_14 + 3] [i_14 - 2]))));
                    var_36 = arr_43 [i_3] [i_14 - 2] [i_8] [i_3] [i_14 + 2] [i_4];
                    arr_47 [i_3] [i_4] [i_4] [i_14] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_30 [i_14 + 3] [i_14] [i_14 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_38 [(unsigned char)6] [i_8] [i_14 + 2])) > (((/* implicit */int) arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))) : (max((((/* implicit */unsigned long long int) arr_35 [i_3] [i_4] [i_8] [i_3] [i_3] [i_4])), (arr_30 [i_3] [i_3] [i_3]))))), (((unsigned long long int) var_2))));
                }
                var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (unsigned char)69)))));
                arr_48 [i_8] [i_4] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 11413006370711269192ULL))))), ((~(var_13))))));
            }
        }
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            var_38 = ((/* implicit */short) min((((/* implicit */long long int) arr_28 [i_3] [i_15 - 1] [i_15] [i_15 - 1])), (((((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_15]))) > (arr_18 [i_3] [i_3] [i_3] [i_15] [i_15] [i_15]))) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_52 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)248), (((/* implicit */unsigned char) var_7)))))))) + ((+((+(16609470089807353908ULL)))))));
            arr_53 [i_15] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_12))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)127))))))))) <= (arr_29 [i_15 + 1] [i_15] [i_15] [i_3])));
        }
        for (unsigned int i_16 = 4; i_16 < 13; i_16 += 2) 
        {
            var_39 *= ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (unsigned short)9258)) : (((/* implicit */int) arr_45 [i_16] [i_16] [i_16 - 1] [i_3]))))))));
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                arr_59 [i_3] &= 18378772238563967546ULL;
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) min((7112267328007157162LL), (((/* implicit */long long int) (unsigned char)83))));
                            arr_65 [i_19] [i_16 - 3] [i_17] [i_18] [i_19] [i_17] [i_18] = (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3])) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_64 [i_16 - 3])) != (arr_1 [i_18]))))))));
                            arr_66 [i_18] [i_17] = ((/* implicit */unsigned short) ((min((((/* implicit */int) min(((short)-25620), (((/* implicit */short) var_0))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_22 [i_3] [i_16] [i_17] [i_18] [i_19])))))) == (((/* implicit */int) arr_2 [i_3] [i_3]))));
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_16 - 3] [i_16 - 4] [i_16 + 1] [i_16 + 1] [i_16 - 2])) ? (((/* implicit */int) (short)60)) : (((/* implicit */int) (short)32759))))) / (((unsigned int) (signed char)107))));
        }
        arr_67 [i_3] [i_3] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_27 [i_3] [i_3])))));
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            var_42 = ((/* implicit */short) (-((+((~((-9223372036854775807LL - 1LL))))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) var_13);
                        arr_77 [i_3] [i_20] [i_22] [i_22] = max((max((max((arr_69 [i_22] [i_20]), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_73 [i_3] [i_20])), ((short)10953)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)191)))))))));
                    }
                } 
            } 
            arr_78 [i_3] [i_20] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-18699)) & (((/* implicit */int) (unsigned char)128))))));
            var_44 = arr_20 [i_3] [i_20];
        }
        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (((4196092566U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))))))) && (((/* implicit */_Bool) ((10975082228990857685ULL) & (((/* implicit */unsigned long long int) 1682097181))))))))));
        /* LoopNest 3 */
        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 3) 
        {
            for (unsigned short i_24 = 0; i_24 < 14; i_24 += 3) 
            {
                for (unsigned char i_25 = 2; i_25 < 10; i_25 += 1) 
                {
                    {
                        var_46 ^= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_3]))), (((unsigned long long int) (unsigned char)65)))));
                        var_47 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_22 [i_25] [i_25 + 1] [i_25 + 3] [i_25] [i_25 + 1]), (arr_22 [i_25 - 2] [i_25 + 4] [i_25 + 3] [i_25] [i_25 - 2])))), (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_56 [i_3] [i_3] [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) | (((((/* implicit */_Bool) arr_88 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3] [i_25] [i_24] [8LL] [i_3])))))))));
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */int) arr_62 [i_25 + 2])) >= (((/* implicit */int) max((((short) (-9223372036854775807LL - 1LL))), (((/* implicit */short) ((_Bool) arr_69 [i_3] [i_3])))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 2; i_26 < 13; i_26 += 3) 
                        {
                            arr_91 [i_26] [i_25 - 1] [i_24] [i_23] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)75)) && ((_Bool)0)));
                            arr_92 [i_26] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + ((+(max((arr_69 [i_3] [i_24]), (((/* implicit */unsigned long long int) (unsigned char)37))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_49 = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)29)))), (((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)-108)) + (127))))))));
    var_50 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6)))) ? (((/* implicit */unsigned long long int) (+(var_13)))) : (((unsigned long long int) (short)32767)))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))));
}
