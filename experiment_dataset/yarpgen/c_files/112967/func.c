/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112967
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
    var_18 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > ((+(((/* implicit */int) (unsigned short)3712)))))))) : (min((((/* implicit */long long int) (~(arr_0 [i_0])))), (((long long int) 2147483645))))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0]))))) & (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) var_2)))))))), (((arr_2 [5]) % (((var_10) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_8 [12] = ((/* implicit */short) (-(((((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3])) * (((/* implicit */int) (_Bool)0))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [5U])) : (((/* implicit */int) var_8)))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)6] [i_2] [i_1] [i_0]))) == (var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)0] [i_2 - 2] [(unsigned char)0] [(unsigned char)0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-552))))) ? (((((/* implicit */int) arr_7 [i_0] [i_2 + 1])) & (((/* implicit */int) arr_12 [4LL] [i_1] [i_1] [i_1] [(unsigned short)15])))) : (((/* implicit */int) arr_12 [i_1 - 2] [3] [15ULL] [i_1 - 2] [i_1 - 1]))))) : (max((((3401424238U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)160))))))))))));
                        arr_13 [4ULL] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_7 [i_3] [i_2]), (((/* implicit */unsigned char) var_10))))), (((((/* implicit */int) var_15)) - (((/* implicit */int) var_10))))));
                    }
                } 
            } 
            var_23 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [13] [i_1] [i_1])) ? (11657522572012832269ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))) ? (-3491697651560675045LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) -2892637878906303511LL))));
                arr_16 [i_4] [(_Bool)0] = ((/* implicit */unsigned int) var_17);
                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1 + 2])) <= (arr_15 [i_1 - 3] [i_4] [i_1 - 3])));
            }
            arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((signed char) var_12)), (((/* implicit */signed char) ((6789221501696719349ULL) >= (((/* implicit */unsigned long long int) var_5)))))))) ? (((var_12) ? (max((arr_2 [i_1 - 2]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-40)) ^ (((/* implicit */int) var_3)))), (arr_10 [i_1 + 2] [i_1 + 1]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((((/* implicit */_Bool) arr_15 [i_5 + 2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-2892637878906303495LL))) : (((/* implicit */long long int) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-556))))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 - 4])) ? (((/* implicit */int) arr_9 [i_6] [i_5 - 3] [i_6])) : (arr_25 [i_6] [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 4])));
                        arr_27 [i_7] [i_0] [i_0] [3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_4))) + (((((/* implicit */int) arr_7 [i_0] [i_0])) >> (((18446744073709551615ULL) - (18446744073709551608ULL)))))));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((int) (unsigned short)34281)) >> (((((/* implicit */int) (signed char)127)) - (100)))));
                    }
                } 
            } 
            arr_28 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [9U] [9U] [9U] [9U] [i_5]))) % (7219929542507374876LL)));
        }
        for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8 - 4] [i_8 - 4] [i_0])) ? (8101814570113838259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191)))))) ? (((/* implicit */int) arr_29 [3ULL] [i_8] [(_Bool)1])) : (((/* implicit */int) (short)8189)))) << (((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) ^ (-2892637878906303511LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8189))) : (((((/* implicit */_Bool) arr_24 [14ULL] [10ULL] [10ULL] [i_0] [10ULL])) ? (arr_18 [i_8] [(unsigned short)14]) : (arr_2 [i_0]))))) - (8167ULL)))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_29 [i_8] [(unsigned char)3] [i_8]), (((/* implicit */unsigned char) var_15)))))) > (18127010146775242777ULL))))) <= (var_5)));
                            var_30 = ((/* implicit */unsigned int) (~(((long long int) ((((/* implicit */_Bool) (unsigned char)43)) ? (arr_10 [(unsigned short)8] [i_8]) : (((/* implicit */int) (short)556)))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_32 [(_Bool)1] [(_Bool)1])) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0])))) | (((/* implicit */int) arr_33 [i_8] [i_8]))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [(signed char)0]))) ^ (arr_2 [i_11])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 701684383)) : (562949953421311ULL))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [i_9]))))))));
                            var_32 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)255)) : (var_0)))))) ^ (var_7));
                            var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_33 [i_0] [i_0])), ((+(min((((/* implicit */unsigned long long int) var_15)), (arr_19 [i_10] [i_10] [i_9])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */short) max((min((((((/* implicit */_Bool) arr_41 [i_0] [3ULL] [i_0] [13U] [13U])) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) var_14)))), (((/* implicit */int) (signed char)29)))), (((/* implicit */int) (((+(var_13))) >= (((/* implicit */long long int) arr_35 [6] [i_8] [i_8] [i_12] [6] [2ULL])))))));
                            var_35 = ((/* implicit */short) ((((/* implicit */int) min((arr_7 [i_12 - 1] [i_12 - 1]), (arr_7 [i_12 - 1] [i_12 - 1])))) % (((((/* implicit */int) ((unsigned char) 5632296496455573012ULL))) << (((((((((/* implicit */_Bool) 2976337200954851460LL)) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) arr_4 [i_9] [i_8])))) + (137))) - (3)))))));
                            arr_48 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [(short)10] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_13]))))))) ? (((arr_46 [i_8] [(short)1] [(short)1] [i_8] [i_8 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_8] [i_8] [(_Bool)1] [i_8 - 1] [i_8 + 1]))) : (319733926934308839ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(unsigned short)10] [i_8])) | (((/* implicit */int) arr_32 [i_9] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned int) arr_15 [(unsigned char)5] [i_9] [i_9])) : (var_7)))) : (((((/* implicit */_Bool) -8471612438018230256LL)) ? (var_9) : (((/* implicit */long long int) var_7)))))))));
                            arr_49 [i_13] [i_12 - 1] [i_9] [i_8 - 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18127010146775242776ULL)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-10955)) && (((/* implicit */_Bool) arr_35 [14LL] [14LL] [i_9] [(signed char)6] [(_Bool)1] [i_13])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))) : (min((((/* implicit */unsigned int) (signed char)-30)), (var_2))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        arr_56 [i_0] [i_9] = (!(((_Bool) max((var_7), (((/* implicit */unsigned int) var_15))))));
                        arr_57 [i_0] [(unsigned char)9] [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(signed char)13] [i_14] [i_14])) ? (((((/* implicit */_Bool) var_2)) ? (-1541442035666654684LL) : (((/* implicit */long long int) arr_22 [i_15] [(short)11] [(short)11] [(short)11])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8 + 1] [i_8])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (arr_34 [i_14] [i_9] [i_14] [(_Bool)1]))))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)255))))))));
                        var_36 -= ((/* implicit */unsigned char) arr_34 [i_8 + 2] [i_8] [i_15 + 2] [i_14 + 1]);
                        var_37 = ((/* implicit */int) arr_5 [(short)2] [i_14]);
                        var_38 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_0 [0ULL])))))))), (max((((1634399288140042659ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)10] [(signed char)10] [(unsigned short)7] [(unsigned short)7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)56)) * (((/* implicit */int) var_10)))))))));
                    }
                    var_39 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_14 - 1] [i_14] [0]))));
                    var_40 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_30 [2U] [i_8 + 2] [i_8 - 2])) ? (arr_30 [i_8] [i_8 + 2] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_41 = (~(((((/* implicit */_Bool) arr_37 [i_8] [i_8])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)31)), ((short)555)))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_31 [5ULL] [(unsigned short)5] [i_9] [(unsigned short)5])))))));
                }
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    arr_60 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) arr_52 [i_0] [i_0] [(unsigned char)6] [(_Bool)1]))), (max((arr_37 [i_8 - 3] [i_8 - 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61620)) ? (((/* implicit */int) var_12)) : (2147483647))))))));
                    arr_61 [i_16] [i_8] [0] &= ((/* implicit */short) ((((((/* implicit */int) min(((unsigned char)212), (arr_7 [i_0] [i_0])))) << (((((/* implicit */int) max(((unsigned char)18), (arr_58 [i_0] [i_8] [(_Bool)0] [i_0])))) - (79))))) - ((+(((((/* implicit */_Bool) 1083147269)) ? (((/* implicit */int) (unsigned char)251)) : (arr_15 [(_Bool)0] [i_8] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 1; i_17 < 15; i_17 += 2) 
                    {
                        var_42 = (((+(max((((/* implicit */long long int) var_4)), (6877620736738803014LL))))) != (((/* implicit */long long int) ((/* implicit */int) var_12))));
                        arr_64 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_21 [i_0])) ? ((~(3513982048U))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (4294967295U))))));
                        arr_65 [(_Bool)1] [i_9] [i_9] [4ULL] [i_8] [i_9] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_9)))) ? (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30)))))) : (max((((/* implicit */unsigned long long int) 7708788759646872339LL)), (13274181930401618237ULL))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_3)) ? (-1435388039) : (((/* implicit */int) (unsigned char)1))))))));
                    }
                }
            }
        }
        arr_66 [i_0] [14ULL] = ((/* implicit */long long int) ((_Bool) (~(((arr_18 [i_0] [(unsigned short)6]) | (((/* implicit */unsigned long long int) var_2)))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_69 [i_18] = ((/* implicit */unsigned short) arr_67 [i_18] [20ULL]);
        /* LoopNest 3 */
        for (int i_19 = 1; i_19 < 20; i_19 += 4) 
        {
            for (short i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    {
                        arr_78 [i_19] [(signed char)18] [(signed char)18] [i_19] = ((/* implicit */unsigned int) ((((2147483647) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) var_17))));
                        var_43 ^= ((/* implicit */short) ((arr_71 [i_19 + 3] [i_19] [i_19 + 2]) <= (((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)22))))));
                        arr_79 [i_20] [i_21] |= ((/* implicit */unsigned char) (-(arr_73 [i_19 + 2])));
                        arr_80 [i_19] [i_19] [i_19] [i_19] = (+(689270196U));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) (unsigned short)24549)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) arr_73 [i_18])) ? (((/* implicit */int) arr_67 [i_18] [3U])) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
}
