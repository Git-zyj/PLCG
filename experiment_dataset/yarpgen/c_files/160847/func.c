/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160847
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) 12574327242138907997ULL)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) var_4)), (12574327242138908002ULL))), (((/* implicit */unsigned long long int) (signed char)96)))) > (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_0 + 1])) & (((((/* implicit */_Bool) var_8)) ? (12574327242138907997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (1023LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (12574327242138907997ULL) : (12574327242138908002ULL)))) ? ((+(((/* implicit */int) arr_1 [(signed char)6])))) : ((+(((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) 5872416831570643614ULL)) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (((/* implicit */int) var_5))))));
            arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((12574327242138908002ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ? (max((12574327242138907997ULL), (((/* implicit */unsigned long long int) ((signed char) 798852058))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517)))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (4787316541904206316LL))))));
            var_20 = ((/* implicit */unsigned short) ((unsigned int) 5872416831570643584ULL));
            arr_8 [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_3)), (((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_2])) : (((/* implicit */int) var_4)))))));
            arr_9 [i_0] [i_2] = var_5;
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) 1334319586)) ? (12574327242138908032ULL) : (5872416831570643584ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_13 [i_0] = ((/* implicit */int) var_4);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65347)) : (((/* implicit */int) (signed char)11)))) - (((/* implicit */int) ((short) var_14)))))))));
        }
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_4))) == (1416046200)))) - (((/* implicit */int) ((_Bool) 18446744073709551607ULL))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_24 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 12574327242138907999ULL)) ? (((/* implicit */unsigned long long int) 380861810)) : (5872416831570643580ULL))) > (((/* implicit */unsigned long long int) var_9))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                arr_22 [i_4 - 1] [i_5] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)255)) == (-2147483635)));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        {
                            arr_27 [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 - 1])) ? (-1) : (((/* implicit */int) (unsigned short)1715))))) ? (((/* implicit */int) (unsigned short)65347)) : (((/* implicit */int) (unsigned char)236))));
                            var_25 *= ((/* implicit */unsigned long long int) var_1);
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_0 [i_4 + 1])) & (var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_15 [i_4 - 1]))))));
                            arr_28 [i_4] [i_4] [9] [9] [i_8] [9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned short)65535)))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) var_13);
            }
            for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 1) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (-1416046194) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_29 = ((/* implicit */_Bool) var_15);
                    arr_33 [i_4 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */int) ((unsigned char) ((unsigned short) var_1)));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) -8636919846490177007LL)) ? (var_6) : (var_6))))))));
                    }
                    var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_1))))))));
                }
                for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8636919846490176993LL)) ? (-1LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -8636919846490176987LL)) > (18446744073709551611ULL)))) : ((-2147483647 - 1))));
                        var_33 = (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1815845955)) >= (3677378983410294726ULL)))) : ((~(arr_3 [i_5] [i_9 - 2] [i_9 - 2]))));
                        var_34 = ((((/* implicit */_Bool) (unsigned short)31469)) ? (((/* implicit */int) ((_Bool) 1048448))) : (((/* implicit */int) ((var_8) >= (((/* implicit */int) var_14))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) ((((var_6) & (((/* implicit */unsigned int) var_12)))) >= (((unsigned int) (signed char)127))));
                        arr_44 [i_4 + 1] [i_14] [i_14 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9)) ? (((((/* implicit */_Bool) var_13)) ? (758517907U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)0))))))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_2)) : (6)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) 511052784U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (var_6))) : (((/* implicit */unsigned int) 1048428))));
                        arr_48 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) (+(-1682377310))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (+(((/* implicit */int) arr_42 [i_4] [i_5] [i_9 - 1] [(unsigned char)8] [i_12] [i_12])))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_39 = ((/* implicit */short) ((-18) - (((/* implicit */int) (unsigned char)32))));
                        var_40 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))) * (4293310601670821668ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47084)))));
                    }
                    var_41 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_36 [i_12] [i_9 - 1] [i_5] [i_4])) : (var_8)))) > (-1LL)));
                }
                for (int i_17 = 2; i_17 < 16; i_17 += 1) 
                {
                    arr_55 [i_4 - 1] [i_5] [i_5] [i_5] [i_17 + 1] [i_17 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-8636919846490176993LL)))) ? (((((/* implicit */_Bool) (signed char)4)) ? (var_15) : (((/* implicit */long long int) var_12)))) : (var_13)));
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : ((~(-8636919846490176993LL)))));
                }
            }
            for (int i_18 = 2; i_18 < 17; i_18 += 4) 
            {
                var_43 = ((/* implicit */unsigned long long int) ((786432LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
                var_44 = ((/* implicit */int) ((signed char) arr_7 [i_4] [i_4] [i_4 + 1]));
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 16; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) (_Bool)1);
                            var_46 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)0));
                            var_47 = ((/* implicit */int) ((((var_8) & (((/* implicit */int) (unsigned char)32)))) > (((/* implicit */int) ((unsigned char) (unsigned char)19)))));
                            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1683)) ? (arr_60 [i_4] [i_4] [i_18 - 1] [i_19] [i_20]) : (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_4 - 1] [(unsigned char)16] [i_18] [i_19 + 2] [i_19 + 2] [(unsigned char)16])))))) : (var_0)));
                        }
                    } 
                } 
                var_49 ^= ((/* implicit */unsigned char) ((unsigned int) ((_Bool) 18446744073709551611ULL)));
                arr_63 [17ULL] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_26 [i_4] [i_4 + 1] [5LL] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))));
            }
            arr_64 [2LL] [i_4 - 1] [2LL] = ((/* implicit */long long int) ((((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) - (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (signed char)55)) : (var_8)))));
            arr_65 [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned short)22265))))) ? (var_3) : (((/* implicit */int) arr_35 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_5] [(unsigned char)17]))));
        }
        var_50 ^= (-(((/* implicit */int) (short)-1687)));
    }
    var_51 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (var_15)));
}
