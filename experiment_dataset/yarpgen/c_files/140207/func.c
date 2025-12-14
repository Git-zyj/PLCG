/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140207
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned int) var_5)), (var_12))), (((/* implicit */unsigned int) max(((signed char)14), (arr_6 [i_0])))))), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_8 [i_0] [i_0] [i_0] [i_0]))), (min((var_9), (((/* implicit */unsigned short) var_11)))))))));
                        var_20 = ((/* implicit */long long int) max((min((min((arr_7 [i_0] [i_2] [i_3]), (((/* implicit */unsigned long long int) (signed char)14)))), (min((((/* implicit */unsigned long long int) var_4)), (var_7))))), (((/* implicit */unsigned long long int) max((max(((unsigned char)104), (var_6))), (max((var_5), (((/* implicit */unsigned char) arr_0 [i_2])))))))));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_21 = min((min((max((((/* implicit */unsigned long long int) var_8)), (7860202357727394405ULL))), (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_2] [i_5]), ((unsigned short)36101)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((unsigned char)125), ((unsigned char)47)))), (min((arr_5 [i_5]), (((/* implicit */long long int) arr_9 [11ULL] [i_0] [i_2] [(unsigned short)6] [i_0]))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((min((min((14ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_18)), (var_13)))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (unsigned char)102)), ((unsigned short)63))), (((/* implicit */unsigned short) min(((signed char)96), ((signed char)-96))))))))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -8683632750538540362LL)), (6009016967742688139ULL)));
                            arr_18 [i_0] [i_4] [i_2] [4ULL] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((max((var_2), (((/* implicit */short) var_15)))), (((/* implicit */short) max((((/* implicit */unsigned char) arr_13 [i_6] [i_6 + 1] [i_6 + 1] [i_6])), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (min((((/* implicit */long long int) max((var_8), (((/* implicit */int) var_4))))), (min((arr_5 [i_2]), (((/* implicit */long long int) arr_17 [i_4] [i_1] [i_2] [i_1] [i_6]))))))));
                            arr_19 [16ULL] [i_1] [i_2] [i_1] [i_4] [i_6 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) (signed char)126)), (var_6))), (max((var_5), (((/* implicit */unsigned char) arr_3 [i_0]))))))), (max((((/* implicit */unsigned int) min((-1826498586), (var_8)))), (max((var_10), (var_12)))))));
                            var_24 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((max((arr_10 [i_0] [i_2] [(unsigned char)22] [i_6 - 1]), (((/* implicit */unsigned char) var_15)))), (((/* implicit */unsigned char) max((var_18), (arr_13 [i_6 + 1] [i_6 + 1] [i_2] [(unsigned short)14]))))))), (min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 8933994142945092196LL)))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) var_5)))))))));
                            var_25 ^= ((/* implicit */unsigned short) max((max((max((8374475503171636091ULL), (3ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [5])), (-129638257718293584LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((short)8711), (((/* implicit */short) (signed char)14))))), (min((arr_2 [(unsigned short)7]), (((/* implicit */int) arr_14 [10ULL])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */short) (_Bool)1);
                            arr_24 [i_7] [i_7] [i_2] [i_1] [i_7] [i_0] = 1ULL;
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (3ULL)));
                            arr_25 [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */unsigned int) (unsigned char)6);
                        }
                        var_28 = ((/* implicit */unsigned long long int) max((max((max((((/* implicit */long long int) var_6)), (-6925081742176273361LL))), (((/* implicit */long long int) max(((short)9079), (arr_20 [i_4] [(signed char)10] [i_1] [i_1] [i_0] [i_0])))))), (min((max((-6395703758925842148LL), (((/* implicit */long long int) arr_21 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4])))), (((/* implicit */long long int) max((((/* implicit */short) arr_17 [i_4] [13U] [i_2] [i_1] [i_0])), (arr_20 [i_0] [i_1] [i_1] [(unsigned char)14] [i_4] [i_1]))))))));
                    }
                    arr_26 [i_2] [i_1] &= ((/* implicit */unsigned short) max((max((max((17ULL), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_1] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned short) (signed char)-30))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)))), (max((arr_2 [i_2]), (((/* implicit */int) var_4)))))))));
                    var_29 = ((/* implicit */unsigned char) max((max((max((arr_5 [i_0]), (arr_22 [i_0] [i_0] [i_2]))), (((/* implicit */long long int) max((15728640), (((/* implicit */int) arr_6 [i_0]))))))), (((/* implicit */long long int) min((-679212833), (((/* implicit */int) (unsigned char)251)))))));
                    arr_27 [i_1] [21ULL] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((max((var_9), (((/* implicit */unsigned short) (signed char)108)))), (((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned char) (signed char)113)))))))), (min((((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned char) arr_6 [i_2]))))), (min((var_12), (((/* implicit */unsigned int) -679212833))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned char) (signed char)-10)), ((unsigned char)250))), (((/* implicit */unsigned char) max((arr_16 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9]), ((signed char)-120))))))), (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)104))))))));
                            var_31 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_8 + 3] [i_1])), (18446744073709551604ULL))), (((/* implicit */unsigned long long int) min((arr_33 [i_8 + 1] [i_2] [i_0]), (((/* implicit */long long int) arr_15 [i_0] [i_1] [(unsigned char)1] [i_0] [i_2] [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) max((max(((unsigned short)24064), (((/* implicit */unsigned short) (short)9954)))), (((/* implicit */unsigned short) max((var_5), (arr_15 [i_9] [i_9] [i_8] [(unsigned short)7] [(signed char)8] [i_1] [i_0])))))))));
                            var_32 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned char) var_18))))), (min((((/* implicit */unsigned short) (unsigned char)10)), (var_9)))))), (max((((/* implicit */unsigned long long int) max((-679212833), (((/* implicit */int) (short)-32764))))), (max((arr_7 [i_8 + 2] [(unsigned short)5] [i_8 + 1]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                            var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((min((var_8), (((/* implicit */int) (unsigned char)202)))), (((/* implicit */int) max(((unsigned short)12040), (((/* implicit */unsigned short) var_6)))))))), (max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) (unsigned char)252))))), (min((((/* implicit */unsigned long long int) (unsigned short)7)), (arr_7 [i_8 + 1] [i_9 + 1] [i_8 + 1])))))));
                        }
                        arr_34 [(unsigned short)2] [i_1] [(unsigned short)2] [i_1] &= ((/* implicit */int) min((min((max((var_1), (((/* implicit */unsigned short) (short)31977)))), (min((((/* implicit */unsigned short) var_3)), ((unsigned short)40540))))), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned char) (signed char)103)), ((unsigned char)32))), (max(((unsigned char)152), (((/* implicit */unsigned char) arr_14 [i_8])))))))));
                        var_34 = ((/* implicit */long long int) max((min((max((((/* implicit */int) arr_1 [i_0] [i_1])), (679212832))), (min((var_8), (((/* implicit */int) (signed char)-113)))))), (((/* implicit */int) max((max((((/* implicit */short) (signed char)-1)), ((short)16263))), (((/* implicit */short) max((var_6), (((/* implicit */unsigned char) var_18))))))))));
                        var_35 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) max(((unsigned short)24995), ((unsigned short)24064)))), (min((((/* implicit */unsigned long long int) (unsigned short)19200)), (var_7))))), (max((18446744073709551614ULL), (((/* implicit */unsigned long long int) -679212824))))));
                    }
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((min(((short)12960), (((/* implicit */short) arr_10 [i_2] [i_2] [i_2] [i_2])))), (max((var_2), (((/* implicit */short) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)11)), (arr_36 [i_0] [18ULL] [i_2] [(unsigned short)14])))), (min((8796093022206ULL), (((/* implicit */unsigned long long int) (unsigned char)240))))))));
                        var_36 = ((/* implicit */signed char) max((((/* implicit */long long int) max((max((arr_31 [i_2] [i_2]), (((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_1] [i_0])))), (((/* implicit */int) min((var_13), ((unsigned char)1))))))), (max((max((((/* implicit */long long int) arr_13 [i_10] [i_2] [i_1] [23U])), (-4467127060318232546LL))), (((/* implicit */long long int) min((((/* implicit */short) var_6)), (var_4))))))));
                        var_37 = min((max((((/* implicit */unsigned int) max((((/* implicit */short) var_11)), (arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_10])))), (min((((/* implicit */unsigned int) (signed char)104)), (arr_36 [i_0] [i_0] [i_2] [i_10]))))), (((/* implicit */unsigned int) max((max((((/* implicit */int) var_15)), (1625800607))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)160)), (var_3))))))));
                        arr_39 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) max(((unsigned short)65535), ((unsigned short)41472)))), (min((max((((/* implicit */long long int) var_4)), (arr_22 [i_10] [i_1] [i_0]))), (((/* implicit */long long int) max((var_9), (arr_30 [i_0] [i_2]))))))));
                    }
                }
            } 
        } 
    } 
    var_38 -= ((/* implicit */unsigned short) max((max((max((5369579196034394181ULL), (((/* implicit */unsigned long long int) var_9)))), (max((((/* implicit */unsigned long long int) -1064105471)), (var_7))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned char)102)), (-3245206251487819141LL))), (((/* implicit */long long int) (signed char)-11)))))));
    var_39 += ((/* implicit */unsigned char) min((min(((unsigned short)33736), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1))))));
    var_40 = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) var_18)), (2ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)252), (var_13)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_18)), ((unsigned char)121)))), (max((6869577066047349414ULL), (((/* implicit */unsigned long long int) var_10))))))));
}
