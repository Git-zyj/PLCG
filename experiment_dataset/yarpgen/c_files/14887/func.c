/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14887
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-14874))));
                    arr_8 [i_0] = ((/* implicit */short) 2096565119U);
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned int) min((((long long int) 4108852820U)), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-16120))) / (4361124501978995015LL)))), (max((((/* implicit */unsigned short) (short)-7260)), ((unsigned short)32704)))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((max(((short)-14874), ((short)16119))), (((short) (short)7259)))))));
                                arr_17 [i_0] [i_0] [i_3] [i_4] [i_5] [i_5] = (~(var_4));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (var_7)))) ? (((unsigned int) var_6)) : (min((((/* implicit */unsigned int) (short)-16119)), (1776047320U)))));
                        var_16 = ((((/* implicit */_Bool) 6881786403525905523LL)) ? (2624544467U) : (4294967295U));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_3] [i_7] = ((((/* implicit */_Bool) 3405800418U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-16117))))) : (max((min((((/* implicit */unsigned int) (unsigned short)47010)), (var_6))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14874))))))));
                        var_17 = ((/* implicit */short) min((((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) var_8))))), ((-(-9223372036854775801LL)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((unsigned short) var_7)), (((/* implicit */unsigned short) var_11)))))));
                        arr_28 [i_0] [i_3] = min((((unsigned int) max(((short)-16115), ((short)-31470)))), (min((1635336801U), (889166877U))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47005)) ? (((/* implicit */int) (unsigned short)47010)) : (((/* implicit */int) (short)31236))))), ((~(1285692759175988488LL))))))));
                        var_20 = ((unsigned int) max((max(((short)14167), ((short)14874))), (((/* implicit */short) ((414788513U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        arr_29 [i_8] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) (short)16541);
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)10408))) - (((/* implicit */int) (unsigned short)65518))));
                        arr_33 [i_0] [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_4) : (1879636563U)));
                    }
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                        arr_39 [i_1] [i_3] [i_1] [i_0] = max((((/* implicit */unsigned int) (unsigned short)52748)), (max((var_2), (min((var_4), (((/* implicit */unsigned int) (unsigned short)2965)))))));
                        var_22 -= ((/* implicit */unsigned short) max((max((6467058040060221348LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) max((716658986U), (((/* implicit */unsigned int) var_10)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */short) ((unsigned short) max((((/* implicit */int) ((short) var_0))), (((((/* implicit */int) (short)-16108)) | (((/* implicit */int) var_10)))))));
                            var_24 *= ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)7049))))), ((short)10303)));
                            var_25 = ((/* implicit */unsigned int) ((short) -6545051113434554793LL));
                        }
                        for (short i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned int) var_8);
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) 4294967293U)))) ^ (-6545051113434554797LL))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            var_28 += ((unsigned int) ((short) ((unsigned short) (unsigned short)8064)));
                            var_29 = ((/* implicit */short) (~((~(((/* implicit */int) ((short) (short)32752)))))));
                            arr_51 [i_14] [i_1] [i_1] = ((((/* implicit */_Bool) max((min((-6467058040060221348LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (((unsigned short) (short)-32754)))))) : (((((/* implicit */_Bool) max((2415330733U), (4128768U)))) ? (((((/* implicit */_Bool) (short)23475)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (662799380U))) : (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                            {
                                arr_54 [i_15] [i_15] &= ((/* implicit */unsigned int) var_10);
                                var_30 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (unsigned short)30300)), (2136373216U)))));
                                var_31 = ((/* implicit */short) min((var_5), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) * (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20747)))))))));
                                var_32 = ((unsigned int) min((var_1), (4131536912U)));
                            }
                            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                            {
                                var_33 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) max(((unsigned short)18520), ((unsigned short)45421)))), (max((6467058040060221345LL), (((/* implicit */long long int) var_7)))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4164442911U))))));
                                var_34 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))), (2731768969U)))));
                                var_35 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((short) (unsigned short)54697))), (((unsigned int) 4294967279U)))), (4U)));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) ((unsigned int) var_9));
                            /* LoopSeq 3 */
                            for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) 
                            {
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) max((((((/* implicit */int) var_11)) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3463))) : (var_4))) - (3441U))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) 4235762517U))) : (((/* implicit */int) max((var_10), (var_8)))))))))));
                                var_38 = ((/* implicit */short) max((min((119082601U), (((unsigned int) var_2)))), (4U)));
                            }
                            for (long long int i_20 = 1; i_20 < 12; i_20 += 2) 
                            {
                                var_39 = ((/* implicit */short) ((unsigned int) var_10));
                                arr_68 [i_0] [i_1] [i_17] [i_0] [i_17] [i_20] [i_18] = ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) var_8)), (1892859293185287863LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */long long int) var_8)), (9223372036854775807LL)))))) : (var_1));
                                arr_69 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) / (453586379084495762LL)))) ? (((/* implicit */int) min((((short) 1563794539U)), (((short) var_4))))) : (((/* implicit */int) (unsigned short)30319))));
                            }
                            for (long long int i_21 = 1; i_21 < 12; i_21 += 2) 
                            {
                                var_40 = ((/* implicit */short) ((unsigned int) (short)384));
                                var_41 |= ((/* implicit */unsigned int) ((max((min((((/* implicit */unsigned int) (unsigned short)43962)), (var_4))), (((unsigned int) var_6)))) < (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)47010), ((unsigned short)21573)))))));
                                var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (unsigned short)54779))))))));
                                var_43 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) min((-492714821694004194LL), (((/* implicit */long long int) (short)1022)))))), (((long long int) min((var_6), (var_5))))));
                            }
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) max((7812848970891807303LL), (((/* implicit */long long int) (unsigned short)35236)))))));
                            var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)9909))));
                            arr_72 [i_0] [i_0] [i_1] [i_18] [i_18] [i_17] |= ((/* implicit */long long int) (unsigned short)43962);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 4) 
    {
        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 14; i_24 += 4) 
                {
                    for (unsigned int i_25 = 0; i_25 < 14; i_25 += 3) 
                    {
                        {
                            var_46 ^= 3216621560U;
                            var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((max((7812848970891807303LL), (((/* implicit */long long int) (short)16523)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18530)) && (((/* implicit */_Bool) (unsigned short)20905)))))))))));
                            arr_85 [i_22] [i_22] [i_23] [i_22] [i_24] [i_25] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned int) ((var_9) == (var_9)))), (((var_5) & (var_9))))));
                            var_48 |= ((/* implicit */short) max((var_4), (var_2)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 14; i_26 += 4) 
                {
                    for (unsigned short i_27 = 0; i_27 < 14; i_27 += 3) 
                    {
                        {
                            arr_92 [i_26] [i_27] = ((unsigned int) (!((!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
                            var_49 = ((/* implicit */short) ((unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                        }
                    } 
                } 
                var_50 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((unsigned short) 8388607U))) ^ (((/* implicit */int) max(((short)9916), ((short)-9916)))))), (((/* implicit */int) ((unsigned short) (-(var_9)))))));
            }
        } 
    } 
}
