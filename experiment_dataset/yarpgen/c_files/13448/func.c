/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13448
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_5))));
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)18778))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [10ULL] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned int) (short)-12296)), (8388544U))));
                                var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3])))))) || (((/* implicit */_Bool) (-(3966239261U)))))))) & ((+(4212068083307194082LL)))));
                                var_21 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) (signed char)-111))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (arr_3 [i_4] [i_2] [i_1]) : (((/* implicit */unsigned long long int) min((arr_7 [i_3] [i_2]), (((/* implicit */unsigned int) arr_6 [i_0] [i_1])))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23277))) >= (arr_3 [i_4] [i_3] [i_0]))) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_2] [i_0])) : (((/* implicit */int) max(((short)24084), (((/* implicit */short) arr_1 [i_1]))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned int) (((((-(arr_4 [i_0] [i_1] [i_1 + 3] [i_2]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1]))))) != (((((/* implicit */_Bool) arr_3 [(signed char)5] [i_1 - 1] [i_2])) ? (var_16) : (((((/* implicit */_Bool) (signed char)111)) ? (66846720U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18770)))))))));
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4228120576U)) ? (44430933U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((-(((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-23944)), (arr_6 [i_0] [i_1]))))))) ? (748465890U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16809))));
                }
            } 
        } 
    } 
    var_25 = var_4;
    /* LoopSeq 3 */
    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 3) 
    {
        var_26 = ((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-23944))))) >= (((4294967286U) / (708055110U))))) ? (arr_16 [i_5]) : (min((arr_18 [i_5]), (max((arr_16 [i_5]), (((/* implicit */unsigned int) (unsigned char)1)))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)43505)), (arr_18 [9U])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_5 + 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5])))))))) | ((-(2997973615083921901LL)))));
        var_27 = arr_17 [i_5];
    }
    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6]))) * ((-(1297746940U)))));
        arr_24 [13] [13] = ((/* implicit */short) (-(((/* implicit */int) (!(((((/* implicit */_Bool) -1783462842)) && (((/* implicit */_Bool) 3754370283U)))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) var_12);
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) 2136068642U))));
        var_30 = ((/* implicit */short) (-(arr_25 [i_7])));
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 2; i_9 < 18; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_31 = ((/* implicit */long long int) 18446744073709551615ULL);
                        var_32 = ((/* implicit */long long int) (!(var_5)));
                    }
                } 
            } 
            arr_35 [i_8] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_7] [11LL])) ? (2835585546U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_27 [i_7] [i_8])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [(short)12] [(short)12]))) : (((((/* implicit */_Bool) 3754370270U)) ? (540597022U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30284))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12085))) * (((((/* implicit */_Bool) (short)-12085)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) | (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (signed char)(-127 - 1))))))))));
            var_34 = ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_3))))))) | (((((/* implicit */unsigned long long int) 4294967295U)) - (((((/* implicit */_Bool) (short)22631)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9369))) : (arr_33 [i_8] [i_8] [i_8] [i_8]))))));
            var_35 = ((/* implicit */short) arr_30 [i_8] [i_8] [10ULL] [i_8]);
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_12 = 2; i_12 < 19; i_12 += 1) /* same iter space */
            {
                var_36 = ((((/* implicit */_Bool) min((arr_34 [i_12] [i_12 - 2] [i_12]), (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((arr_40 [i_7]), (arr_40 [i_7])))) : (((/* implicit */int) arr_27 [i_12 + 1] [i_12 - 2])));
                var_37 = ((unsigned long long int) (((-(2147483630))) ^ (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_6))))));
            }
            for (long long int i_13 = 2; i_13 < 19; i_13 += 1) /* same iter space */
            {
                arr_44 [i_11] = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) var_4)))))) & ((~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_26 [i_7]))))))));
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) arr_39 [i_7] [i_11] [i_13]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_11])) && (((/* implicit */_Bool) 1737850301U)))))))) > (max(((-(arr_30 [i_11] [i_11] [i_11] [i_11]))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_39 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [(_Bool)1] [13U]))) ^ (4294967285U)))) | (arr_30 [i_11] [i_13] [i_13 + 1] [i_11]))), (((/* implicit */long long int) (~(arr_41 [i_13 + 1] [i_11]))))));
                    arr_47 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 15725867032565908546ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-22641))) ^ (-8913551262577484077LL))))) > (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
                for (signed char i_15 = 1; i_15 < 18; i_15 += 3) 
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25566)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_32 [i_15]))))) : (((-2997973615083921887LL) / (((/* implicit */long long int) 27U))))))) || (((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_13] [i_15]))));
                    arr_50 [i_7] [i_13] [i_11] [i_15] = ((/* implicit */signed char) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 2; i_16 < 17; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */long long int) (unsigned short)39957);
                        var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3415))))) ? (((/* implicit */unsigned long long int) 2997973615083921892LL)) : ((~(12214346920453154178ULL))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11)))) >> (((((((/* implicit */_Bool) (signed char)-31)) ? (228897430) : (((/* implicit */int) (_Bool)1)))) - (228897415))))))));
                        var_43 += ((/* implicit */unsigned int) var_5);
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((arr_25 [(short)8]), (arr_46 [i_11] [i_11] [18ULL] [i_15])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)22)) ? (var_12) : (((/* implicit */unsigned long long int) arr_34 [i_7] [i_11] [i_13 - 1]))))))) : (((13950676353878691683ULL) << (((((/* implicit */int) (short)(-32767 - 1))) + (32830)))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) arr_38 [i_11]);
                        var_46 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) >= (arr_49 [i_11] [i_15 + 2] [i_15 - 1] [18LL] [i_15 - 1] [i_15]))))) : (arr_30 [i_11] [3ULL] [i_17] [i_17])));
                    }
                }
            }
            /* vectorizable */
            for (long long int i_18 = 2; i_18 < 19; i_18 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [(short)9] [(short)9] [i_18])) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)9351)))))));
                /* LoopNest 2 */
                for (short i_19 = 2; i_19 < 18; i_19 += 2) 
                {
                    for (long long int i_20 = 2; i_20 < 19; i_20 += 3) 
                    {
                        {
                            arr_64 [i_7] [(short)18] [i_11] = ((/* implicit */long long int) (~(arr_49 [i_11] [i_19 - 2] [i_18] [(short)2] [i_11] [i_11])));
                            var_48 -= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_7] [i_7] [i_18] [i_19 + 1] [i_19] [i_20]))) < (arr_30 [i_19] [i_11] [i_18 - 1] [10LL]))))) / (var_17));
                        }
                    } 
                } 
            }
            arr_65 [i_7] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [15U] [(short)0] [i_11] [i_7] [i_7]))) : (1459381749U))) | (((/* implicit */unsigned int) arr_29 [2ULL] [i_11]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_11]))))) : (-984943823215477405LL)));
        }
        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
        {
            arr_70 [i_7] [i_7] = (short)(-32767 - 1);
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 3) 
                {
                    {
                        var_49 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_61 [8] [4LL] [i_7] [i_7] [i_21] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((7432269968814555097ULL) % (2476597473111220882ULL))));
                        var_50 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(16089605425298147713ULL)))) ? (max((((/* implicit */long long int) (signed char)127)), (-8285574236393393975LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) ^ (((long long int) ((unsigned long long int) var_17)))));
                    }
                } 
            } 
        }
        arr_76 [13ULL] = ((/* implicit */short) arr_75 [i_7] [i_7] [i_7] [i_7]);
    }
    var_51 = ((545577039U) * (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 16089605425298147713ULL)))), (((((/* implicit */int) var_13)) != (((/* implicit */int) var_9)))))))));
}
