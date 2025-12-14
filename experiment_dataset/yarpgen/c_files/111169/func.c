/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111169
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1 - 2] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 4973748915222513821ULL))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_19 -= ((/* implicit */short) max((((/* implicit */long long int) (((_Bool)1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 2])))))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2]))) : (var_8)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((_Bool) ((((unsigned long long int) var_14)) >= (((/* implicit */unsigned long long int) (((_Bool)0) ? (var_11) : (var_11))))));
                        arr_15 [i_1 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_8)) ? (1099511627768LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_0 - 3])) : (((/* implicit */int) var_5)))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            arr_19 [i_0] [i_0 + 4] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)32767)))), (((2009681886) & (((/* implicit */int) var_14)))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_7 [i_4 + 2] [i_3 + 1] [i_1 - 4] [i_0 - 3]))));
                            var_22 = ((/* implicit */unsigned short) 13472995158487037786ULL);
                            arr_20 [i_0 + 1] [i_1] [i_2] [i_1] [i_0 + 1] [i_4] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) && (var_1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) -1099511627768LL)))))));
                        }
                    }
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_2] [(short)15] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_1 - 1] [i_1 - 2]) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (1099511627768LL))))))) : (((/* implicit */int) var_15))));
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_10 [i_5 - 2] [i_1 + 1] [i_1 - 2] [i_0 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (1417547664U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_3 [i_1] [i_1] [i_5 - 2]))))))));
                        var_24 ^= ((/* implicit */signed char) arr_5 [i_1 - 1]);
                        var_25 = ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        arr_27 [i_6] = ((/* implicit */unsigned short) ((arr_14 [i_0] [i_1] [i_1] [i_6 + 3]) ? (((((/* implicit */_Bool) var_13)) ? ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0 - 3] [i_1] [i_1] [i_6 + 3]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2] [i_6])))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1 + 1] [i_6 + 4])) ? (((/* implicit */int) (short)27040)) : (((/* implicit */int) arr_9 [i_0 + 3] [i_1 + 1] [i_6 - 3])))))))));
                        var_27 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)125)), (arr_12 [i_0 + 1] [i_1 - 2]))))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    arr_30 [i_0] [i_1 - 1] [(_Bool)1] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_1 - 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 4; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_1] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((((long long int) var_11)) - (654090710LL)))))) ? (((((/* implicit */int) var_18)) * (((/* implicit */int) arr_3 [i_9 - 1] [i_1 - 1] [i_0 + 1])))) : (664125802)));
                                arr_36 [i_0 + 2] [i_1] [i_0 + 2] [i_8 - 4] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_23 [i_7] [i_7] [i_7] [i_8 - 1]) ? (3766161648U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((arr_23 [i_1] [i_1] [i_8 + 1] [i_8 - 1]) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) arr_23 [i_7] [i_8 + 1] [i_8 - 1] [i_8 - 1])))) : (((((/* implicit */int) arr_23 [i_8 - 4] [i_8 + 1] [i_8 - 2] [i_8 - 1])) ^ (((/* implicit */int) arr_23 [i_1] [i_7] [i_7] [i_8 - 1]))))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) -1099511627783LL))));
                                arr_37 [i_0] [i_0] [i_7] [i_8 - 2] [i_9 - 1] &= ((/* implicit */int) ((((((/* implicit */int) arr_22 [i_9] [i_0 + 2] [i_0 + 2] [i_0 + 2])) != (((/* implicit */int) ((_Bool) (unsigned char)97))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) -1099511627768LL)) : (var_4)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (var_11))) : (((/* implicit */int) arr_12 [i_0] [i_9 + 3])))))));
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_1 - 3] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 3] [i_0] [i_0 - 3] [i_0] [i_1 - 2])))));
                }
                for (int i_10 = 1; i_10 < 19; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                arr_47 [i_0] [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) % (((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (9223372036854775794LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_29 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)148))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_17) ? (((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))) : (((arr_42 [i_0] [i_1] [i_1] [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1417109813U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [(_Bool)1]))) : (15428544158827152945ULL)))) ? (((((/* implicit */_Bool) (unsigned short)38236)) ? (((/* implicit */int) var_2)) : (var_11))) : (((/* implicit */int) (unsigned char)101)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 2] [i_10 - 1] [i_10 - 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((short) 16525046929571771491ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 3; i_13 < 19; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_54 [i_0] [(_Bool)1] [i_13 + 2] [i_13 - 2] [i_14] [i_10] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 14)), (((((/* implicit */_Bool) (unsigned char)207)) ? (2231982265036186253ULL) : (16214761808673365353ULL)))));
                            var_31 += ((/* implicit */_Bool) var_18);
                            var_32 ^= ((/* implicit */unsigned char) max((var_15), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))))));
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_10 + 1] [i_13 + 2] [i_15 - 1] [i_0 + 3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_10 [i_0] [i_13 + 2] [i_15 - 1] [i_0 - 2])))) > (((((/* implicit */int) arr_10 [i_0] [i_13 - 1] [i_15 - 1] [i_0 + 2])) + (((/* implicit */int) arr_10 [i_0 + 3] [i_13 - 1] [i_15 - 1] [i_0 - 1]))))));
                            arr_58 [i_10] [i_13] [i_10 + 2] [i_10] [i_10] = ((/* implicit */unsigned char) ((signed char) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1985271353)) ? (arr_44 [i_0 + 2] [i_0 - 2] [i_1 - 4] [i_10] [i_10] [i_10] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_13 + 1] [i_10 + 1] [i_1])))))) : (((var_1) ? (3593876759616983874LL) : (((/* implicit */long long int) (-2147483647 - 1))))))));
                            arr_59 [i_0 - 2] [i_0] [i_0 - 2] [i_10] [i_15 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_4)))) ? ((-(((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) -512405310)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) var_17)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) arr_16 [i_10 - 1] [i_0 - 1] [i_15 - 1] [i_10 - 1] [i_13 + 1]))))));
                            var_34 ^= ((/* implicit */unsigned short) var_11);
                        }
                        arr_60 [i_13] [i_1] [i_1] [i_0 + 3] |= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_13))));
                    }
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1 - 4] [i_10 + 1])))))));
                }
                arr_61 [i_1 - 2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 512405331)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_45 [i_1] [i_1])))))) : (arr_44 [i_0] [i_0 + 4] [i_0 + 2] [i_1] [i_1 - 4] [i_1] [i_0 + 4]))))));
                var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_56 [i_0 + 3] [i_1 - 3]), (((/* implicit */unsigned char) var_10))))) ? (((/* implicit */int) ((unsigned char) 1761365662))) : (((/* implicit */int) arr_56 [i_0 + 4] [i_1 - 3]))));
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)37821)))))));
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) ((short) var_12));
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 8; i_16 += 4) 
    {
        for (unsigned short i_17 = 1; i_17 < 7; i_17 += 1) 
        {
            {
                var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_62 [i_16 - 1]) >> (((var_16) - (3981964213U)))))) ? (16223036974835667511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_56 [i_16] [i_16])) == (((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        {
                            arr_75 [i_16] [i_16] [i_16 + 2] [i_16 + 2] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) arr_16 [i_18] [i_18] [i_18] [i_18] [i_16 + 2])) ? (3126083387U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((((_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (var_16) : (((/* implicit */unsigned int) 2003978463))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 2147483632)) : (18366242275976195880ULL)))))));
                            arr_76 [i_19] [i_19] [i_16] [i_16] [i_17] [i_16] = ((/* implicit */unsigned short) ((arr_68 [i_16 + 2] [i_19]) << (((((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */unsigned long long int) arr_25 [i_16 + 1] [i_17 - 1])), (arr_33 [i_17 + 1] [i_17] [i_18] [(unsigned char)0] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_16 + 1]))))) - (3368963450513614380ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_40 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((var_14) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2))))))));
}
