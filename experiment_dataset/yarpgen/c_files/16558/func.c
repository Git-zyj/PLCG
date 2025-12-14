/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16558
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (15913807433232949150ULL) : (((/* implicit */unsigned long long int) -1607054707))))) ? ((-(var_9))) : (((/* implicit */int) ((_Bool) -1607054707))))));
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned long long int) ((arr_6 [i_3] [i_0] [i_1] [i_0]) ? (((/* implicit */int) var_11)) : (arr_3 [i_1])))) : (((unsigned long long int) arr_8 [i_1] [i_1] [i_2] [i_3] [i_0] [i_0]))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((4294967295U), (((/* implicit */unsigned int) -1607054729)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 0ULL))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)31747)) && (((/* implicit */_Bool) (short)31744)))))) : (((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [4] [i_3])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)-57))))) : (min((((/* implicit */long long int) -2147483635)), (var_7))))))))));
                            var_19 += ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 4722768712239528397ULL)))) || (((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 6; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (97094679)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((+(4212065505U)))))) ? (((long long int) ((signed char) 0ULL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((0ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))));
                            arr_19 [i_0] [i_1] [i_4 + 4] [i_1] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_5 - 1] [(_Bool)1] [i_5 + 1] [i_5 + 3]) >> (((18446744073709551611ULL) - (18446744073709551595ULL)))))) ? (((((/* implicit */_Bool) arr_7 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31747))) : (arr_7 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_5 + 2] [i_5 + 3] [0] [i_5]) == (arr_7 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 2])))))));
                            var_20 = ((/* implicit */unsigned int) arr_1 [i_4] [i_5]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((arr_13 [i_0] [i_1]) + (((/* implicit */long long int) var_14)))) : ((-(arr_13 [i_6] [i_1])))));
                    var_21 = ((/* implicit */long long int) (-(13970111440070540165ULL)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 6; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) 4ULL)) ? (arr_12 [i_8] [1] [i_7 + 4] [i_1]) : ((~(4212065495U)))))));
                                arr_28 [1] [i_1] [i_6] [i_1] [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)0)), (20ULL)));
                                arr_29 [i_0] [i_1] [i_6] [i_6] [i_7 + 2] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_7))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((max((var_12), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) -979109307))))) | (((unsigned long long int) 9ULL))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))) & ((~((~(4476632633639011454ULL)))))));
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (-((+(((long long int) var_4)))))))));
                    arr_34 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(arr_33 [i_0] [i_0])))) ? (min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_9)))) : (min((((/* implicit */unsigned long long int) arr_33 [i_0] [i_1])), (arr_1 [i_1] [i_9]))));
                    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_3))) ? (((int) 1999131445520807406ULL)) : (((int) arr_9 [i_0])))) >> (((int) ((((/* implicit */_Bool) arr_32 [i_9] [i_1] [i_0])) || ((_Bool)0))))));
                }
                for (int i_10 = 2; i_10 < 7; i_10 += 2) 
                {
                    var_26 = ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_26 [7ULL] [i_1] [i_10 - 2] [7ULL])))) : ((+(arr_11 [i_10] [i_10] [i_10 - 2] [i_1] [(signed char)0] [(signed char)0])))))) : ((~((-(arr_0 [i_0] [(short)2]))))));
                    var_27 += ((/* implicit */unsigned int) (+(317207795)));
                }
            }
        } 
    } 
    var_28 += ((/* implicit */int) ((var_6) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(2448338514U)))) > ((-(1ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_29 = max((((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */int) arr_40 [(signed char)1])) : (((/* implicit */int) arr_40 [i_12])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((var_13) % (var_12)));
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 3; i_15 < 10; i_15 += 4) 
                    {
                        {
                            arr_51 [i_11] [i_11] [i_13] [i_11] [0] [i_11] |= ((/* implicit */short) (~(((/* implicit */int) var_10))));
                            var_31 = ((/* implicit */int) ((arr_39 [i_14 - 1]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_11])))))));
                        }
                    } 
                } 
                arr_52 [i_11] [i_12] [i_13] = ((/* implicit */short) (+(((((-62873273) + (2147483647))) >> (((((/* implicit */int) var_5)) - (53)))))));
            }
            for (unsigned int i_16 = 2; i_16 < 10; i_16 += 4) 
            {
                arr_56 [i_11] [i_11] [0U] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((4476632633639011464ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_16 + 1] [i_11] [7LL])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_54 [4] [i_12] [i_16])) >> (((17411236118240257726ULL) - (17411236118240257697ULL)))))) ? (14518579160200073976ULL) : (14518579160200073988ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((/* implicit */int) arr_42 [i_11] [(signed char)0] [i_16 - 1]))))))));
                var_32 = ((/* implicit */int) (~(((((((/* implicit */_Bool) -936889945)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [9] [i_16 + 1] [i_11]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11] [i_12] [i_16 + 1] [i_11] [i_16 - 1])))))));
            }
        }
        for (unsigned int i_17 = 1; i_17 < 9; i_17 += 4) 
        {
            arr_60 [i_17] [i_17] [5ULL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 12120493504589543033ULL)) ? (-1200423215) : (-1117684603))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_6))) < (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) var_9)))))))));
            var_33 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_6)))));
        }
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)14)) >> (((2013265920U) - (2013265900U))))))))));
        var_35 *= (+(max((((arr_54 [i_11] [i_11] [i_11]) ? (((/* implicit */int) var_6)) : (131071))), (((/* implicit */int) arr_39 [i_11])))));
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 4) 
        {
            for (signed char i_19 = 2; i_19 < 10; i_19 += 1) 
            {
                {
                    var_36 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_19 + 1] [i_18 - 4] [6])) && (((/* implicit */_Bool) arr_58 [i_19 + 1] [i_18 - 2] [6])))))));
                    arr_65 [i_19] = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (6895919826784922647LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1607054707)) || (((/* implicit */_Bool) -22139068))))) : ((~(var_14)))))), ((~(max((arr_48 [i_11] [i_19] [i_19] [i_18 + 1]), (((/* implicit */long long int) -535593568)))))));
                    arr_66 [3ULL] [i_19] [i_19 + 1] = ((/* implicit */signed char) arr_49 [i_18 - 4]);
                    /* LoopSeq 2 */
                    for (long long int i_20 = 2; i_20 < 9; i_20 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 156161501708119101LL)) ? (7953044291854850191LL) : (-156161501708119102LL)));
                        var_38 = ((/* implicit */int) (+(((((/* implicit */long long int) (~(1168862412)))) + (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [0] [0] [i_19]))) : (arr_37 [4LL] [2LL])))))));
                        var_39 = ((/* implicit */int) 18446744073709551606ULL);
                        arr_71 [i_11] [i_19] [i_19] [10LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-156161501708119113LL)))) ? (((/* implicit */unsigned long long int) ((arr_61 [i_19 + 1] [i_19 - 1] [i_18 - 1]) ? (arr_67 [i_20 - 1] [i_19 - 2] [i_19 + 1] [i_18 - 4]) : (arr_70 [i_20 + 2] [i_19 - 2] [i_18] [i_18 - 2])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) | (10958738122622224144ULL)))));
                    }
                    for (signed char i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        var_40 = ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 131065)))))))) - (min((((/* implicit */long long int) var_5)), ((((_Bool)1) ? (((/* implicit */long long int) 2928997542U)) : (-156161501708119117LL))))));
                        arr_74 [i_11] [i_18 - 2] [i_21] [i_19] [i_11] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_19 + 1])) ? (((/* implicit */int) var_11)) : (var_8)))), (min((var_7), (((/* implicit */long long int) var_2)))))))));
                    }
                }
            } 
        } 
    }
}
