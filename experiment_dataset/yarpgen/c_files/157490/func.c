/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157490
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-83)) ? ((-((~(var_3))))) : (var_3)));
    var_14 = ((/* implicit */signed char) var_8);
    var_15 *= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 = var_8;
                        var_17 = ((/* implicit */unsigned int) (signed char)6);
                    }
                } 
            } 
        } 
        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)32))))));
        var_19 = ((/* implicit */signed char) var_11);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_20 = var_1;
                    var_21 = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_0))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        for (long long int i_10 = 1; i_10 < 18; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) var_0);
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_10))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))))))));
                                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-116)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-6955011250115761321LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (signed char)112))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)));
                        var_30 ^= ((/* implicit */unsigned char) var_1);
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) (signed char)74);
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (signed char)-13))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))));
                            var_34 ^= ((/* implicit */unsigned char) var_10);
                            var_35 = ((/* implicit */long long int) var_2);
                        }
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)28651)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 954260803U)) ? (753261337U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                            var_37 *= ((/* implicit */int) (~(9223372036854775807LL)));
                        }
                        var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (short)-26130)) : (((/* implicit */int) (signed char)-82))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (short)19833)) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (signed char)127)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))))));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                {
                    var_40 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (short)16)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))) : (var_2)));
                    var_41 = ((/* implicit */short) var_3);
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-21263)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                {
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-83)) : ((+(((/* implicit */int) var_11)))))))));
                    /* LoopSeq 2 */
                    for (short i_21 = 1; i_21 < 19; i_21 += 1) 
                    {
                        var_44 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (short)15492)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6383)))) : (((((/* implicit */_Bool) (short)21278)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (short)-21279))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) : (var_3))))));
                        var_45 = ((/* implicit */int) (signed char)-40);
                        /* LoopSeq 3 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned short) var_0);
                            var_47 = var_0;
                        }
                        for (unsigned char i_23 = 4; i_23 < 19; i_23 += 4) 
                        {
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)101)) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))));
                            var_49 |= ((/* implicit */short) (+(var_2)));
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (short)-16501))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_0)))))));
                        }
                        for (unsigned long long int i_24 = 3; i_24 < 19; i_24 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
                            var_52 += ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))));
                        }
                    }
                    for (unsigned int i_25 = 0; i_25 < 21; i_25 += 4) 
                    {
                        var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)139)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)48))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_26 = 0; i_26 < 21; i_26 += 4) 
        {
            var_56 = ((/* implicit */unsigned int) max((var_56), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3)))));
            var_57 &= var_11;
        }
    }
}
