/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140138
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
    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_6)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) ^ (((/* implicit */unsigned long long int) ((var_6) << (((4194048LL) - (4194047LL)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_4 [i_0] |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 3]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_11 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7815))) * (18446744073709551598ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) >= (((arr_5 [i_1]) >> (((var_9) - (13988444994302033931ULL)))))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)22693)) & (((/* implicit */int) (signed char)97))))) : (((arr_5 [i_1]) ^ (((/* implicit */unsigned long long int) arr_6 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28795)) ? (((((/* implicit */int) (signed char)127)) & (arr_6 [i_1]))) : (((arr_6 [i_1]) & (arr_6 [i_1])))))) : (var_9)));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [(unsigned char)3] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) var_7)))))) <= (((unsigned long long int) (short)-19053))));
                    var_13 = ((/* implicit */_Bool) ((1832516361U) << (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (2640278227U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (short)-17043)))))) ? (((((((/* implicit */_Bool) var_3)) ? (arr_11 [i_2] [(short)18] [i_3] [i_5]) : (((/* implicit */long long int) 2230960384U)))) & (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)0)), (arr_15 [i_1] [i_1] [i_1 + 2] [i_1] [4U] [4U])))))) : (((/* implicit */long long int) ((unsigned int) 2530061733U)))));
                                var_15 = ((/* implicit */_Bool) (signed char)-10);
                                var_16 = ((/* implicit */long long int) -1621757131);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_1))))) : (max((((/* implicit */long long int) arr_9 [i_1] [i_2] [i_3] [i_6])), (4543696735249941168LL))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20302)))));
                        arr_21 [i_6] [i_1] [i_1] [(short)20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 405347515)) / (4713424066702253100LL)))) ? (((((/* implicit */_Bool) ((unsigned int) 12977326569792220525ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1]))) : (((((/* implicit */unsigned long long int) arr_20 [i_6] [i_6] [i_3] [i_2] [i_2] [i_1])) * (arr_5 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0))))));
                        arr_22 [i_1 + 2] [i_1 + 2] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((((_Bool)1) ? (var_9) : (6917529027641081856ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))) ? (((/* implicit */unsigned int) arr_19 [i_1] [i_2] [i_3] [0LL] [i_6])) : ((-(1370055081U)))));
                        arr_23 [i_1] [i_2] [i_2] = ((/* implicit */signed char) arr_20 [(unsigned short)11] [i_3] [(signed char)10] [i_1] [i_1] [i_1]);
                    }
                    var_18 = ((((/* implicit */unsigned int) (~(arr_19 [i_1] [i_1] [i_3] [i_1 + 2] [i_1 + 2])))) * (((unsigned int) max((((/* implicit */int) arr_8 [i_2] [i_1])), (var_7)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [8ULL] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((arr_16 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [(_Bool)1] [i_1 - 1]) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))))))))));
    }
    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            arr_28 [i_7] [i_8] [i_7 + 1] = ((/* implicit */unsigned int) ((((519091321) == (((/* implicit */int) arr_9 [i_7] [i_7] [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) 68702699520ULL)) ? (11510261727381401868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_29 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 488247665U)) ? (5416528203505235908LL) : (((/* implicit */long long int) 3629844548U)))) - (((/* implicit */long long int) ((unsigned int) var_5)))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_8)))) : (((var_7) / (((/* implicit */int) (short)11204)))))))));
        }
        for (int i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            arr_33 [i_7] [i_7] = ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_32 [i_7])))) : (((/* implicit */int) (signed char)59)));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (10867765478703719777ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3941))) > (arr_25 [i_10] [i_9 - 2])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_22 = 4294967295U;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 2) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (495588265639242541LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 467844977U)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_9 - 1] [i_10]))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_9] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)15715)) && (((/* implicit */_Bool) 0ULL)))))));
                    }
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_27 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) + (arr_46 [i_14] [i_14])));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */int) arr_18 [i_7 - 1] [i_7] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_18 [i_7 + 1] [i_7] [i_7] [i_7 - 1])))))));
                    arr_47 [i_7] [i_9] [i_7] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)137)) ? (arr_26 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7]))) & (13186074288520242780ULL)))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_7] [i_9 - 1]))) - (arr_31 [i_7] [i_9 - 3])));
                    var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2936053255730472531LL)) ? (((/* implicit */int) arr_35 [i_10] [i_9] [i_10])) : (((/* implicit */int) arr_35 [i_10] [i_9 - 3] [i_10]))));
                    var_31 |= ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)110))))));
                    arr_51 [i_7] [i_7] [i_10] [i_15] = ((/* implicit */signed char) ((long long int) ((var_9) << (((10533002291476383074ULL) - (10533002291476383049ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 4; i_16 < 19; i_16 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65535)) >> (((6136850903468850513ULL) - (6136850903468850501ULL)))))));
                        var_33 = ((/* implicit */unsigned char) (+(arr_19 [i_7] [i_9 - 1] [i_7 - 1] [i_15] [i_16 - 2])));
                    }
                }
                for (int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    arr_57 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_7] [i_9] [i_10] [i_17] [i_17] [i_7] [i_7])) * (((((((/* implicit */_Bool) 273760003)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_7])))) / (((/* implicit */int) arr_17 [i_7] [i_9 - 3] [i_10] [i_17] [i_7 + 1]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_48 [i_7] [i_9] [i_10] [i_17] [i_18]) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (9146317552516806771ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31315)))))) ? ((-(arr_48 [i_7] [i_7] [i_10] [i_17] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-38)) != (((/* implicit */int) var_3)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) -2044395921)))))) >= (max((((/* implicit */unsigned long long int) (short)19419)), (arr_30 [i_7])))))))));
                        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)8)))))))));
                        arr_60 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7] = ((/* implicit */int) arr_5 [i_7]);
                        arr_61 [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((!(((/* implicit */_Bool) 16009622648854671555ULL)))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 4729793130725862128ULL)))))))));
                        arr_62 [i_7] [i_7] [i_9] = ((/* implicit */long long int) arr_40 [i_7] [i_9] [i_9] [i_9] [i_17] [i_17] [i_18]);
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        arr_65 [i_7 + 1] [i_9 - 2] [i_7] = ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_8)));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_64 [i_17] [i_9 - 3] [i_10] [i_17] [i_19] [i_7 - 1])) : (((/* implicit */int) arr_64 [i_7 + 1] [i_9 - 3] [i_9 - 3] [i_10] [i_9 - 3] [i_7 - 1]))));
                    }
                    var_37 = ((/* implicit */unsigned short) ((long long int) ((arr_54 [i_9] [i_9 - 3]) ? (((/* implicit */int) arr_54 [i_7] [i_17])) : (((/* implicit */int) arr_54 [i_9 - 1] [i_17])))));
                    var_38 = ((/* implicit */signed char) 3077498452U);
                }
                /* vectorizable */
                for (int i_20 = 3; i_20 < 19; i_20 += 1) 
                {
                    var_39 += ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))));
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) (unsigned char)226)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110)))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 68185443)) ? (227164569242613934ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7])))))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [(signed char)1] [(signed char)1] [i_21]))) - (arr_67 [i_21] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) (+(728540397)))))) : (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-34)) ? (arr_37 [i_9] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) * (14896899633911633865ULL)));
                }
            }
            for (unsigned int i_22 = 2; i_22 < 17; i_22 += 2) 
            {
                var_43 = ((/* implicit */unsigned int) max((var_43), (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_55 [i_22] [i_22] [i_22] [i_22])))) ? (((unsigned int) arr_59 [i_22 - 1] [i_22] [i_7])) : (((/* implicit */unsigned int) max((-603654349), (((/* implicit */int) (signed char)-16))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_22] [i_9 + 1])) && (((/* implicit */_Bool) arr_17 [i_9 - 1] [i_9 - 1] [i_22] [i_22] [i_9]))))))))));
                arr_75 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)246)) ? (arr_19 [i_7] [i_22 + 3] [i_22 + 4] [i_22] [i_7]) : (268435456))), (((((/* implicit */_Bool) arr_19 [i_7] [i_22 + 2] [i_22 + 2] [i_22] [i_22])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_63 [i_22 - 2] [i_22 + 4] [i_22 + 1] [i_22 + 1] [i_7] [i_22 + 4]))))));
            }
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) ((arr_7 [i_7 + 1] [i_9 - 1]) || (arr_7 [i_7 - 1] [i_9 - 2])))) : (((arr_7 [i_7 + 1] [i_9 - 2]) ? (((/* implicit */int) arr_7 [i_7 + 1] [i_9 + 1])) : (((/* implicit */int) arr_18 [i_7] [i_7 - 1] [i_7] [i_7 - 1]))))));
            var_45 = ((unsigned long long int) (-(((/* implicit */int) arr_58 [i_9] [i_9] [i_9] [i_7 - 1] [i_9 + 1]))));
        }
        arr_76 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1981949049934229151ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) : (9223372036854775807LL)));
        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) arr_24 [i_7] [i_7 + 1])) | (arr_71 [6ULL] [i_7 - 1] [i_7 + 1] [6ULL]))))) % (((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_27 [18ULL])))))))))));
        var_47 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_52 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]), (arr_52 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])))) ? (((((_Bool) var_7)) ? (((((/* implicit */_Bool) 1534126633U)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (signed char)-57)))))) : (((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (((/* implicit */int) arr_58 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1])) : ((~(864379565)))))));
    }
    var_48 = ((/* implicit */unsigned long long int) 4171626668U);
    var_49 = ((/* implicit */long long int) var_9);
    var_50 = ((/* implicit */signed char) min((((/* implicit */short) ((_Bool) var_1))), (var_3)));
}
