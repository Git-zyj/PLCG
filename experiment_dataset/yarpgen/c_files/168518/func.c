/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168518
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((var_9), (((/* implicit */long long int) var_4)))), ((~(var_9))))))));
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min((min((max((var_0), (var_0))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))), (max((max((var_1), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) (((!(((/* implicit */_Bool) -772491978)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_9)))))) : (max((min((((/* implicit */unsigned long long int) var_8)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (min((var_0), (((/* implicit */unsigned long long int) var_6))))))) ? ((((+(var_9))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_9)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1992465608784686698LL)) ? (1763880907) : (((/* implicit */int) (short)-5335)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_3))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))))) : (((((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) var_4)) - (76)))))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_0))) : ((~(var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2147483647)), (-8114015609073801082LL)))), (min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_7))))), (max((var_1), (((/* implicit */unsigned long long int) var_5))))))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */_Bool) var_9);
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_7)), (var_3))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))))) : (((((/* implicit */_Bool) max((var_1), (var_0)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_18 = ((/* implicit */unsigned int) (~(max(((+(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))))))));
                            var_19 |= ((/* implicit */unsigned int) var_8);
                            var_20 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (min((var_9), (var_2))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (min((var_9), (((/* implicit */long long int) var_8))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((max((max((var_3), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((var_6), (var_6)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_2)))), (min((15198870788209988135ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-100))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_13 = 2; i_13 < 13; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) max((15198870788209988153ULL), (((/* implicit */unsigned long long int) (short)27580))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (3387877177878772491ULL) : (((/* implicit */unsigned long long int) 3830375820U))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_5))))) : (min((var_0), (var_3)))))) ? (((((/* implicit */_Bool) ((var_1) << (((var_0) - (10573932912774562884ULL)))))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_0))) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (var_0))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_6)), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_0)))) ? (((((/* implicit */unsigned long long int) var_2)) / (var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_0))))))))));
                            var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) var_2)))), (max((var_3), (((/* implicit */unsigned long long int) var_2))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_2)))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_1))) : (min((((/* implicit */unsigned long long int) var_2)), (var_1))))) : (((max((((/* implicit */unsigned long long int) var_2)), (var_3))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), (var_8)))), (min((((/* implicit */unsigned long long int) var_5)), (var_0)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)43519))))), (max((((/* implicit */unsigned long long int) var_9)), (var_0)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_16 = 1; i_16 < 16; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_7)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_5))))) >= (((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2))))))) : (((((((/* implicit */_Bool) -932436112)) || (((/* implicit */_Bool) 163877793)))) ? (var_0) : (((/* implicit */unsigned long long int) min((-8887110452763839748LL), (((/* implicit */long long int) 4143757765U)))))))));
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max(((unsigned short)22029), (((/* implicit */unsigned short) (_Bool)0)))), (max((var_7), (var_5)))))) ? ((+(min((574454236), (-163877822))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (var_0)))))))));
                            var_30 = ((/* implicit */unsigned int) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((unsigned short)50934), (((/* implicit */unsigned short) (signed char)-59))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) / (min((var_1), (((/* implicit */unsigned long long int) var_6))))))));
                            var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_3) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7584789443139404355LL)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)204)), ((short)-9978)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27065)) || (((/* implicit */_Bool) (short)-9985))))))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
        {
            var_33 = ((/* implicit */long long int) min((var_33), (max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-2411178465631194623LL) : (8887110452763839769LL))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (short)-10002)) : (((/* implicit */int) (_Bool)1)))))))))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((min((var_3), (var_3))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_6))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_6)) - (48))))))))));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45495))) < (-2435966204449064745LL))))));
            var_36 = min((max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned short) var_4))))), (var_0))), (((/* implicit */unsigned long long int) min(((~(var_2))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))))));
            var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_8)), (var_9))), (max((((/* implicit */long long int) var_7)), (var_2)))))) <= (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-8887110452763839748LL)))), (min((var_0), (var_0)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
            {
                {
                    var_38 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))))), ((-((-(((/* implicit */int) var_5))))))));
                    var_39 = ((/* implicit */unsigned short) min((3247873285499563481ULL), (((/* implicit */unsigned long long int) -2084467476))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 22; i_22 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            for (signed char i_24 = 1; i_24 < 21; i_24 += 3) 
            {
                {
                    var_40 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_9))))));
                    var_41 = ((/* implicit */unsigned short) (~((+(var_0)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_25 = 0; i_25 < 22; i_25 += 3) 
        {
            var_42 += ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
            var_43 = ((((/* implicit */_Bool) ((-2435966204449064763LL) - (-7584789443139404355LL)))) ? (((-4265110751053937240LL) ^ (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1110))));
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2435966204449064744LL)) ? (48835327U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11152)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)))));
        }
        for (unsigned int i_26 = 0; i_26 < 22; i_26 += 3) 
        {
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2764))) : (133109685U)))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (var_9))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
            var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)95)))))));
        }
        var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 3 */
    for (short i_27 = 0; i_27 < 23; i_27 += 3) 
    {
        for (short i_28 = 0; i_28 < 23; i_28 += 3) 
        {
            for (unsigned short i_29 = 2; i_29 < 22; i_29 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_30 = 1; i_30 < 20; i_30 += 1) 
                    {
                        for (unsigned long long int i_31 = 0; i_31 < 23; i_31 += 3) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))), (var_3))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_5))))) : (max((((/* implicit */unsigned long long int) (unsigned short)0)), (15198870788209988133ULL)))))));
                                var_49 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (8125393196766129042LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (min((min((var_0), (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_5)))))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1114376125301390626LL))));
                    /* LoopNest 2 */
                    for (long long int i_32 = 0; i_32 < 23; i_32 += 3) 
                    {
                        for (unsigned int i_33 = 0; i_33 < 23; i_33 += 3) 
                        {
                            {
                                var_51 = min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned short) var_4))))))), (((/* implicit */long long int) var_7)));
                                var_52 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(var_2)))), (min((var_3), (((/* implicit */unsigned long long int) var_4))))))));
                                var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 490223275U)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (short)-26002))))), (((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_54 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (var_1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))) ? (((((/* implicit */_Bool) (unsigned short)58752)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_8)) - (6888)))))))));
}
