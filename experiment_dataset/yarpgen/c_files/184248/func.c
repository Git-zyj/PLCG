/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184248
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [(unsigned char)2] [i_1] [i_2] [i_3] [i_4] = min((((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (((arr_1 [i_2]) >> (((((/* implicit */int) (unsigned char)180)) - (170))))))), (arr_10 [i_0] [i_2] [i_3] [i_4]));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((arr_11 [i_0] [i_2] [i_4]), (((/* implicit */int) arr_12 [i_1] [i_1] [i_3])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) max((((/* implicit */short) var_2)), ((short)14439)))))), (max((((((/* implicit */_Bool) (short)-14440)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) arr_4 [i_1] [i_0]))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (short)14439)), (arr_9 [i_0] [(unsigned short)6] [(short)2] [(short)2]))) ^ (((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2977199048641157043ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned int) arr_8 [i_0] [(short)5] [i_2] [i_2])) : (455669908U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14440)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) var_12)) ? (0U) : (((/* implicit */unsigned int) 0)))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)8074))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_21 [6ULL] [6ULL] [i_7] [3ULL])), (min((((/* implicit */int) var_3)), (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_25 [i_5] [i_5]) : (((/* implicit */long long int) var_8))))) ? (((arr_20 [i_5] [15] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-8817))))) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))) : (arr_23 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_8]))))));
                            arr_27 [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */int) (short)8062)) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)44422)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14426))) : (3107857903553158636ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                            var_22 = ((/* implicit */int) (unsigned char)32);
                            arr_28 [i_8] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3107857903553158629ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18167))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18173)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3839297370U)))));
                        }
                    } 
                } 
                arr_29 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_17 [i_5] [i_6]), (arr_17 [i_5] [i_5])))) ? ((-(((/* implicit */int) (signed char)-41)))) : (((/* implicit */int) arr_19 [3U] [i_6]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43105)) ? (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-14451)))) : (((/* implicit */int) (unsigned char)16))));
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    arr_40 [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)81)) * (((/* implicit */int) (short)-23069))))) * (min((4294967287U), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_39 [i_9])) ? (arr_37 [i_9] [i_10] [(signed char)13]) : (((/* implicit */int) (unsigned short)18146)))), (((/* implicit */int) (unsigned short)30093)))))));
                    arr_41 [i_9] [i_9] &= min((((((/* implicit */_Bool) 15338886170156392979ULL)) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-23069)))) : (-957466884))), (((((/* implicit */_Bool) 16147357610955544909ULL)) ? (((/* implicit */int) (short)-14440)) : (((/* implicit */int) arr_31 [i_9])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (((((/* implicit */_Bool) 7250863698351509638ULL)) ? (516158622530915303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14440)))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_10])) ? (15338886170156392980ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14429)))));
                        arr_46 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) arr_24 [i_9] [i_11] [i_9] [i_10] [i_9] [i_9]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 4) 
                        {
                            var_26 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) & (min((arr_45 [i_9] [i_13] [i_11] [i_14 - 1]), (((/* implicit */unsigned long long int) (unsigned short)30088))))));
                            var_27 = ((/* implicit */long long int) 15338886170156392970ULL);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)127)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) ((-1666698975) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)14414)) : (((/* implicit */int) (unsigned short)30292))))));
                            arr_55 [10U] [i_13] [i_13] [9LL] [(unsigned char)15] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)30088)) ? (17333944251349359948ULL) : (arr_22 [i_9] [i_10] [i_11] [i_13])))));
                            var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_18 [i_10] [i_13] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59606))) : (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_9])) << (((var_12) - (4143545715U))))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_11] [i_10])) ? (1478131895U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18167)))))) ? ((-2147483647 - 1)) : (max((957466884), (((/* implicit */int) (unsigned short)24542))))))) ? (((((/* implicit */_Bool) -3294483572269273550LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)10330)) : (((/* implicit */int) (unsigned short)51102))))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))));
                            arr_58 [i_9] [i_9] = (+(((((/* implicit */_Bool) arr_50 [i_9] [i_10] [i_11] [i_13] [i_13] [i_16])) ? (((/* implicit */int) arr_16 [i_10] [i_10])) : (((/* implicit */int) (short)-18157)))));
                            var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)18130)), (((((/* implicit */_Bool) var_7)) ? (var_8) : (-957466886)))))), (3107857903553158636ULL)));
                        }
                        arr_59 [i_9] [i_10] [i_10] [i_11] [i_9] [i_13] = ((/* implicit */unsigned long long int) arr_37 [i_10] [i_11] [i_13]);
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)51102)))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_34 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((~(((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : ((+((((_Bool)1) ? (((/* implicit */int) arr_38 [i_9] [i_9])) : (957466884)))))));
                        var_35 = ((/* implicit */unsigned short) max((min((max((((/* implicit */long long int) 1184567931U)), (arr_53 [i_9] [i_10] [i_11] [i_17]))), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((((/* implicit */int) var_14)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((1245329548) >= (((/* implicit */int) var_1))))))))));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_15 [i_11]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 2) 
                        {
                            var_37 |= ((/* implicit */signed char) (unsigned short)14434);
                            arr_67 [i_17] [i_10] [7U] [i_17] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -957466884)) ? (((/* implicit */int) (short)18931)) : (-1249761763)));
                            var_38 = ((/* implicit */signed char) arr_35 [i_9] [i_10] [i_11]);
                        }
                        /* vectorizable */
                        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            arr_71 [(unsigned short)2] [i_19] [i_19] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32766))) - (4294967286U)))) ? (4536437768672838118LL) : (((/* implicit */long long int) var_12))));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) arr_44 [i_9] [i_9] [i_9] [13U] [i_9] [i_9])) : (-7690988645298095213LL)))) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (15338886170156392980ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51118))))) : (((((/* implicit */_Bool) (unsigned short)6974)) ? (16165199118244416415ULL) : (((/* implicit */unsigned long long int) var_12))))));
                            var_40 *= ((/* implicit */signed char) arr_35 [i_9] [i_9] [i_9]);
                        }
                        for (int i_20 = 0; i_20 < 17; i_20 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_56 [i_9]) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-124)) && (((/* implicit */_Bool) (short)-18157))))) : (957466905)))), (((min((((/* implicit */unsigned long long int) -4536437768672838109LL)), (var_0))) - (arr_22 [i_9] [i_10] [(short)1] [i_20])))));
                            arr_74 [i_17] [i_9] [i_10] [i_11] [i_17] [i_17] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_60 [i_9] [12ULL])) : (((/* implicit */int) (signed char)1))))) ? (max((var_0), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) var_11))))) ? (max((max((((/* implicit */unsigned long long int) var_17)), (5175857860151524044ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_20] [i_11] [i_10] [i_9])) ? (((/* implicit */int) (unsigned char)163)) : (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)93)), ((unsigned short)44639))))));
                        }
                    }
                }
            } 
        } 
    } 
}
