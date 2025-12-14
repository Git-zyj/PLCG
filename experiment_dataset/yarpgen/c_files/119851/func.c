/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119851
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
    var_13 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_14 -= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (short)-26002))))));
                    var_15 = ((/* implicit */short) 3821711546U);
                    arr_8 [(signed char)2] [i_2] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65525)) * (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65525)) > (((/* implicit */int) (unsigned short)65531))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [12LL]))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43194)) == ((-(((/* implicit */int) (unsigned short)23177))))));
                    var_17 = ((/* implicit */unsigned int) 1128573401067474035LL);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((signed char) (unsigned short)58123))));
                                arr_17 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((unsigned long long int) ((short) (unsigned char)0)))));
                                arr_18 [i_0] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) var_12)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58134)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)38455)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) 3196446875U);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8026)) ? (3301212705U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57510))))))));
                        arr_21 [i_0] [(unsigned short)4] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-4762678817628578795LL), (((/* implicit */long long int) (unsigned short)57510))))) ? (((/* implicit */long long int) ((((arr_11 [i_6 + 3] [6ULL] [i_1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25676))))) << (((/* implicit */int) ((9586180523519965121ULL) < (((/* implicit */unsigned long long int) var_8)))))))) : ((~(-3455087722430678554LL)))));
                        var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)5719)) ? (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43194))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)22357))))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) var_12)) : (arr_20 [(short)17] [i_1] [i_1])));
                        arr_24 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)61369))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-17221)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62382))) : (var_12))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_26 [(short)20]))))));
                            arr_27 [i_0] [i_1] [(unsigned char)2] [i_7] &= 0ULL;
                            var_24 = ((/* implicit */short) ((long long int) arr_14 [i_8] [i_7] [i_8] [i_0 - 2] [i_0 - 2]));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_23 [i_0 - 2] [i_1] [i_3] [i_7] [i_3])) ? (2147483647LL) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_0 - 2] [i_0] [i_0 + 1])) + (((/* implicit */int) (signed char)-1)))))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_8))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_29 = ((/* implicit */long long int) (((~(1986128767U))) >> ((((-(var_7))) - (870616744U)))));
                        arr_34 [i_10] [i_3] [i_0] = ((/* implicit */short) (+(((unsigned int) min((var_2), (var_2))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_0 + 1] [i_0 + 1] [i_1] [i_3] [9U] [i_11] = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (short)126))))) <= (arr_20 [i_0] [i_1] [i_11])))));
                        var_30 = ((/* implicit */unsigned char) (signed char)-115);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 3; i_13 < 21; i_13 += 1) 
                        {
                            var_31 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_30 [i_0 + 1])) ? (arr_39 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) 2642005470U)))) + (((/* implicit */unsigned long long int) (-(-1687436046881118058LL))))));
                            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17254))));
                            var_33 = ((/* implicit */unsigned int) (short)-21131);
                            var_34 = ((/* implicit */unsigned short) min((var_34), (var_0)));
                        }
                        var_35 = ((/* implicit */unsigned int) (((((~(8891663633753681159LL))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (496756356U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57509)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) arr_40 [i_0 - 2] [i_1]))))));
                        var_36 = ((/* implicit */unsigned char) max((1687436046881118063LL), (((/* implicit */long long int) 538800889U))));
                        var_37 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_39 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)123))));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            var_40 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)59791))));
                            var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)14))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 3; i_17 < 18; i_17 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned char) (unsigned short)65535);
                            var_43 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26101))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((var_9) - (5718110019453440378ULL))))))));
                        }
                        for (unsigned char i_18 = 3; i_18 < 18; i_18 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))));
                            var_45 = ((/* implicit */unsigned long long int) var_0);
                        }
                    }
                }
                arr_56 [i_0] [6U] = ((/* implicit */unsigned short) 4212312382U);
                var_46 = ((/* implicit */long long int) ((2562020732U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))));
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) 9223372036854775807LL);
    var_48 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) ((((/* implicit */_Bool) 3301212705U)) ? (4212312380U) : (934852263U)))));
}
